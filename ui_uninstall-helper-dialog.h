/********************************************************************************
** Form generated from reading UI file 'uninstall-helper-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNINSTALL_2D_HELPER_2D_DIALOG_H
#define UI_UNINSTALL_2D_HELPER_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UninstallHelperDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *mText;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *mYesBtn;
    QPushButton *mNoBtn;

    void setupUi(QDialog *UninstallHelperDialog)
    {
        if (UninstallHelperDialog->objectName().isEmpty())
            UninstallHelperDialog->setObjectName(QString::fromUtf8("UninstallHelperDialog"));
        UninstallHelperDialog->resize(595, 453);
        verticalLayout = new QVBoxLayout(UninstallHelperDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 176, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        mText = new QLabel(UninstallHelperDialog);
        mText->setObjectName(QString::fromUtf8("mText"));

        horizontalLayout_6->addWidget(mText);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 175, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(UninstallHelperDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        mYesBtn = new QPushButton(UninstallHelperDialog);
        mYesBtn->setObjectName(QString::fromUtf8("mYesBtn"));

        horizontalLayout_5->addWidget(mYesBtn);

        mNoBtn = new QPushButton(UninstallHelperDialog);
        mNoBtn->setObjectName(QString::fromUtf8("mNoBtn"));

        horizontalLayout_5->addWidget(mNoBtn);


        verticalLayout->addLayout(horizontalLayout_5);

        line->raise();

        retranslateUi(UninstallHelperDialog);

        QMetaObject::connectSlotsByName(UninstallHelperDialog);
    } // setupUi

    void retranslateUi(QDialog *UninstallHelperDialog)
    {
        UninstallHelperDialog->setWindowTitle(QCoreApplication::translate("UninstallHelperDialog", "Dialog", nullptr));
        mText->setText(QCoreApplication::translate("UninstallHelperDialog", "text", nullptr));
        mYesBtn->setText(QCoreApplication::translate("UninstallHelperDialog", "Yes", nullptr));
        mNoBtn->setText(QCoreApplication::translate("UninstallHelperDialog", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UninstallHelperDialog: public Ui_UninstallHelperDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNINSTALL_2D_HELPER_2D_DIALOG_H
