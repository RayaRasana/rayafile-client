#include <QScopedPointer>
#include <QDir>

#include "repo-service-helper.h"

#include "filebrowser/data-mgr.h"
#include "filebrowser/progress-dialog.h"
#include "filebrowser/file-browser-requests.h"
#include "filebrowser/tasks.h"
#include "filebrowser/auto-update-mgr.h"
#include "filebrowser/transfer-mgr.h"

#include "ui/set-repo-password-dialog.h"

#include "utils/utils.h"
#include "utils/file-utils.h"
#include "rayafile.h"
#include "repo-service.h"

void FileDownloadHelper::openFile(const QString& path, bool work_around_mac_auto_udpate)
{
    QFileInfo file(path);
    QString file_name = file.fileName();
    if (!file.exists()) {
        QString msg = QObject::tr("File \"%1\" doesn't exist in \"%2\"").arg(file_name).arg(file.path());
        rayafileApp->warningBox(msg);
        return;
    }
    if (!::openInNativeExtension(path) && !::showInGraphicalShell(path)) {
        QString msg = QObject::tr("%1 couldn't find an application to open file %2").arg(getBrand()).arg(file_name);
        rayafileApp->warningBox(msg);
        return;
    }
#ifdef Q_OS_MAC
    MacImageFilesWorkAround::instance()->fileOpened(path);
#endif
}

FileDownloadHelper::FileDownloadHelper(const Account &account, const ServerRepo &repo, const QString &path, QWidget *parent)
  : account_(account), repo_(repo), path_(path), file_name_(QFileInfo(path).fileName()), parent_(parent), req_(NULL) {
}

FileDownloadHelper::~FileDownloadHelper()
{
    onCancel();
    if (req_)
        req_->deleteLater();
}

void FileDownloadHelper::start()
{
    if (req_)
        return;
    const QString file_name = QFileInfo(path_).fileName();
    const QString dirent_path = ::getParentPath(path_);
    req_ = new GetDirentsRequest(account_, repo_.id, dirent_path);
    connect(req_, SIGNAL(success(bool, const QList<SeafDirent> &, const QString&)),
            this, SLOT(onGetDirentsSuccess(bool, const QList<SeafDirent> &)));
    connect(req_, SIGNAL(failed(const ApiError &)),
            this, SLOT(onGetDirentsFailure(const ApiError &)));
    req_->send();
}

void FileDownloadHelper::onCancel()
{
    if (req_)
        disconnect(req_, 0, this, 0);
}

void FileDownloadHelper::onGetDirentsSuccess(bool current_readonly, const QList<SeafDirent> &dirents)
{
    Q_UNUSED(current_readonly);
    bool found_file = false;
    Q_FOREACH(const SeafDirent &dirent, dirents)
    {
        if (dirent.name == file_name_) {
            if (dirent.isDir()) {
                RepoService::instance()->openFolder(repo_.id, path_);
                return;
            }
            downloadFile(dirent.id);
            found_file = true;
            break;
        }
    }
    // critally important
    if (!found_file) {
        QString msg = QObject::tr("File \"%1\" doesn't exist in \"%2\"").arg(file_name_).arg(QFileInfo(path_).path());
        rayafileApp->warningBox(msg);
    }

}

void FileDownloadHelper::downloadFile(const QString &id)
{
    DataManager *data_mgr = rayafileApp->dataManager();
    QString cached_file = data_mgr->getLocalCachedFile(repo_.id, path_, id);
    if (!cached_file.isEmpty()) {
        openFile(cached_file, false);
        return;
    }

    // endless loop for setPasswordDialog
    while(true) {
        if (TransferManager::instance()->getDownloadTask(repo_.id, path_) != nullptr) {
            return;
        }
        QScopedPointer<FileDownloadTask> task(data_mgr->createDownloadTask(repo_.id, path_));
        task->setAutoDelete(false);
        FileBrowserProgressDialog dialog(task.data(), parent_);
        if (dialog.exec()) {
            // The progress dialog exits after the download task is finished. However, data_mgr->getLocalCachedFile() doesn't work here because the local cache will be updated afterwards in another callback.
            QString full_path = DataManager::getLocalCacheFilePath(repo_.id, path_);
            if (!full_path.isEmpty() && QFileInfo(full_path).exists())
                openFile(full_path, true);
            break;
        }
        // if the user canceled the task, don't bother it
        if (task->error() == FileNetworkTask::TaskCanceled)
            break;
        // if the repo_sitory is encrypted and password is incorrect
        if (repo_.encrypted && task->httpErrorCode() == 400) {
            SetRepoPasswordDialog password_dialog(repo_, parent_);
            if (password_dialog.exec())
                continue;
            // the user canceled the dialog? skip
            break;
        }
        // printf ("error = %d\n", (int)task->error());
        QString msg =
            QObject::tr("Unable to download item \"%1\"").arg(path_);
        rayafileApp->warningBox(msg);
        break;
    }
}
