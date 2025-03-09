/********************************************************************************
** Form generated from reading UI file 'login-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_2D_DIALOG_H
#define UI_LOGIN_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mTitle;
    QSpacerItem *horizontalSpacer_4;
    QLabel *mLogo;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *serverUrl;
    QComboBox *mServerAddr;
    QVBoxLayout *serverNoteLayout;
    QLabel *hint;
    QSpacerItem *verticalSpacer2;
    QLabel *hint_2;
    QSpacerItem *verticalSpacer3;
    QLabel *label_2;
    QLineEdit *mUsername;
    QLabel *label_3;
    QLineEdit *mPassword;
    QVBoxLayout *automaticLoginLayout;
    QSpacerItem *verticalSpacer4;
    QCheckBox *mAutomaticLogin;
    QSpacerItem *verticalSpacer5;
    QLabel *label_5;
    QLineEdit *mComputerName;
    QLabel *hint_3;
    QLabel *mStatusText;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *mSSOBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *mSubmitBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(550, 414);
        LoginDialog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"min-width: 260px;\n"
"}"));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background: white;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mTitle = new QLabel(widget);
        mTitle->setObjectName(QString::fromUtf8("mTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(11);
        mTitle->setFont(font);
        mTitle->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(mTitle);

        horizontalSpacer_4 = new QSpacerItem(376, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        mLogo = new QLabel(widget);
        mLogo->setObjectName(QString::fromUtf8("mLogo"));

        horizontalLayout_2->addWidget(mLogo);


        verticalLayout->addWidget(widget);

        line = new QFrame(LoginDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 20, -1, 20);
        serverUrl = new QLabel(LoginDialog);
        serverUrl->setObjectName(QString::fromUtf8("serverUrl"));
        serverUrl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(serverUrl, 0, 0, 1, 1);

        mServerAddr = new QComboBox(LoginDialog);
        mServerAddr->setObjectName(QString::fromUtf8("mServerAddr"));
        mServerAddr->setEditable(true);

        gridLayout->addWidget(mServerAddr, 0, 1, 1, 1);

        serverNoteLayout = new QVBoxLayout();
        serverNoteLayout->setObjectName(QString::fromUtf8("serverNoteLayout"));
        hint = new QLabel(LoginDialog);
        hint->setObjectName(QString::fromUtf8("hint"));
        hint->setLineWidth(1);
        hint->setTextFormat(Qt::AutoText);
        hint->setOpenExternalLinks(false);
        hint->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        serverNoteLayout->addWidget(hint);

        verticalSpacer2 = new QSpacerItem(0, -4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        serverNoteLayout->addItem(verticalSpacer2);

        hint_2 = new QLabel(LoginDialog);
        hint_2->setObjectName(QString::fromUtf8("hint_2"));
        hint_2->setEnabled(true);
        hint_2->setOpenExternalLinks(false);

        serverNoteLayout->addWidget(hint_2);

        verticalSpacer3 = new QSpacerItem(0, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        serverNoteLayout->addItem(verticalSpacer3);


        gridLayout->addLayout(serverNoteLayout, 1, 1, 1, 1);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        mUsername = new QLineEdit(LoginDialog);
        mUsername->setObjectName(QString::fromUtf8("mUsername"));

        gridLayout->addWidget(mUsername, 2, 1, 1, 1);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        mPassword = new QLineEdit(LoginDialog);
        mPassword->setObjectName(QString::fromUtf8("mPassword"));
        mPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(mPassword, 3, 1, 1, 1);

        automaticLoginLayout = new QVBoxLayout();
        automaticLoginLayout->setObjectName(QString::fromUtf8("automaticLoginLayout"));
        verticalSpacer4 = new QSpacerItem(0, -4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        automaticLoginLayout->addItem(verticalSpacer4);

        mAutomaticLogin = new QCheckBox(LoginDialog);
        mAutomaticLogin->setObjectName(QString::fromUtf8("mAutomaticLogin"));

        automaticLoginLayout->addWidget(mAutomaticLogin);

        verticalSpacer5 = new QSpacerItem(0, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        automaticLoginLayout->addItem(verticalSpacer5);


        gridLayout->addLayout(automaticLoginLayout, 4, 1, 1, 1);

        label_5 = new QLabel(LoginDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        mComputerName = new QLineEdit(LoginDialog);
        mComputerName->setObjectName(QString::fromUtf8("mComputerName"));

        gridLayout->addWidget(mComputerName, 5, 1, 1, 1);

        hint_3 = new QLabel(LoginDialog);
        hint_3->setObjectName(QString::fromUtf8("hint_3"));

        gridLayout->addWidget(hint_3, 6, 1, 1, 1);

        mStatusText = new QLabel(LoginDialog);
        mStatusText->setObjectName(QString::fromUtf8("mStatusText"));
        mStatusText->setEnabled(true);

        gridLayout->addWidget(mStatusText, 7, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line_2 = new QFrame(LoginDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        mSSOBtn = new QPushButton(LoginDialog);
        mSSOBtn->setObjectName(QString::fromUtf8("mSSOBtn"));

        horizontalLayout->addWidget(mSSOBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mSubmitBtn = new QPushButton(LoginDialog);
        mSubmitBtn->setObjectName(QString::fromUtf8("mSubmitBtn"));

        horizontalLayout->addWidget(mSubmitBtn);

        mCancelBtn = new QPushButton(LoginDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mServerAddr, mUsername);
        QWidget::setTabOrder(mUsername, mPassword);
        QWidget::setTabOrder(mPassword, mComputerName);
        QWidget::setTabOrder(mComputerName, mSubmitBtn);
        QWidget::setTabOrder(mSubmitBtn, mCancelBtn);

        retranslateUi(LoginDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), LoginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        mTitle->setText(QCoreApplication::translate("LoginDialog", "Add an account", nullptr));
        mLogo->setText(QCoreApplication::translate("LoginDialog", "logo", nullptr));
        serverUrl->setText(QCoreApplication::translate("LoginDialog", ":\330\263\330\261\331\210\330\261", nullptr));
        hint->setText(QCoreApplication::translate("LoginDialog", "<html><head/><body><p>\330\250\330\261\330\247\333\214 \331\205\330\253\330\247\331\204: https://example.your-server.com</p></body></html>", nullptr));
        hint_2->setText(QCoreApplication::translate("LoginDialog", "or http://192.168.1.24:8000", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", ":\330\247\333\214\331\205\333\214\331\204 / \331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", ":\330\261\331\205\330\262 \330\271\330\250\331\210\330\261", nullptr));
        mAutomaticLogin->setText(QCoreApplication::translate("LoginDialog", "\331\210\330\261\331\210\330\257 \330\256\331\210\330\257\332\251\330\247\330\261", nullptr));
        label_5->setText(QCoreApplication::translate("LoginDialog", "\331\206\330\247\331\205 \332\251\330\247\331\205\331\276\333\214\331\210\330\252\330\261:", nullptr));
        hint_3->setText(QCoreApplication::translate("LoginDialog", "\331\205\330\253\330\247\331\204: \331\204\331\276\330\252\330\247\331\276 \330\254\333\214\331\205", nullptr));
        mStatusText->setText(QCoreApplication::translate("LoginDialog", "status text", nullptr));
        mSSOBtn->setText(QCoreApplication::translate("LoginDialog", "Single Sign On", nullptr));
        mSubmitBtn->setText(QCoreApplication::translate("LoginDialog", "\331\210\330\261\331\210\330\257", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("LoginDialog", "\331\204\330\272\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_2D_DIALOG_H
