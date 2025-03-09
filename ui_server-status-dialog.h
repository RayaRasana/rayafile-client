/********************************************************************************
** Form generated from reading UI file 'server-status-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_2D_STATUS_2D_DIALOG_H
#define UI_SERVER_2D_STATUS_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ServerStatusDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *mList;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *ServerStatusDialog)
    {
        if (ServerStatusDialog->objectName().isEmpty())
            ServerStatusDialog->setObjectName(QString::fromUtf8("ServerStatusDialog"));
        ServerStatusDialog->resize(274, 245);
        verticalLayout = new QVBoxLayout(ServerStatusDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mList = new QListWidget(ServerStatusDialog);
        mList->setObjectName(QString::fromUtf8("mList"));

        verticalLayout->addWidget(mList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(ServerStatusDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ServerStatusDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), ServerStatusDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ServerStatusDialog);
    } // setupUi

    void retranslateUi(QDialog *ServerStatusDialog)
    {
        ServerStatusDialog->setWindowTitle(QCoreApplication::translate("ServerStatusDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ServerStatusDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerStatusDialog: public Ui_ServerStatusDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_2D_STATUS_2D_DIALOG_H
