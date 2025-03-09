/********************************************************************************
** Form generated from reading UI file 'clone-tasks-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLONE_2D_TASKS_2D_DIALOG_H
#define UI_CLONE_2D_TASKS_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CloneTasksDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *mClearBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *CloneTasksDialog)
    {
        if (CloneTasksDialog->objectName().isEmpty())
            CloneTasksDialog->setObjectName(QString::fromUtf8("CloneTasksDialog"));
        CloneTasksDialog->resize(242, 47);
        verticalLayout = new QVBoxLayout(CloneTasksDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mClearBtn = new QPushButton(CloneTasksDialog);
        mClearBtn->setObjectName(QString::fromUtf8("mClearBtn"));

        horizontalLayout->addWidget(mClearBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(CloneTasksDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CloneTasksDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), CloneTasksDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(CloneTasksDialog);
    } // setupUi

    void retranslateUi(QDialog *CloneTasksDialog)
    {
        CloneTasksDialog->setWindowTitle(QCoreApplication::translate("CloneTasksDialog", "Dialog", nullptr));
        mClearBtn->setText(QCoreApplication::translate("CloneTasksDialog", "Clear", nullptr));
        pushButton->setText(QCoreApplication::translate("CloneTasksDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloneTasksDialog: public Ui_CloneTasksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLONE_2D_TASKS_2D_DIALOG_H
