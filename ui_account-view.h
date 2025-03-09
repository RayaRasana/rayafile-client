/********************************************************************************
** Form generated from reading UI file 'account-view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_2D_VIEW_H
#define UI_ACCOUNT_2D_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountView
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *mAccountBtn;
    QVBoxLayout *verticalLayout_5;
    QLabel *mEmail;
    QLabel *mServerAddr;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mSettingsPushButton;
    QPushButton *mSortPushButton;
    QLabel *mRefreshLabel;

    void setupUi(QWidget *AccountView)
    {
        if (AccountView->objectName().isEmpty())
            AccountView->setObjectName(QString::fromUtf8("AccountView"));
        AccountView->resize(398, 66);
        horizontalLayout = new QHBoxLayout(AccountView);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(15, 12, 15, 12);
        mAccountBtn = new QToolButton(AccountView);
        mAccountBtn->setObjectName(QString::fromUtf8("mAccountBtn"));
        mAccountBtn->setAutoRaise(true);
        mAccountBtn->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(mAccountBtn);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(10, -1, -1, -1);
        mEmail = new QLabel(AccountView);
        mEmail->setObjectName(QString::fromUtf8("mEmail"));

        verticalLayout_5->addWidget(mEmail);

        mServerAddr = new QLabel(AccountView);
        mServerAddr->setObjectName(QString::fromUtf8("mServerAddr"));
        QFont font;
        font.setPointSize(10);
        mServerAddr->setFont(font);

        verticalLayout_5->addWidget(mServerAddr);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer_4 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        mSettingsPushButton = new QPushButton(AccountView);
        mSettingsPushButton->setObjectName(QString::fromUtf8("mSettingsPushButton"));

        horizontalLayout->addWidget(mSettingsPushButton);

        mSortPushButton = new QPushButton(AccountView);
        mSortPushButton->setObjectName(QString::fromUtf8("mSortPushButton"));

        horizontalLayout->addWidget(mSortPushButton);

        mRefreshLabel = new QLabel(AccountView);
        mRefreshLabel->setObjectName(QString::fromUtf8("mRefreshLabel"));
        mRefreshLabel->setText(QString::fromUtf8("RefreshIcon"));

        horizontalLayout->addWidget(mRefreshLabel);


        retranslateUi(AccountView);

        QMetaObject::connectSlotsByName(AccountView);
    } // setupUi

    void retranslateUi(QWidget *AccountView)
    {
        AccountView->setWindowTitle(QCoreApplication::translate("AccountView", "Form", nullptr));
        mAccountBtn->setText(QCoreApplication::translate("AccountView", "Account", nullptr));
        mEmail->setText(QCoreApplication::translate("AccountView", "email", nullptr));
        mServerAddr->setText(QCoreApplication::translate("AccountView", "server", nullptr));
#if QT_CONFIG(tooltip)
        mSettingsPushButton->setToolTip(QCoreApplication::translate("AccountView", "settings", nullptr));
#endif // QT_CONFIG(tooltip)
        mSettingsPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mSortPushButton->setToolTip(QCoreApplication::translate("AccountView", "sort", nullptr));
#endif // QT_CONFIG(tooltip)
        mSortPushButton->setText(QString());
#if QT_CONFIG(tooltip)
        mRefreshLabel->setToolTip(QCoreApplication::translate("AccountView", "refresh", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class AccountView: public Ui_AccountView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_2D_VIEW_H
