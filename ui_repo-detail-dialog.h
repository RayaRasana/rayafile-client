/********************************************************************************
** Form generated from reading UI file 'repo-detail-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPO_2D_DETAIL_2D_DIALOG_H
#define UI_REPO_2D_DETAIL_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RepoDetailDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *mFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mRepoIcon;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *mRepoName;
    QLabel *label_6;
    QLabel *mOwnerLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QLabel *mTimeLabel;
    QLabel *label;
    QLabel *mSizeLabel;
    QSpacerItem *verticalSpacer_2;
    QLabel *lpathLabel;
    QLabel *mLpathLabel;
    QLabel *label_4;
    QLabel *mStatus;
    QLabel *mSyncIntervalLabel;
    QLabel *mSyncInterval;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *RepoDetailDialog)
    {
        if (RepoDetailDialog->objectName().isEmpty())
            RepoDetailDialog->setObjectName(QString::fromUtf8("RepoDetailDialog"));
        RepoDetailDialog->resize(400, 261);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RepoDetailDialog->sizePolicy().hasHeightForWidth());
        RepoDetailDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RepoDetailDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, -1, 9, -1);
        mFrame = new QFrame(RepoDetailDialog);
        mFrame->setObjectName(QString::fromUtf8("mFrame"));
        mFrame->setFrameShape(QFrame::StyledPanel);
        mFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(mFrame);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mRepoIcon = new QLabel(mFrame);
        mRepoIcon->setObjectName(QString::fromUtf8("mRepoIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mRepoIcon->sizePolicy().hasHeightForWidth());
        mRepoIcon->setSizePolicy(sizePolicy1);
        mRepoIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(mRepoIcon);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(3);
        label_5 = new QLabel(mFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        mRepoName = new QLabel(mFrame);
        mRepoName->setObjectName(QString::fromUtf8("mRepoName"));
        mRepoName->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, mRepoName);

        label_6 = new QLabel(mFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        mOwnerLabel = new QLabel(mFrame);
        mOwnerLabel->setObjectName(QString::fromUtf8("mOwnerLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mOwnerLabel);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(2, QFormLayout::LabelRole, verticalSpacer);

        label_3 = new QLabel(mFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        mTimeLabel = new QLabel(mFrame);
        mTimeLabel->setObjectName(QString::fromUtf8("mTimeLabel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mTimeLabel);

        label = new QLabel(mFrame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label);

        mSizeLabel = new QLabel(mFrame);
        mSizeLabel->setObjectName(QString::fromUtf8("mSizeLabel"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mSizeLabel);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::LabelRole, verticalSpacer_2);

        lpathLabel = new QLabel(mFrame);
        lpathLabel->setObjectName(QString::fromUtf8("lpathLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, lpathLabel);

        mLpathLabel = new QLabel(mFrame);
        mLpathLabel->setObjectName(QString::fromUtf8("mLpathLabel"));
        mLpathLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::FieldRole, mLpathLabel);

        label_4 = new QLabel(mFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_4);

        mStatus = new QLabel(mFrame);
        mStatus->setObjectName(QString::fromUtf8("mStatus"));
        mStatus->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mStatus->sizePolicy().hasHeightForWidth());
        mStatus->setSizePolicy(sizePolicy2);
        mStatus->setLayoutDirection(Qt::LeftToRight);
        mStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        mStatus->setWordWrap(true);

        formLayout->setWidget(8, QFormLayout::FieldRole, mStatus);

        mSyncIntervalLabel = new QLabel(mFrame);
        mSyncIntervalLabel->setObjectName(QString::fromUtf8("mSyncIntervalLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, mSyncIntervalLabel);

        mSyncInterval = new QLabel(mFrame);
        mSyncInterval->setObjectName(QString::fromUtf8("mSyncInterval"));

        formLayout->setWidget(9, QFormLayout::FieldRole, mSyncInterval);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(10, QFormLayout::LabelRole, verticalSpacer_3);


        horizontalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(mFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(RepoDetailDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RepoDetailDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), RepoDetailDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(RepoDetailDialog);
    } // setupUi

    void retranslateUi(QDialog *RepoDetailDialog)
    {
        RepoDetailDialog->setWindowTitle(QCoreApplication::translate("RepoDetailDialog", "Dialog", nullptr));
        mRepoIcon->setText(QCoreApplication::translate("RepoDetailDialog", "RepoIcon", nullptr));
        label_5->setText(QCoreApplication::translate("RepoDetailDialog", "Name:", nullptr));
        mRepoName->setText(QCoreApplication::translate("RepoDetailDialog", "RepoName", nullptr));
        label_6->setText(QCoreApplication::translate("RepoDetailDialog", "Owner:", nullptr));
        mOwnerLabel->setText(QCoreApplication::translate("RepoDetailDialog", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("RepoDetailDialog", "Last Modified:", nullptr));
        mTimeLabel->setText(QCoreApplication::translate("RepoDetailDialog", "mtime", nullptr));
        label->setText(QCoreApplication::translate("RepoDetailDialog", "Size:", nullptr));
        mSizeLabel->setText(QCoreApplication::translate("RepoDetailDialog", "TextLabel", nullptr));
        lpathLabel->setText(QCoreApplication::translate("RepoDetailDialog", "Local Path:", nullptr));
        mLpathLabel->setText(QCoreApplication::translate("RepoDetailDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("RepoDetailDialog", "Status:", nullptr));
        mStatus->setText(QCoreApplication::translate("RepoDetailDialog", "RepoStatus", nullptr));
        mSyncIntervalLabel->setText(QCoreApplication::translate("RepoDetailDialog", "Sync Interval:", nullptr));
        mSyncInterval->setText(QString());
        pushButton->setText(QCoreApplication::translate("RepoDetailDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RepoDetailDialog: public Ui_RepoDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPO_2D_DETAIL_2D_DIALOG_H
