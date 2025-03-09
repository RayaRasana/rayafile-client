/********************************************************************************
** Form generated from reading UI file 'init-seafile-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INIT_2D_SEAFILE_2D_DIALOG_H
#define UI_INIT_2D_SEAFILE_2D_DIALOG_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitSeafileDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *mTitle;
    QSpacerItem *horizontalSpacer_5;
    QLabel *mLogo;
    QFrame *line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *mCentralText;
    QHBoxLayout *horizontalLayout;
    QLineEdit *mDirectory;
    QPushButton *mChooseDirBtn;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *InitSeafileDialog)
    {
        if (InitSeafileDialog->objectName().isEmpty())
            InitSeafileDialog->setObjectName(QString::fromUtf8("InitSeafileDialog"));
        InitSeafileDialog->resize(550, 350);
        verticalLayout_2 = new QVBoxLayout(InitSeafileDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(InitSeafileDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background: white;"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 9);
        mTitle = new QLabel(widget);
        mTitle->setObjectName(QString::fromUtf8("mTitle"));
        mTitle->setStyleSheet(QString::fromUtf8(""));
        mTitle->setMargin(0);

        horizontalLayout_4->addWidget(mTitle);

        horizontalSpacer_5 = new QSpacerItem(348, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        mLogo = new QLabel(widget);
        mLogo->setObjectName(QString::fromUtf8("mLogo"));

        horizontalLayout_4->addWidget(mLogo);


        verticalLayout_2->addWidget(widget);

        line = new QFrame(InitSeafileDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 125, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mCentralText = new QLabel(InitSeafileDialog);
        mCentralText->setObjectName(QString::fromUtf8("mCentralText"));
        mCentralText->setWordWrap(true);

        verticalLayout->addWidget(mCentralText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mDirectory = new QLineEdit(InitSeafileDialog);
        mDirectory->setObjectName(QString::fromUtf8("mDirectory"));
        mDirectory->setEnabled(true);
        mDirectory->setMinimumSize(QSize(250, 0));
        mDirectory->setReadOnly(false);

        horizontalLayout->addWidget(mDirectory);

        mChooseDirBtn = new QPushButton(InitSeafileDialog);
        mChooseDirBtn->setObjectName(QString::fromUtf8("mChooseDirBtn"));

        horizontalLayout->addWidget(mChooseDirBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 125, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        line_2 = new QFrame(InitSeafileDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        mOkBtn = new QPushButton(InitSeafileDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout_3->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(InitSeafileDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout_3->addWidget(mCancelBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);

        line->raise();
        line_2->raise();
        widget->raise();

        retranslateUi(InitSeafileDialog);

        QMetaObject::connectSlotsByName(InitSeafileDialog);
    } // setupUi

    void retranslateUi(QDialog *InitSeafileDialog)
    {
        InitSeafileDialog->setWindowTitle(QCoreApplication::translate("InitSeafileDialog", "Dialog", nullptr));
        mTitle->setText(QCoreApplication::translate("InitSeafileDialog", "Choose a folder", nullptr));
        mLogo->setText(QCoreApplication::translate("InitSeafileDialog", "logo", nullptr));
        mCentralText->setText(QCoreApplication::translate("InitSeafileDialog", "Please choose a folder. We will create a %1 subfolder in it. When you download a library, it will be saved there by default.", nullptr));
        mChooseDirBtn->setText(QCoreApplication::translate("InitSeafileDialog", "Choose...", nullptr));
        mOkBtn->setText(QCoreApplication::translate("InitSeafileDialog", "Next", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("InitSeafileDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitSeafileDialog: public Ui_InitSeafileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INIT_2D_SEAFILE_2D_DIALOG_H
