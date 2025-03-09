/********************************************************************************
** Form generated from reading UI file 'set-repo-password-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_2D_REPO_2D_PASSWORD_2D_DIALOG_H
#define UI_SET_2D_REPO_2D_PASSWORD_2D_DIALOG_H

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

class Ui_SetRepoPasswordDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *mHintText;
    QLineEdit *mPassword;
    QLabel *mErrorText;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *SetRepoPasswordDialog)
    {
        if (SetRepoPasswordDialog->objectName().isEmpty())
            SetRepoPasswordDialog->setObjectName(QString::fromUtf8("SetRepoPasswordDialog"));
        SetRepoPasswordDialog->resize(432, 139);
        verticalLayout_2 = new QVBoxLayout(SetRepoPasswordDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(SetRepoPasswordDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mHintText = new QLabel(frame);
        mHintText->setObjectName(QString::fromUtf8("mHintText"));
        mHintText->setText(QString::fromUtf8("Provide password for the library"));

        verticalLayout->addWidget(mHintText);

        mPassword = new QLineEdit(frame);
        mPassword->setObjectName(QString::fromUtf8("mPassword"));
        mPassword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText);
        mPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(mPassword);

        mErrorText = new QLabel(frame);
        mErrorText->setObjectName(QString::fromUtf8("mErrorText"));
        mErrorText->setText(QString::fromUtf8("error message"));

        verticalLayout->addWidget(mErrorText);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkBtn = new QPushButton(SetRepoPasswordDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(SetRepoPasswordDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SetRepoPasswordDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), SetRepoPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetRepoPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *SetRepoPasswordDialog)
    {
        SetRepoPasswordDialog->setWindowTitle(QCoreApplication::translate("SetRepoPasswordDialog", "Dialog", nullptr));
        mOkBtn->setText(QCoreApplication::translate("SetRepoPasswordDialog", "OK", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("SetRepoPasswordDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetRepoPasswordDialog: public Ui_SetRepoPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_2D_REPO_2D_PASSWORD_2D_DIALOG_H
