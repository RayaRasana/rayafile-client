#include "finder-sync/finder-sync-host.h"

#include <vector>
#include <mutex>
#include <memory>

#include <QDir>
#include <QFileInfo>

#include "account.h"
#include "account-mgr.h"
#include "auto-login-service.h"
#include "settings-mgr.h"
#include "rayafile.h"
#include "daemon-mgr.h"
#include "rpc/local-repo.h"
#include "rpc/rpc-client.h"
#include "filebrowser/file-browser-requests.h"
#include "filebrowser/sharedlink-dialog.h"
#include "filebrowser/seafilelink-dialog.h"
#include "filebrowser/uploadlink-dialog.h"
#include "ui/private-share-dialog.h"
#include "utils/utils.h"
#include "utils/file-utils.h"

enum PathStatus {
    SYNC_STATUS_NONE = 0,
    SYNC_STATUS_SYNCING,
    SYNC_STATUS_ERROR,
    SYNC_STATUS_IGNORED,
    SYNC_STATUS_SYNCED,
    SYNC_STATUS_READONLY,
    SYNC_STATUS_PAUSED,
    SYNC_STATUS_LOCKED,
    SYNC_STATUS_LOCKED_BY_ME,
    MAX_SYNC_STATUS,
};

namespace {
struct QtLaterDeleter {
public:
  void operator()(QObject *ptr) {
    ptr->deleteLater();
  }
};

QString translateHttpErrorCode(const ApiError& error, const QString& req_type) {
    QString error_msg;
    if ( error.httpErrorCode() == 400 ) {
        error_msg = QObject::tr("path or repo_id invalid.");
    } else if ( error.httpErrorCode() == 403 ) {
        if ( req_type == "upload link") {
            error_msg = QObject::tr("no permissions to create an upload link");
        } else if ( req_type == "internal link" ) {
            error_msg = QObject::tr("no permissions to create an internal link");
        }
    } else if ( error.httpErrorCode() == 404 ) {
        error_msg = QObject::tr("the file or folder or library could not be found.");
    } else if ( error.httpErrorCode() == 500 ) {
        error_msg = QObject::tr("internal Server Error");
    } else {
        error_msg = QObject::tr("unknown error");
    }
    return error_msg;
}

} // anonymous namespace

static const char *const kPathStatus[] = {
    "none", "syncing", "error", "ignored", "synced", "readonly", "paused", "locked", "locked_by_me", NULL,
};

static inline PathStatus getPathStatusFromString(const QString &status) {
    for (int p = SYNC_STATUS_NONE; p < MAX_SYNC_STATUS; ++p)
        if (kPathStatus[p] == status)
            return static_cast<PathStatus>(p);
    return SYNC_STATUS_NONE;
}

inline static bool isContainsPrefix(const QString &path,
                                    const QString &prefix) {
    if (prefix.size() > path.size())
        return false;
    if (!path.startsWith(prefix))
        return false;
    if (prefix.size() < path.size() && path[prefix.size()] != '/')
        return false;
    return true;
}


static std::mutex update_mutex_;
static std::vector<LocalRepo> watch_set_;
static std::unique_ptr<GetSharedLinkRequest, QtLaterDeleter> get_shared_link_req_;
static std::unique_ptr<LockFileRequest, QtLaterDeleter> lock_file_req_;
static std::unique_ptr<GetFileLockInfoRequest, QtLaterDeleter> get_lock_info_req_;
static std::unique_ptr<GetUploadLinkRequest, QtLaterDeleter> get_upload_link_req_;

FinderSyncHost::FinderSyncHost() : rpc_client_(new SeafileRpcClient) {
    rpc_client_->tryConnectDaemon();
    connect(rayafileApp->daemonManager(), SIGNAL(daemonRestarted()), this, SLOT(onDaemonRestarted()));
}

FinderSyncHost::~FinderSyncHost() {
    get_shared_link_req_.reset();
    lock_file_req_.reset();
}

void FinderSyncHost::onDaemonRestarted()
{
    qDebug("reviving rpc client when daemon is restarted");
    if (rpc_client_) {
        delete rpc_client_;
    }
    rpc_client_ = new SeafileRpcClient();
    rpc_client_->tryConnectDaemon();
}

