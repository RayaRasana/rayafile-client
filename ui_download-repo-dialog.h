/********************************************************************************
** Form generated from reading UI file 'download-repo-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOAD_2D_REPO_2D_DIALOG_H
#define UI_DOWNLOAD_2D_REPO_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadRepoDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *mFrame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRepoIcon;
    QLabel *mRepoName;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *mOperationText;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *mDirectory;
    QPushButton *mChooseDirBtn;
    QVBoxLayout *verticalLayout_2;
    QLabel *mPasswordLabel;
    QLineEdit *mPassword;
    QLabel *mMergeHint;
    QSpacerItem *verticalSpacer;
    QFrame *mSwitchToSyncFrame;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mSwitchModeHint;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *DownloadRepoDialog)
    {
        if (DownloadRepoDialog->objectName().isEmpty())
            DownloadRepoDialog->setObjectName(QString::fromUtf8("DownloadRepoDialog"));
        DownloadRepoDialog->resize(551, 366);
        DownloadRepoDialog->setStyleSheet(QString::fromUtf8("QFrame#mFrame {\n"
"\n"
"padding-top: 7px;\n"
"\n"
"}\n"
"\n"
"QLineEdit#mDirectory {\n"
"\n"
"min-width: 300px;\n"
"\n"
"}\n"
""));
        verticalLayout_4 = new QVBoxLayout(DownloadRepoDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        mFrame = new QFrame(DownloadRepoDialog);
        mFrame->setObjectName(QString::fromUtf8("mFrame"));
        mFrame->setStyleSheet(QString::fromUtf8(""));
        mFrame->setFrameShape(QFrame::StyledPanel);
        mFrame->setFrameShadow(QFrame::Plain);
        mFrame->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(mFrame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mRepoIcon = new QLabel(mFrame);
        mRepoIcon->setObjectName(QString::fromUtf8("mRepoIcon"));
        mRepoIcon->setText(QString::fromUtf8("repoIcon"));

        horizontalLayout_2->addWidget(mRepoIcon);

        mRepoName = new QLabel(mFrame);
        mRepoName->setObjectName(QString::fromUtf8("mRepoName"));
        mRepoName->setText(QString::fromUtf8("repoName"));

        horizontalLayout_2->addWidget(mRepoName);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mOperationText = new QLabel(mFrame);
        mOperationText->setObjectName(QString::fromUtf8("mOperationText"));
        QFont font;
        font.setPointSize(11);
        mOperationText->setFont(font);
        mOperationText->setFrameShadow(QFrame::Plain);
        mOperationText->setLineWidth(0);
        mOperationText->setText(QString::fromUtf8("Sync to folder:"));

        verticalLayout->addWidget(mOperationText);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mDirectory = new QLineEdit(mFrame);
        mDirectory->setObjectName(QString::fromUtf8("mDirectory"));
        mDirectory->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_3->addWidget(mDirectory);

        mChooseDirBtn = new QPushButton(mFrame);
        mChooseDirBtn->setObjectName(QString::fromUtf8("mChooseDirBtn"));

        horizontalLayout_3->addWidget(mChooseDirBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 5, -1, -1);
        mPasswordLabel = new QLabel(mFrame);
        mPasswordLabel->setObjectName(QString::fromUtf8("mPasswordLabel"));
        mPasswordLabel->setFrameShadow(QFrame::Plain);
        mPasswordLabel->setLineWidth(0);

        verticalLayout_2->addWidget(mPasswordLabel);

        mPassword = new QLineEdit(mFrame);
        mPassword->setObjectName(QString::fromUtf8("mPassword"));
        mPassword->setEnabled(true);
        mPassword->setAutoFillBackground(false);
        mPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(mPassword);

        mMergeHint = new QLabel(mFrame);
        mMergeHint->setObjectName(QString::fromUtf8("mMergeHint"));
        QFont font1;
        font1.setStrikeOut(false);
        mMergeHint->setFont(font1);
        mMergeHint->setText(QString::fromUtf8(""));

        verticalLayout_2->addWidget(mMergeHint);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        mSwitchToSyncFrame = new QFrame(mFrame);
        mSwitchToSyncFrame->setObjectName(QString::fromUtf8("mSwitchToSyncFrame"));
        mSwitchToSyncFrame->setFrameShape(QFrame::NoFrame);
        mSwitchToSyncFrame->setFrameShadow(QFrame::Plain);
        mSwitchToSyncFrame->setLineWidth(0);
        horizontalLayout_6 = new QHBoxLayout(mSwitchToSyncFrame);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 5, 0, -1);
        mSwitchModeHint = new QLabel(mSwitchToSyncFrame);
        mSwitchModeHint->setObjectName(QString::fromUtf8("mSwitchModeHint"));
        mSwitchModeHint->setText(QString::fromUtf8("or merge with an existing folder "));

        horizontalLayout_6->addWidget(mSwitchModeHint);

        horizontalSpacer_4 = new QSpacerItem(235, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_3->addWidget(mSwitchToSyncFrame);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(mFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkBtn = new QPushButton(DownloadRepoDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(DownloadRepoDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout_4->addLayout(horizontalLayout);

        QWidget::setTabOrder(mChooseDirBtn, mPassword);
        QWidget::setTabOrder(mPassword, mOkBtn);
        QWidget::setTabOrder(mOkBtn, mCancelBtn);
        QWidget::setTabOrder(mCancelBtn, mDirectory);

        retranslateUi(DownloadRepoDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), DownloadRepoDialog, SLOT(reject()));

        mChooseDirBtn->setDefault(false);
        mOkBtn->setDefault(true);
        mCancelBtn->setDefault(false);


        QMetaObject::connectSlotsByName(DownloadRepoDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadRepoDialog)
    {
        DownloadRepoDialog->setWindowTitle(QCoreApplication::translate("DownloadRepoDialog", "Download Library", nullptr));
        mChooseDirBtn->setText(QCoreApplication::translate("DownloadRepoDialog", "choose...", nullptr));
        mPasswordLabel->setText(QCoreApplication::translate("DownloadRepoDialog", "Password for this library:", nullptr));
        mOkBtn->setText(QCoreApplication::translate("DownloadRepoDialog", "OK", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("DownloadRepoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadRepoDialog: public Ui_DownloadRepoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOAD_2D_REPO_2D_DIALOG_H
