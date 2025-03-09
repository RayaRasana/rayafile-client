/********************************************************************************
** Form generated from reading UI file 'private-share-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATE_2D_SHARE_2D_DIALOG_H
#define UI_PRIVATE_2D_SHARE_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateShareDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *mFrame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *mOkBtn;
    QLabel *label_2;
    QComboBox *mPermission;
    QStackedWidget *mInputStack;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mStatusText;
    QSpacerItem *horizontalSpacer;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *PrivateShareDialog)
    {
        if (PrivateShareDialog->objectName().isEmpty())
            PrivateShareDialog->setObjectName(QString::fromUtf8("PrivateShareDialog"));
        PrivateShareDialog->resize(455, 155);
        verticalLayout = new QVBoxLayout(PrivateShareDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mFrame = new QFrame(PrivateShareDialog);
        mFrame->setObjectName(QString::fromUtf8("mFrame"));
        mFrame->setFrameShape(QFrame::StyledPanel);
        mFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mFrame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(mFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        mOkBtn = new QPushButton(mFrame);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        gridLayout->addWidget(mOkBtn, 0, 2, 1, 1);

        label_2 = new QLabel(mFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        mPermission = new QComboBox(mFrame);
        mPermission->addItem(QString());
        mPermission->addItem(QString());
        mPermission->setObjectName(QString::fromUtf8("mPermission"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mPermission->sizePolicy().hasHeightForWidth());
        mPermission->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mPermission, 1, 1, 1, 1);

        mInputStack = new QStackedWidget(mFrame);
        mInputStack->setObjectName(QString::fromUtf8("mInputStack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        mInputStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        mInputStack->addWidget(page_2);

        gridLayout->addWidget(mInputStack, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(mFrame);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(8, -1, 8, -1);
        mStatusText = new QLabel(PrivateShareDialog);
        mStatusText->setObjectName(QString::fromUtf8("mStatusText"));
        mStatusText->setEnabled(true);

        horizontalLayout_2->addWidget(mStatusText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        mCancelBtn = new QPushButton(PrivateShareDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout_2->addWidget(mCancelBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(PrivateShareDialog);

        mInputStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PrivateShareDialog);
    } // setupUi

    void retranslateUi(QDialog *PrivateShareDialog)
    {
        PrivateShareDialog->setWindowTitle(QCoreApplication::translate("PrivateShareDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PrivateShareDialog", "Share To:", nullptr));
        mOkBtn->setText(QCoreApplication::translate("PrivateShareDialog", "Share", nullptr));
        label_2->setText(QCoreApplication::translate("PrivateShareDialog", "Permission:", nullptr));
        mPermission->setItemText(0, QCoreApplication::translate("PrivateShareDialog", "Read-Write", nullptr));
        mPermission->setItemText(1, QCoreApplication::translate("PrivateShareDialog", "Read-Only", nullptr));

        mStatusText->setText(QString());
        mCancelBtn->setText(QCoreApplication::translate("PrivateShareDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrivateShareDialog: public Ui_PrivateShareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATE_2D_SHARE_2D_DIALOG_H