utils::BufferArray FinderSyncHost::getWatchSet(size_t header_size,
                                               int max_size) {
    updateWatchSet(); // lock is inside

    std::unique_lock<std::mutex> lock(update_mutex_);

    std::vector<QByteArray> array;
    size_t byte_count = header_size;

    unsigned count = (max_size >= 0 && watch_set_.size() > (unsigned)max_size)
                         ? max_size
                         : watch_set_.size();
    for (unsigned i = 0; i < count; ++i) {
        const LocalRepo& repo = watch_set_[i];
        QString internal_link_supported = repo.account.isAtLeastVersion(6, 3, 0)
            ? "internal-link-supported"
            : "internal-link-unsupported";
        QString content = repo.worktree;
        content += "\t" + internal_link_supported;
        array.emplace_back(content.toUtf8());
        byte_count += 36 + array.back().size() + 3;
    }
    // rount byte_count to longword-size
    size_t round_end = byte_count & 3;
    if (round_end)
        byte_count += 4 - round_end;

    utils::BufferArray retval;
    retval.resize(byte_count);

    // zeroize rounds
    switch (round_end) {
    case 1:
        retval[byte_count - 3] = '\0';
    case 2:
        retval[byte_count - 2] = '\0';
    case 3:
        retval[byte_count - 1] = '\0';
    default:
        break;
    }

    assert(retval.size() == byte_count);
    char *pos = retval.data() + header_size;
    for (unsigned i = 0; i != count; ++i) {
        // copy repo_id
        memcpy(pos, watch_set_[i].id.toUtf8().data(), 36);
        pos += 36;
        // copy worktree
        memcpy(pos, array[i].data(), array[i].size() + 1);
        pos += array[i].size() + 1;
        // copy status
        *pos++ = watch_set_[i].sync_state;
        *pos++ = '\0';
    }

    return retval;
}

void FinderSyncHost::updateWatchSet() {
    std::unique_lock<std::mutex> lock(update_mutex_);

    // update watch_set_
    if (rpc_client_->listLocalRepos(&watch_set_)) {
        qWarning("[FinderSync] update watch set failed");
        watch_set_.clear();
        return;
    }
    for (LocalRepo &repo : watch_set_) {
        rpc_client_->getSyncStatus(repo);
        repo.account = rayafileApp->accountManager()->getAccountByRepo(repo.id, rpc_client_);
    }
    lock.unlock();
}

uint32_t FinderSyncHost::getFileStatus(const char *repo_id, const char *path) {
    std::unique_lock<std::mutex> lock(update_mutex_);

    QString repo = QString::fromUtf8(repo_id, 36);
    QString path_in_repo = path;
    QString status;
    bool isDirectory = path_in_repo.endsWith('/');
    if (isDirectory)
        path_in_repo.resize(path_in_repo.size() - 1);
    if (rpc_client_->getRepoFileStatus(
            repo,
            path_in_repo,
            isDirectory, &status) != 0) {
        return PathStatus::SYNC_STATUS_NONE;
    }

    return getPathStatusFromString(status);
}

void FinderSyncHost::doShareLink(const QString &path) {
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }

    QString encoded_path_in_repo = path_in_repo.toUtf8().toPercentEncoding();
    get_shared_link_req_.reset(new GetSharedLinkRequest(account,
                                                        repo_id,
                                                        encoded_path_in_repo));

    connect(get_shared_link_req_.get(), &GetSharedLinkRequest::success,
            this, &FinderSyncHost::onShareLinkGenerated);

    connect(get_shared_link_req_.get(), &GetSharedLinkRequest::failed,
            this, &FinderSyncHost::onShareLinkGeneratedFailed);

    get_shared_link_req_->send();
}

void FinderSyncHost::doInternalLink(const QString &path)
{
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }

    GetSmartLinkRequest *req = new GetSmartLinkRequest(account, repo_id, path_in_repo, path.endsWith("/"));
    connect(req, SIGNAL(success(const QString&, const QString&)),
            this, SLOT(onGetSmartLinkSuccess(const QString&, const QString&)));
    connect(req, SIGNAL(failed(const ApiError&)),
            this, SLOT(onGetSmartLinkFailed(const ApiError&)));

    req->send();
}

void FinderSyncHost::onGetSmartLinkSuccess(const QString& smart_link, const QString& protocol_link)
{
    SeafileLinkDialog *dialog = new SeafileLinkDialog(smart_link, protocol_link, nullptr);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}

void FinderSyncHost::onGetSmartLinkFailed(const ApiError& error)
{
    QString error_msg = translateHttpErrorCode(error, "internal link");
    rayafileApp->warningBox(tr("Failed to get internal link: %1").arg(error_msg));
}

void FinderSyncHost::doLockFile(const QString &path, bool lock)
{
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }
    lock_file_req_.reset(new LockFileRequest(account, repo_id, path_in_repo, lock));

    connect(lock_file_req_.get(), &LockFileRequest::success,
            this, &FinderSyncHost::onLockFileSuccess);
    lock_file_req_->send();
}

void FinderSyncHost::onShareLinkGenerated(const QString &link)
{
    GetSharedLinkRequest *req = qobject_cast<GetSharedLinkRequest *>(sender());
    const QString repo_id = req->getRepoId();
    const QString repo_path = req->getRepoPath();

    SharedLinkDialog *dialog = new SharedLinkDialog(link, repo_id, repo_path, NULL);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}

void FinderSyncHost::onShareLinkGeneratedFailed(const ApiError& error)
{
    int http_error_code = error.httpErrorCode();
    if (http_error_code == 403) {
        rayafileApp->warningBox(tr("No permissions to create a shared link"));
    } else {
        rayafileApp->warningBox(tr("Failed to get shared link: %1").arg(error.toString()));
    }

}

