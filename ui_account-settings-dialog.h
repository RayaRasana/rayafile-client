/********************************************************************************
** Form generated from reading UI file 'account-settings-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_2D_SETTINGS_2D_DIALOG_H
#define UI_ACCOUNT_2D_SETTINGS_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AccountSettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *mServerAddr;
    QLabel *label_2;
    QLineEdit *mUsername;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *AccountSettingsDialog)
    {
        if (AccountSettingsDialog->objectName().isEmpty())
            AccountSettingsDialog->setObjectName(QString::fromUtf8("AccountSettingsDialog"));
        AccountSettingsDialog->resize(483, 123);
        verticalLayout = new QVBoxLayout(AccountSettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(AccountSettingsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        mServerAddr = new QLineEdit(AccountSettingsDialog);
        mServerAddr->setObjectName(QString::fromUtf8("mServerAddr"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mServerAddr);

        label_2 = new QLabel(AccountSettingsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        mUsername = new QLineEdit(AccountSettingsDialog);
        mUsername->setObjectName(QString::fromUtf8("mUsername"));

        formLayout->setWidget(1, QFormLayout::FieldRole, mUsername);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkBtn = new QPushButton(AccountSettingsDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(AccountSettingsDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout->addLayout(horizontalLayout);

        mOkBtn->raise();
        mServerAddr->raise();
        mUsername->raise();
        label->raise();
        label_2->raise();

        retranslateUi(AccountSettingsDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), AccountSettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AccountSettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *AccountSettingsDialog)
    {
        AccountSettingsDialog->setWindowTitle(QCoreApplication::translate("AccountSettingsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AccountSettingsDialog", "Server Address", nullptr));
        label_2->setText(QCoreApplication::translate("AccountSettingsDialog", "Email", nullptr));
        mOkBtn->setText(QCoreApplication::translate("AccountSettingsDialog", "OK", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("AccountSettingsDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountSettingsDialog: public Ui_AccountSettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_2D_SETTINGS_2D_DIALOG_H
