/********************************************************************************
** Form generated from reading UI file 'init-vdrive-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INIT_2D_VDRIVE_2D_DIALOG_H
#define UI_INIT_2D_VDRIVE_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitVirtualDriveDialog
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
    QWidget *mWrapper;
    QHBoxLayout *horizontalLayout_3;
    QLabel *mStatusIcon;
    QLabel *mStatusText;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mYesBtn;
    QPushButton *mNoBtn;
    QPushButton *mRunInBackgroundBtn;
    QPushButton *mOpenBtn;
    QPushButton *mFinishBtn;

    void setupUi(QDialog *InitVirtualDriveDialog)
    {
        if (InitVirtualDriveDialog->objectName().isEmpty())
            InitVirtualDriveDialog->setObjectName(QString::fromUtf8("InitVirtualDriveDialog"));
        InitVirtualDriveDialog->resize(566, 350);
        InitVirtualDriveDialog->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"min-width: 260px;\n"
"}"));
        verticalLayout = new QVBoxLayout(InitVirtualDriveDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(InitVirtualDriveDialog);
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

        line = new QFrame(InitVirtualDriveDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        mWrapper = new QWidget(InitVirtualDriveDialog);
        mWrapper->setObjectName(QString::fromUtf8("mWrapper"));
        horizontalLayout_3 = new QHBoxLayout(mWrapper);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        mStatusIcon = new QLabel(mWrapper);
        mStatusIcon->setObjectName(QString::fromUtf8("mStatusIcon"));
        mStatusIcon->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout_3->addWidget(mStatusIcon);

        mStatusText = new QLabel(mWrapper);
        mStatusText->setObjectName(QString::fromUtf8("mStatusText"));

        horizontalLayout_3->addWidget(mStatusText);

        horizontalSpacer_3 = new QSpacerItem(548, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(mWrapper);

        verticalSpacer_2 = new QSpacerItem(20, 85, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line_2 = new QFrame(InitVirtualDriveDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mYesBtn = new QPushButton(InitVirtualDriveDialog);
        mYesBtn->setObjectName(QString::fromUtf8("mYesBtn"));

        horizontalLayout->addWidget(mYesBtn);

        mNoBtn = new QPushButton(InitVirtualDriveDialog);
        mNoBtn->setObjectName(QString::fromUtf8("mNoBtn"));

        horizontalLayout->addWidget(mNoBtn);

        mRunInBackgroundBtn = new QPushButton(InitVirtualDriveDialog);
        mRunInBackgroundBtn->setObjectName(QString::fromUtf8("mRunInBackgroundBtn"));

        horizontalLayout->addWidget(mRunInBackgroundBtn);

        mOpenBtn = new QPushButton(InitVirtualDriveDialog);
        mOpenBtn->setObjectName(QString::fromUtf8("mOpenBtn"));

        horizontalLayout->addWidget(mOpenBtn);

        mFinishBtn = new QPushButton(InitVirtualDriveDialog);
        mFinishBtn->setObjectName(QString::fromUtf8("mFinishBtn"));

        horizontalLayout->addWidget(mFinishBtn);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mYesBtn, mNoBtn);

        retranslateUi(InitVirtualDriveDialog);
        QObject::connect(mNoBtn, SIGNAL(clicked()), InitVirtualDriveDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InitVirtualDriveDialog);
    } // setupUi

    void retranslateUi(QDialog *InitVirtualDriveDialog)
    {
        InitVirtualDriveDialog->setWindowTitle(QCoreApplication::translate("InitVirtualDriveDialog", "Dialog", nullptr));
        mTitle->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Download Default Library", nullptr));
        mLogo->setText(QCoreApplication::translate("InitVirtualDriveDialog", "logo", nullptr));
        mStatusText->setText(QCoreApplication::translate("InitVirtualDriveDialog", "%1 organizes files by libraries. \n"
"Do you like to download your default library?", nullptr));
        mYesBtn->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Yes", nullptr));
        mNoBtn->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Skip", nullptr));
        mRunInBackgroundBtn->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Run in Background", nullptr));
        mOpenBtn->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Open", nullptr));
        mFinishBtn->setText(QCoreApplication::translate("InitVirtualDriveDialog", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InitVirtualDriveDialog: public Ui_InitVirtualDriveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INIT_2D_VDRIVE_2D_DIALOG_H
