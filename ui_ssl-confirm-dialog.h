/********************************************************************************
** Form generated from reading UI file 'ssl-confirm-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSL_2D_CONFIRM_2D_DIALOG_H
#define UI_SSL_2D_CONFIRM_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SslConfirmDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *mHint;
    QCheckBox *mRememberChoiceCheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mYesBtn;
    QPushButton *mNoBtn;

    void setupUi(QDialog *SslConfirmDialog)
    {
        if (SslConfirmDialog->objectName().isEmpty())
            SslConfirmDialog->setObjectName(QString::fromUtf8("SslConfirmDialog"));
        SslConfirmDialog->resize(400, 166);
        verticalLayout = new QVBoxLayout(SslConfirmDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mHint = new QLabel(SslConfirmDialog);
        mHint->setObjectName(QString::fromUtf8("mHint"));
        mHint->setText(QString::fromUtf8("hint"));
        mHint->setWordWrap(true);

        verticalLayout->addWidget(mHint);

        mRememberChoiceCheckBox = new QCheckBox(SslConfirmDialog);
        mRememberChoiceCheckBox->setObjectName(QString::fromUtf8("mRememberChoiceCheckBox"));

        verticalLayout->addWidget(mRememberChoiceCheckBox);

        line = new QFrame(SslConfirmDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mYesBtn = new QPushButton(SslConfirmDialog);
        mYesBtn->setObjectName(QString::fromUtf8("mYesBtn"));

        horizontalLayout->addWidget(mYesBtn);

        mNoBtn = new QPushButton(SslConfirmDialog);
        mNoBtn->setObjectName(QString::fromUtf8("mNoBtn"));

        horizontalLayout->addWidget(mNoBtn);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(mYesBtn, mRememberChoiceCheckBox);
        QWidget::setTabOrder(mRememberChoiceCheckBox, mNoBtn);

        retranslateUi(SslConfirmDialog);

        QMetaObject::connectSlotsByName(SslConfirmDialog);
    } // setupUi

    void retranslateUi(QDialog *SslConfirmDialog)
    {
        SslConfirmDialog->setWindowTitle(QCoreApplication::translate("SslConfirmDialog", "Dialog", nullptr));
        mRememberChoiceCheckBox->setText(QCoreApplication::translate("SslConfirmDialog", "Remember my choice", nullptr));
        mYesBtn->setText(QCoreApplication::translate("SslConfirmDialog", "Yes", nullptr));
        mNoBtn->setText(QCoreApplication::translate("SslConfirmDialog", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SslConfirmDialog: public Ui_SslConfirmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSL_2D_CONFIRM_2D_DIALOG_H
