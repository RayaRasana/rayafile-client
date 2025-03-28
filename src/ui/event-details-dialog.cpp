#include <QtGlobal>

#include <QtWidgets>
#include <QVBoxLayout>
#include <QStackedLayout>

#include "rayafile.h"
#include "account-mgr.h"
#include "loading-view.h"
#include "api/requests.h"
#include "api/api-error.h"
#include "api/commit-details.h"
#include "event-details-tree.h"
#include "repo-service.h"
#include "set-repo-password-dialog.h"

#include "event-details-dialog.h"

namespace {

enum {
    INDEX_LOADING_VIEW = 0,
    INDEX_DETAILS_VIEW,
};

} // namespace

EventDetailsDialog::EventDetailsDialog(const SeafEvent& event, QWidget *parent)
    : QDialog(parent),
      event_(event)
{
    setWindowTitle(tr("Modification Details"));
    setWindowIcon(QIcon(":/images/seafile.png"));
    setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint);

    QStackedLayout *layout = new QStackedLayout;
    layout->setContentsMargins(0, 0, 0, 0);
    setLayout(layout);

    loading_view_ = new LoadingView;
    layout->addWidget(loading_view_);

    tree_ = new EventDetailsListView(event);
    model_ = new EventDetailsListModel(event);
    tree_->setModel(model_);

    layout->addWidget(tree_);

    request_ = 0;

    sendRequest();
}

void EventDetailsDialog::sendRequest()
{
    const Account& account = rayafileApp->accountManager()->currentAccount();

    if (request_) {
        request_->deleteLater();
    }

    request_ = new GetCommitDetailsRequest(account, event_.repo_id, event_.commit_id);
    connect(request_, SIGNAL(success(const CommitDetails&)),
            this, SLOT(updateContent(const CommitDetails&)));
    connect(request_, SIGNAL(failed(const ApiError&)),
            this, SLOT(getCommitDetailsFailed(const ApiError&)));
    request_->send();
}

void EventDetailsDialog::updateContent(const CommitDetails& details)
{
    QStackedLayout *layout = (QStackedLayout *)this->layout();
    layout->setCurrentIndex(INDEX_DETAILS_VIEW);

    model_->setCommitDetails(details);
}

void EventDetailsDialog::getCommitDetailsFailed(const ApiError& error)
{
    ServerRepo repo = RepoService::instance()->getRepo(event_.repo_id);

    if (!repo.isValid()) {
        return;
    }

    if (repo.encrypted &&
        error.type() == ApiError::HTTP_ERROR &&
        error.httpErrorCode() == 400) {

        SetRepoPasswordDialog dialog(repo, this);

        if (dialog.exec() == QDialog::Accepted) {
            sendRequest();
        } else {
            reject();
        }
    }
}
