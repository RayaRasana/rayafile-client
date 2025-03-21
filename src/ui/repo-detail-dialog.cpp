#include <QtGlobal>

#include <QtWidgets>
#include <QDir>
#include <QTimer>

#include "utils/utils.h"
#include "account-mgr.h"
#include "rayafile.h"
#include "configurator.h"
#include "api/requests.h"
#include "rpc/rpc-client.h"
#include "rpc/clone-task.h"
#include "rpc/local-repo.h"
#include "utils/utils.h"

#include "repo-detail-dialog.h"

namespace {


const int kRefrshRepoStatusInterval = 1000; // 1s

} // namespace


RepoDetailDialog::RepoDetailDialog(const ServerRepo &repo, QWidget *parent)
    : QDialog(parent),
      repo_(repo)
{
    setupUi(this);
    setWindowTitle(tr("Library \"%1\"").arg(repo.name));
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);
    setWindowIcon(QIcon(":/images/seafile.png"));

    mTimeLabel->setText(translateCommitTime(repo.mtime));
    mOwnerLabel->setText(QString("%1 (%2)").arg(repo.owner_name).arg(repo.owner));
    mSizeLabel->setText(readableFileSize(repo.size));

    LocalRepo lrepo;
    rayafileApp->rpcClient()->getLocalRepo(repo.id, &lrepo);
    if (lrepo.isValid()) {
        lpathLabel->setVisible(true);
        mLpathLabel->setVisible(true);
        mLpathLabel->setText(QDir::toNativeSeparators(lrepo.worktree));
        if (lrepo.sync_state == LocalRepo::SYNC_STATE_ERROR) {
            mStatus->setText(lrepo.sync_error_str);
        } else {
            mStatus->setText(lrepo.sync_state_str);
        }
    } else {
        mStatus->setText(tr("This library is not downloaded yet"));
        lpathLabel->setVisible(false);
        mLpathLabel->setVisible(false);
    }

    mRepoIcon->setPixmap(repo_.getPixmap());
    mRepoName->setText(repo_.name);
    #if defined(Q_OS_MAC)
    layout()->setContentsMargins(8, 9, 9, 4);
    layout()->setSpacing(5);
    #endif

    resize(sizeHint());
    updateRepoStatus();

    refresh_timer_ = new QTimer(this);
    connect(refresh_timer_, SIGNAL(timeout()), this, SLOT(updateRepoStatus()));
    refresh_timer_->start(kRefrshRepoStatusInterval);
}

void RepoDetailDialog::updateRepoStatus()
{
    LocalRepo r;
    QString text;
    rayafileApp->rpcClient()->getLocalRepo(repo_.id, &r);
    if (r.isValid()) {
        if (r.sync_state == LocalRepo::SYNC_STATE_ERROR) {
            text = "<p style='color:red'>" + tr("Error: ") + r.sync_error_str + "</p>";
        } else {
            text = r.sync_state_str;
            if (r.sync_state == LocalRepo::SYNC_STATE_ING) {
                // add transfer rate and finished percent
                int rate, percent;
                if (rayafileApp->rpcClient()->getRepoTransferInfo(repo_.id, &rate, &percent) == 0) {
                    text += ", " + QString::number(percent) + "%, " +  QString("%1 kB/s").arg(rate / 1024);
                }
            }
        }

        int sync_interval = 0;
        QString interval_string;
        if (rayafileApp->rpcClient()->getRepoProperty(r.id, "sync-interval", &interval_string) == 0) {
            sync_interval = interval_string.toInt();
            if (sync_interval > 0) {
                mSyncInterval->setText(tr("every %1 seconds").arg(sync_interval));
            } else {
                mSyncIntervalLabel->hide();
                mSyncInterval->hide();
            }
        }

    } else {
        std::vector<CloneTask> tasks;
        rayafileApp->rpcClient()->getCloneTasks(&tasks);

        CloneTask task;

        if (!tasks.empty()) {
            for (size_t i = 0; i < tasks.size(); ++i) {
                CloneTask clone_task = tasks[i];
                if (clone_task.repo_id == repo_.id) {
                    task = clone_task;
                    break;
                }
            }
        }

        if (task.isValid() && task.isDisplayable()) {
            if (task.error_str.length() > 0) {
                text = task.error_str;
            } else {
                text = task.state_str;
            }
        } else {
            text = tr("This library is not downloaded yet");
        }

        mSyncIntervalLabel->hide();
        mSyncInterval->hide();
    }

    mStatus->setText(text);
}