void FinderSyncHost::onLockFileSuccess()
{
    LockFileRequest* req = qobject_cast<LockFileRequest*>(sender());
    if (!req)
        return;
    rpc_client_->markFileLockState(req->repoId(), req->path(), req->lock());
}

bool FinderSyncHost::lookUpFileInformation(const QString &path, QString *repo_id, Account *account, QString *path_in_repo)
{
    QString worktree;
    // work in a mutex
    {
        std::unique_lock<std::mutex> watch_set_lock(update_mutex_);
        for (const LocalRepo &repo : watch_set_)
            if (isContainsPrefix(path, repo.worktree)) {
                *repo_id = repo.id;
                worktree = repo.worktree;
                break;
            }
    }
    if (worktree.isEmpty() || repo_id->isEmpty())
        return false;

    *path_in_repo = QDir(worktree).relativeFilePath(path);
    if (!path_in_repo->startsWith("/"))
        *path_in_repo = "/" + *path_in_repo;
    *path_in_repo = QDir::cleanPath(*path_in_repo);

    *account = rayafileApp->accountManager()->getAccountByRepo(*repo_id);
    if (!account->isValid())
        return false;

    return true;
}

void FinderSyncHost::doShowFileHistory(const QString &path)
{
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }
    QUrl url = "/repo/file_revisions/" + repo_id + "/";
    url = ::includeQueryParams(url, {{"p", path_in_repo}});
    AutoLoginService::instance()->startAutoLogin(url.toString());
}


void FinderSyncHost::doShowFileLockedBy(const QString &path)
{
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }

    // printf ("getting lock info for %s\n", toCStr(path));
    get_lock_info_req_.reset(new GetFileLockInfoRequest(
        account, repo_id, QString("/").append(path_in_repo)));

    connect(get_lock_info_req_.get(), SIGNAL(success(bool, const QString&)), this,
            SLOT(onGetFileLockInfoSuccess(bool, const QString &)));
    connect(get_lock_info_req_.get(), SIGNAL(failed(const ApiError&)), this,
            SLOT(onGetFileLockInfoFailed(const ApiError&)));

    get_lock_info_req_->send();
}

void FinderSyncHost::onGetFileLockInfoSuccess(bool found, const QString& lock_owner)
{
    // printf ("found: %s, lock_owner: %s\n", found ? "true" : "false", toCStr(lock_owner));
    const QString file = ::getBaseName(get_lock_info_req_->path());

    if (found) {
        rayafileApp->messageBox(tr("File \"%1\" is locked by %2").arg(file, lock_owner));
    } else {
        rayafileApp->messageBox(tr("Failed to get lock information for file \"%1\"").arg(file));
    }
}

void FinderSyncHost::onGetFileLockInfoFailed(const ApiError& error)
{
    const QString file = ::getBaseName(get_lock_info_req_->path());
    rayafileApp->messageBox(tr("Failed to get lock information for file \"%1\"").arg(file));
}

void FinderSyncHost::doShareToUser(const QString& path)
{
    privateShare(path, false);
    return;
}

void FinderSyncHost::doShareToGroup(const QString& path)
{
    privateShare(path, true);
    return;
}

void FinderSyncHost::doGetUploadLink(const QString &path)
{
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }

    // printf ("get upload link for %s\n", toCStr(path));
    get_upload_link_req_.reset(new GetUploadLinkRequest(
            account, repo_id, QString("/").append(path_in_repo)));

    connect(get_upload_link_req_.get(), SIGNAL(success(const QString&)), this,
            SLOT(onGetUploadLinkSuccess(const QString &)));
    connect(get_upload_link_req_.get(), SIGNAL(failed(const ApiError&)), this,
            SLOT(onGetUploadLinkFailed(const ApiError&)));

    get_upload_link_req_->send();
}

void FinderSyncHost::onGetUploadLinkSuccess(const QString& upload_link)
{
    // printf ("get upload link is %s", toCStr(upload_link));
    UploadLinkDialog *dialog = new UploadLinkDialog(upload_link, NULL);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}

void FinderSyncHost::onGetUploadLinkFailed(const ApiError& error)
{
    const QString file = ::getBaseName(get_upload_link_req_->path());
    QString error_msg = translateHttpErrorCode(error, "upload link");
    rayafileApp->warningBox(tr("Failed to get upload link for file \"%1\": ").arg(file) + error_msg);
}

void FinderSyncHost::privateShare(const QString& path, bool is_share_to_group) {
    QString repo_id;
    Account account;
    QString path_in_repo;
    if (!lookUpFileInformation(path, &repo_id, &account, &path_in_repo)) {
        qWarning("[FinderSync] invalid path %s", path.toUtf8().data());
        return;
    }

    LocalRepo repo;
    rayafileApp->rpcClient()->getLocalRepo(repo_id, &repo);

    PrivateShareDialog *dialog = new PrivateShareDialog(account,
                                                        repo_id,
                                                        repo.name,
                                                        path_in_repo,
                                                        is_share_to_group,
                                                        NULL);

    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}
