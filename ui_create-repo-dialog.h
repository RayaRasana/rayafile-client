/********************************************************************************
** Form generated from reading UI file 'create-repo-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_2D_REPO_2D_DIALOG_H
#define UI_CREATE_2D_REPO_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateRepoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *mFrame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *mEncrypteCheckBox;
    QLabel *mTipLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *mPasswordAgainLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *mDirectory;
    QPushButton *mChooseDirBtn;
    QLabel *nameLabel;
    QLabel *mPasswordLabel;
    QLineEdit *mName;
    QLineEdit *mPassword;
    QLabel *label_4;
    QLineEdit *mPasswordAgain;
    QHBoxLayout *horizontalLayout;
    QLabel *mStatusText;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *CreateRepoDialog)
    {
        if (CreateRepoDialog->objectName().isEmpty())
            CreateRepoDialog->setObjectName(QString::fromUtf8("CreateRepoDialog"));
        CreateRepoDialog->resize(407, 247);
        verticalLayout = new QVBoxLayout(CreateRepoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mFrame = new QFrame(CreateRepoDialog);
        mFrame->setObjectName(QString::fromUtf8("mFrame"));
        mFrame->setFrameShape(QFrame::StyledPanel);
        mFrame->setFrameShadow(QFrame::Plain);
        mFrame->setLineWidth(0);
        gridLayout = new QGridLayout(mFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        mEncrypteCheckBox = new QCheckBox(mFrame);
        mEncrypteCheckBox->setObjectName(QString::fromUtf8("mEncrypteCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mEncrypteCheckBox->sizePolicy().hasHeightForWidth());
        mEncrypteCheckBox->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(mEncrypteCheckBox);

        mTipLabel = new QLabel(mFrame);
        mTipLabel->setObjectName(QString::fromUtf8("mTipLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mTipLabel->sizePolicy().hasHeightForWidth());
        mTipLabel->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(mTipLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_8, 2, 1, 1, 1);

        mPasswordAgainLabel = new QLabel(mFrame);
        mPasswordAgainLabel->setObjectName(QString::fromUtf8("mPasswordAgainLabel"));

        gridLayout->addWidget(mPasswordAgainLabel, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mDirectory = new QLineEdit(mFrame);
        mDirectory->setObjectName(QString::fromUtf8("mDirectory"));

        horizontalLayout_2->addWidget(mDirectory);

        mChooseDirBtn = new QPushButton(mFrame);
        mChooseDirBtn->setObjectName(QString::fromUtf8("mChooseDirBtn"));

        horizontalLayout_2->addWidget(mChooseDirBtn);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        nameLabel = new QLabel(mFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        mPasswordLabel = new QLabel(mFrame);
        mPasswordLabel->setObjectName(QString::fromUtf8("mPasswordLabel"));

        gridLayout->addWidget(mPasswordLabel, 3, 0, 1, 1);

        mName = new QLineEdit(mFrame);
        mName->setObjectName(QString::fromUtf8("mName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mName->sizePolicy().hasHeightForWidth());
        mName->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(mName, 1, 1, 1, 1);

        mPassword = new QLineEdit(mFrame);
        mPassword->setObjectName(QString::fromUtf8("mPassword"));
        mPassword->setEnabled(false);
        mPassword->setAutoFillBackground(false);
        mPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(mPassword, 3, 1, 1, 1);

        label_4 = new QLabel(mFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        mPasswordAgain = new QLineEdit(mFrame);
        mPasswordAgain->setObjectName(QString::fromUtf8("mPasswordAgain"));
        mPasswordAgain->setEnabled(false);
        mPasswordAgain->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(mPasswordAgain, 4, 1, 1, 1);


        verticalLayout->addWidget(mFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mStatusText = new QLabel(CreateRepoDialog);
        mStatusText->setObjectName(QString::fromUtf8("mStatusText"));
        mStatusText->setEnabled(true);

        horizontalLayout->addWidget(mStatusText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkBtn = new QPushButton(CreateRepoDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(CreateRepoDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mOkBtn, mDirectory);
        QWidget::setTabOrder(mDirectory, mChooseDirBtn);
        QWidget::setTabOrder(mChooseDirBtn, mName);
        QWidget::setTabOrder(mName, mEncrypteCheckBox);
        QWidget::setTabOrder(mEncrypteCheckBox, mPassword);
        QWidget::setTabOrder(mPassword, mPasswordAgain);
        QWidget::setTabOrder(mPasswordAgain, mCancelBtn);

        retranslateUi(CreateRepoDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), CreateRepoDialog, SLOT(reject()));
        QObject::connect(mEncrypteCheckBox, SIGNAL(toggled(bool)), mPassword, SLOT(setEnabled(bool)));
        QObject::connect(mEncrypteCheckBox, SIGNAL(toggled(bool)), mPasswordAgain, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(CreateRepoDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateRepoDialog)
    {
        CreateRepoDialog->setWindowTitle(QCoreApplication::translate("CreateRepoDialog", "Dialog", nullptr));
        mEncrypteCheckBox->setText(QCoreApplication::translate("CreateRepoDialog", "encrypted", nullptr));
        mTipLabel->setText(QCoreApplication::translate("CreateRepoDialog", "TextLabel", nullptr));
        mPasswordAgainLabel->setText(QCoreApplication::translate("CreateRepoDialog", "Password Again:", nullptr));
        mChooseDirBtn->setText(QCoreApplication::translate("CreateRepoDialog", "Choose", nullptr));
        nameLabel->setText(QCoreApplication::translate("CreateRepoDialog", "Name:", nullptr));
        mPasswordLabel->setText(QCoreApplication::translate("CreateRepoDialog", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("CreateRepoDialog", "Path:", nullptr));
        mStatusText->setText(QCoreApplication::translate("CreateRepoDialog", "status text", nullptr));
        mOkBtn->setText(QCoreApplication::translate("CreateRepoDialog", "OK", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("CreateRepoDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRepoDialog: public Ui_CreateRepoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_2D_REPO_2D_DIALOG_H
