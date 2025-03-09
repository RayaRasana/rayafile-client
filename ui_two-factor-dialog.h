/********************************************************************************
** Form generated from reading UI file 'two-factor-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWO_2D_FACTOR_2D_DIALOG_H
#define UI_TWO_2D_FACTOR_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TwoFactorDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mText;
    QLineEdit *mLineEdit;
    QCheckBox *mRememberDevice;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *mSubmit;

    void setupUi(QDialog *TwoFactorDialog)
    {
        if (TwoFactorDialog->objectName().isEmpty())
            TwoFactorDialog->setObjectName(QString::fromUtf8("TwoFactorDialog"));
        TwoFactorDialog->resize(303, 134);
        TwoFactorDialog->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(TwoFactorDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mText = new QLabel(TwoFactorDialog);
        mText->setObjectName(QString::fromUtf8("mText"));

        verticalLayout->addWidget(mText);

        mLineEdit = new QLineEdit(TwoFactorDialog);
        mLineEdit->setObjectName(QString::fromUtf8("mLineEdit"));
        mLineEdit->setMinimumSize(QSize(0, 21));
        mLineEdit->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(mLineEdit);

        mRememberDevice = new QCheckBox(TwoFactorDialog);
        mRememberDevice->setObjectName(QString::fromUtf8("mRememberDevice"));

        verticalLayout->addWidget(mRememberDevice);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(TwoFactorDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        mSubmit = new QPushButton(TwoFactorDialog);
        mSubmit->setObjectName(QString::fromUtf8("mSubmit"));

        horizontalLayout->addWidget(mSubmit);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TwoFactorDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), TwoFactorDialog, SLOT(reject()));

        mSubmit->setDefault(true);


        QMetaObject::connectSlotsByName(TwoFactorDialog);
    } // setupUi

    void retranslateUi(QDialog *TwoFactorDialog)
    {
        TwoFactorDialog->setWindowTitle(QCoreApplication::translate("TwoFactorDialog", "Dialog", nullptr));
        mText->setText(QCoreApplication::translate("TwoFactorDialog", "mText", nullptr));
        mRememberDevice->setText(QCoreApplication::translate("TwoFactorDialog", "Remember this device", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TwoFactorDialog", "Cancel", nullptr));
        mSubmit->setText(QCoreApplication::translate("TwoFactorDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TwoFactorDialog: public Ui_TwoFactorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWO_2D_FACTOR_2D_DIALOG_H
