/********************************************************************************
** Form generated from reading UI file 'cloud-view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUD_2D_VIEW_H
#define UI_CLOUD_2D_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloudView
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *mHeader;
    QHBoxLayout *horizontalLayout_9;
    QLabel *mLogo;
    QLabel *mBrand;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *mMinimizeBtn;
    QPushButton *mCloseBtn;
    QSpacerItem *verticalSpacer_4;
    QWidget *mDropArea;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QFrame *mDropInner;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *mSelectFolderBtn;
    QLabel *mDropFolderText;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_2;
    QFrame *mFooter;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *mStorageUsage;
    QToolButton *mServerStatusBtn;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mDownloadRate;
    QLabel *mDownloadRateArrow;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mUploadRate;
    QLabel *mUploadRateArrow;

    void setupUi(QWidget *CloudView)
    {
        if (CloudView->objectName().isEmpty())
            CloudView->setObjectName(QString::fromUtf8("CloudView"));
        CloudView->resize(511, 579);
        CloudView->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(CloudView);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        mHeader = new QWidget(CloudView);
        mHeader->setObjectName(QString::fromUtf8("mHeader"));
        horizontalLayout_9 = new QHBoxLayout(mHeader);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 0, 0, 0);
        mLogo = new QLabel(mHeader);
        mLogo->setObjectName(QString::fromUtf8("mLogo"));

        horizontalLayout_9->addWidget(mLogo);

        mBrand = new QLabel(mHeader);
        mBrand->setObjectName(QString::fromUtf8("mBrand"));

        horizontalLayout_9->addWidget(mBrand);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        mMinimizeBtn = new QPushButton(mHeader);
        mMinimizeBtn->setObjectName(QString::fromUtf8("mMinimizeBtn"));

        horizontalLayout_10->addWidget(mMinimizeBtn);

        mCloseBtn = new QPushButton(mHeader);
        mCloseBtn->setObjectName(QString::fromUtf8("mCloseBtn"));

        horizontalLayout_10->addWidget(mCloseBtn);


        verticalLayout_5->addLayout(horizontalLayout_10);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);


        horizontalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_2->addWidget(mHeader);

        mDropArea = new QWidget(CloudView);
        mDropArea->setObjectName(QString::fromUtf8("mDropArea"));
        verticalLayout_3 = new QVBoxLayout(mDropArea);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mDropInner = new QFrame(mDropArea);
        mDropInner->setObjectName(QString::fromUtf8("mDropInner"));
        mDropInner->setFrameShape(QFrame::StyledPanel);
        mDropInner->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(mDropInner);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        mSelectFolderBtn = new QPushButton(mDropInner);
        mSelectFolderBtn->setObjectName(QString::fromUtf8("mSelectFolderBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mSelectFolderBtn->sizePolicy().hasHeightForWidth());
        mSelectFolderBtn->setSizePolicy(sizePolicy);
        mSelectFolderBtn->setFlat(true);

        horizontalLayout_7->addWidget(mSelectFolderBtn);

        mDropFolderText = new QLabel(mDropInner);
        mDropFolderText->setObjectName(QString::fromUtf8("mDropFolderText"));

        horizontalLayout_7->addWidget(mDropFolderText);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);


        horizontalLayout_6->addWidget(mDropInner);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(mDropArea);

        mFooter = new QFrame(CloudView);
        mFooter->setObjectName(QString::fromUtf8("mFooter"));
        mFooter->setFrameShape(QFrame::StyledPanel);
        mFooter->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(mFooter);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 10, 0);
        mStorageUsage = new QProgressBar(mFooter);
        mStorageUsage->setObjectName(QString::fromUtf8("mStorageUsage"));
        mStorageUsage->setValue(0);

        horizontalLayout_2->addWidget(mStorageUsage);

        mServerStatusBtn = new QToolButton(mFooter);
        mServerStatusBtn->setObjectName(QString::fromUtf8("mServerStatusBtn"));
        mServerStatusBtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(mServerStatusBtn);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        mDownloadRate = new QLabel(mFooter);
        mDownloadRate->setObjectName(QString::fromUtf8("mDownloadRate"));

        horizontalLayout_3->addWidget(mDownloadRate);

        mDownloadRateArrow = new QLabel(mFooter);
        mDownloadRateArrow->setObjectName(QString::fromUtf8("mDownloadRateArrow"));

        horizontalLayout_3->addWidget(mDownloadRateArrow);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        mUploadRate = new QLabel(mFooter);
        mUploadRate->setObjectName(QString::fromUtf8("mUploadRate"));

        horizontalLayout_4->addWidget(mUploadRate);

        mUploadRateArrow = new QLabel(mFooter);
        mUploadRateArrow->setObjectName(QString::fromUtf8("mUploadRateArrow"));

        horizontalLayout_4->addWidget(mUploadRateArrow);


        horizontalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(mFooter);


        retranslateUi(CloudView);

        QMetaObject::connectSlotsByName(CloudView);
    } // setupUi

    void retranslateUi(QWidget *CloudView)
    {
        CloudView->setWindowTitle(QCoreApplication::translate("CloudView", "Form", nullptr));
        mLogo->setText(QCoreApplication::translate("CloudView", "logo", nullptr));
        mBrand->setText(QCoreApplication::translate("CloudView", "brand", nullptr));
        mMinimizeBtn->setText(QCoreApplication::translate("CloudView", "minimize", nullptr));
        mCloseBtn->setText(QCoreApplication::translate("CloudView", "close", nullptr));
        mSelectFolderBtn->setText(QCoreApplication::translate("CloudView", "Select", nullptr));
        mDropFolderText->setText(QCoreApplication::translate("CloudView", "or Drop Folder to Sync", nullptr));
        mServerStatusBtn->setText(QCoreApplication::translate("CloudView", "...", nullptr));
        mDownloadRate->setText(QCoreApplication::translate("CloudView", "download rate", nullptr));
        mDownloadRateArrow->setText(QCoreApplication::translate("CloudView", "downarrow", nullptr));
        mUploadRate->setText(QCoreApplication::translate("CloudView", "upload rate", nullptr));
        mUploadRateArrow->setText(QCoreApplication::translate("CloudView", "uparrow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloudView: public Ui_CloudView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUD_2D_VIEW_H
