/********************************************************************************
** Form generated from reading UI file 'settings-dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_2D_DIALOG_H
#define UI_SETTINGS_2D_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *mTabWidget;
    QWidget *mBasicTab;
    QVBoxLayout *verticalLayout;
    QCheckBox *mHideMainWinCheckBox;
    QCheckBox *mNotifyCheckBox;
    QCheckBox *mSyncExtraTempFileCheckBox;
    QCheckBox *mAutoStartCheckBox;
    QCheckBox *mHideDockIconCheckBox;
    QCheckBox *mFinderSyncCheckBox;
    QCheckBox *mShellExtCheckBox;
    QCheckBox *mHideWindowsIncompatibilityCheckBox;
    QCheckBox *mIgnoreSymlinksCheckBox;
    QFormLayout *formLayout;
    QLabel *label_5;
    QLabel *label_4;
    QSpinBox *mDownloadSpinBox;
    QSpinBox *mUploadSpinBox;
    QWidget *mAdvancedTab;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mAllowInvalidWorktreeCheckBox;
    QLabel *desc;
    QCheckBox *mAllowRepoNotFoundCheckBox;
    QLabel *desc_2;
    QCheckBox *mDisableVerifyHttpSyncCert;
    QFormLayout *formLayout_3;
    QLabel *label;
    QSpinBox *mDeleteConfirmSpinBox;
    QSpacerItem *verticalSpacer;
    QWidget *mLanguageTab;
    QVBoxLayout *languageTabLayout;
    QHBoxLayout *languageLayout;
    QLabel *mLanguageLabel;
    QComboBox *mLanguageComboBox;
    QSpacerItem *verticalSpacer_1;
    QWidget *mNetworkTab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    QLabel *mProxyMethodLabel;
    QComboBox *mProxyMethodComboBox;
    QLabel *mProxyHostLabel;
    QLineEdit *mProxyHost;
    QLabel *mProxyPortLabel;
    QSpinBox *mProxyPort;
    QLabel *mProxyUsernameLabel;
    QLineEdit *mProxyUsername;
    QLabel *mProxyPasswordLabel;
    QLineEdit *mProxyPassword;
    QCheckBox *mProxyRequirePassword;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *mOkBtn;
    QPushButton *mCancelBtn;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(724, 579);
        verticalLayout_3 = new QVBoxLayout(SettingsDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        mTabWidget = new QTabWidget(SettingsDialog);
        mTabWidget->setObjectName(QString::fromUtf8("mTabWidget"));
        mBasicTab = new QWidget();
        mBasicTab->setObjectName(QString::fromUtf8("mBasicTab"));
        verticalLayout = new QVBoxLayout(mBasicTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mHideMainWinCheckBox = new QCheckBox(mBasicTab);
        mHideMainWinCheckBox->setObjectName(QString::fromUtf8("mHideMainWinCheckBox"));

        verticalLayout->addWidget(mHideMainWinCheckBox);

        mNotifyCheckBox = new QCheckBox(mBasicTab);
        mNotifyCheckBox->setObjectName(QString::fromUtf8("mNotifyCheckBox"));

        verticalLayout->addWidget(mNotifyCheckBox);

        mSyncExtraTempFileCheckBox = new QCheckBox(mBasicTab);
        mSyncExtraTempFileCheckBox->setObjectName(QString::fromUtf8("mSyncExtraTempFileCheckBox"));

        verticalLayout->addWidget(mSyncExtraTempFileCheckBox);

        mAutoStartCheckBox = new QCheckBox(mBasicTab);
        mAutoStartCheckBox->setObjectName(QString::fromUtf8("mAutoStartCheckBox"));

        verticalLayout->addWidget(mAutoStartCheckBox);

        mHideDockIconCheckBox = new QCheckBox(mBasicTab);
        mHideDockIconCheckBox->setObjectName(QString::fromUtf8("mHideDockIconCheckBox"));

        verticalLayout->addWidget(mHideDockIconCheckBox);

        mFinderSyncCheckBox = new QCheckBox(mBasicTab);
        mFinderSyncCheckBox->setObjectName(QString::fromUtf8("mFinderSyncCheckBox"));

        verticalLayout->addWidget(mFinderSyncCheckBox);

        mShellExtCheckBox = new QCheckBox(mBasicTab);
        mShellExtCheckBox->setObjectName(QString::fromUtf8("mShellExtCheckBox"));

        verticalLayout->addWidget(mShellExtCheckBox);

        mHideWindowsIncompatibilityCheckBox = new QCheckBox(mBasicTab);
        mHideWindowsIncompatibilityCheckBox->setObjectName(QString::fromUtf8("mHideWindowsIncompatibilityCheckBox"));

        verticalLayout->addWidget(mHideWindowsIncompatibilityCheckBox);

        mIgnoreSymlinksCheckBox = new QCheckBox(mBasicTab);
        mIgnoreSymlinksCheckBox->setObjectName(QString::fromUtf8("mIgnoreSymlinksCheckBox"));

        verticalLayout->addWidget(mIgnoreSymlinksCheckBox);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5 = new QLabel(mBasicTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(mBasicTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        mDownloadSpinBox = new QSpinBox(mBasicTab);
        mDownloadSpinBox->setObjectName(QString::fromUtf8("mDownloadSpinBox"));
        mDownloadSpinBox->setMaximumSize(QSize(100, 16777215));
        mDownloadSpinBox->setMaximum(100000);
        mDownloadSpinBox->setSingleStep(10);

        formLayout->setWidget(0, QFormLayout::FieldRole, mDownloadSpinBox);

        mUploadSpinBox = new QSpinBox(mBasicTab);
        mUploadSpinBox->setObjectName(QString::fromUtf8("mUploadSpinBox"));
        mUploadSpinBox->setMaximumSize(QSize(100, 16777215));
        mUploadSpinBox->setMaximum(100000);
        mUploadSpinBox->setSingleStep(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, mUploadSpinBox);


        verticalLayout->addLayout(formLayout);

        mTabWidget->addTab(mBasicTab, QString());
        mAdvancedTab = new QWidget();
        mAdvancedTab->setObjectName(QString::fromUtf8("mAdvancedTab"));
        verticalLayout_2 = new QVBoxLayout(mAdvancedTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mAllowInvalidWorktreeCheckBox = new QCheckBox(mAdvancedTab);
        mAllowInvalidWorktreeCheckBox->setObjectName(QString::fromUtf8("mAllowInvalidWorktreeCheckBox"));

        verticalLayout_2->addWidget(mAllowInvalidWorktreeCheckBox);

        desc = new QLabel(mAdvancedTab);
        desc->setObjectName(QString::fromUtf8("desc"));
        desc->setWordWrap(true);

        verticalLayout_2->addWidget(desc);

        mAllowRepoNotFoundCheckBox = new QCheckBox(mAdvancedTab);
        mAllowRepoNotFoundCheckBox->setObjectName(QString::fromUtf8("mAllowRepoNotFoundCheckBox"));

        verticalLayout_2->addWidget(mAllowRepoNotFoundCheckBox);

        desc_2 = new QLabel(mAdvancedTab);
        desc_2->setObjectName(QString::fromUtf8("desc_2"));
        desc_2->setWordWrap(true);

        verticalLayout_2->addWidget(desc_2);

        mDisableVerifyHttpSyncCert = new QCheckBox(mAdvancedTab);
        mDisableVerifyHttpSyncCert->setObjectName(QString::fromUtf8("mDisableVerifyHttpSyncCert"));

        verticalLayout_2->addWidget(mDisableVerifyHttpSyncCert);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_3->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label = new QLabel(mAdvancedTab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        mDeleteConfirmSpinBox = new QSpinBox(mAdvancedTab);
        mDeleteConfirmSpinBox->setObjectName(QString::fromUtf8("mDeleteConfirmSpinBox"));
        mDeleteConfirmSpinBox->setMinimum(1);
        mDeleteConfirmSpinBox->setMaximum(100000);
        mDeleteConfirmSpinBox->setValue(500);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mDeleteConfirmSpinBox);


        verticalLayout_2->addLayout(formLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        mTabWidget->addTab(mAdvancedTab, QString());
        mLanguageTab = new QWidget();
        mLanguageTab->setObjectName(QString::fromUtf8("mLanguageTab"));
        languageTabLayout = new QVBoxLayout(mLanguageTab);
        languageTabLayout->setObjectName(QString::fromUtf8("languageTabLayout"));
        languageLayout = new QHBoxLayout();
        languageLayout->setObjectName(QString::fromUtf8("languageLayout"));
        mLanguageLabel = new QLabel(mLanguageTab);
        mLanguageLabel->setObjectName(QString::fromUtf8("mLanguageLabel"));

        languageLayout->addWidget(mLanguageLabel);

        mLanguageComboBox = new QComboBox(mLanguageTab);
        mLanguageComboBox->setObjectName(QString::fromUtf8("mLanguageComboBox"));

        languageLayout->addWidget(mLanguageComboBox);


        languageTabLayout->addLayout(languageLayout);

        verticalSpacer_1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        languageTabLayout->addItem(verticalSpacer_1);

        mTabWidget->addTab(mLanguageTab, QString());
        mNetworkTab = new QWidget();
        mNetworkTab->setObjectName(QString::fromUtf8("mNetworkTab"));
        layoutWidget = new QWidget(mNetworkTab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 12, 481, 451));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout_2->setHorizontalSpacing(10);
        formLayout_2->setVerticalSpacing(6);
        formLayout_2->setContentsMargins(-1, 5, 4, -1);
        mProxyMethodLabel = new QLabel(layoutWidget);
        mProxyMethodLabel->setObjectName(QString::fromUtf8("mProxyMethodLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mProxyMethodLabel->sizePolicy().hasHeightForWidth());
        mProxyMethodLabel->setSizePolicy(sizePolicy);
        mProxyMethodLabel->setMinimumSize(QSize(0, 0));
        mProxyMethodLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, mProxyMethodLabel);

        mProxyMethodComboBox = new QComboBox(layoutWidget);
        mProxyMethodComboBox->setObjectName(QString::fromUtf8("mProxyMethodComboBox"));
        sizePolicy.setHeightForWidth(mProxyMethodComboBox->sizePolicy().hasHeightForWidth());
        mProxyMethodComboBox->setSizePolicy(sizePolicy);
        mProxyMethodComboBox->setMinimumSize(QSize(246, 0));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, mProxyMethodComboBox);

        mProxyHostLabel = new QLabel(layoutWidget);
        mProxyHostLabel->setObjectName(QString::fromUtf8("mProxyHostLabel"));
        sizePolicy.setHeightForWidth(mProxyHostLabel->sizePolicy().hasHeightForWidth());
        mProxyHostLabel->setSizePolicy(sizePolicy);
        mProxyHostLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, mProxyHostLabel);

        mProxyHost = new QLineEdit(layoutWidget);
        mProxyHost->setObjectName(QString::fromUtf8("mProxyHost"));
        sizePolicy.setHeightForWidth(mProxyHost->sizePolicy().hasHeightForWidth());
        mProxyHost->setSizePolicy(sizePolicy);
        mProxyHost->setMinimumSize(QSize(240, 0));
        mProxyHost->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, mProxyHost);

        mProxyPortLabel = new QLabel(layoutWidget);
        mProxyPortLabel->setObjectName(QString::fromUtf8("mProxyPortLabel"));
        sizePolicy.setHeightForWidth(mProxyPortLabel->sizePolicy().hasHeightForWidth());
        mProxyPortLabel->setSizePolicy(sizePolicy);
        mProxyPortLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, mProxyPortLabel);

        mProxyPort = new QSpinBox(layoutWidget);
        mProxyPort->setObjectName(QString::fromUtf8("mProxyPort"));
        sizePolicy.setHeightForWidth(mProxyPort->sizePolicy().hasHeightForWidth());
        mProxyPort->setSizePolicy(sizePolicy);
        mProxyPort->setMinimumSize(QSize(256, 0));
        mProxyPort->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mProxyPort->setMaximum(65535);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, mProxyPort);

        mProxyUsernameLabel = new QLabel(layoutWidget);
        mProxyUsernameLabel->setObjectName(QString::fromUtf8("mProxyUsernameLabel"));
        mProxyUsernameLabel->setEnabled(false);
        sizePolicy.setHeightForWidth(mProxyUsernameLabel->sizePolicy().hasHeightForWidth());
        mProxyUsernameLabel->setSizePolicy(sizePolicy);
        mProxyUsernameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, mProxyUsernameLabel);

        mProxyUsername = new QLineEdit(layoutWidget);
        mProxyUsername->setObjectName(QString::fromUtf8("mProxyUsername"));
        mProxyUsername->setEnabled(false);
        sizePolicy.setHeightForWidth(mProxyUsername->sizePolicy().hasHeightForWidth());
        mProxyUsername->setSizePolicy(sizePolicy);
        mProxyUsername->setMinimumSize(QSize(240, 0));
        mProxyUsername->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, mProxyUsername);

        mProxyPasswordLabel = new QLabel(layoutWidget);
        mProxyPasswordLabel->setObjectName(QString::fromUtf8("mProxyPasswordLabel"));
        mProxyPasswordLabel->setEnabled(false);
        sizePolicy.setHeightForWidth(mProxyPasswordLabel->sizePolicy().hasHeightForWidth());
        mProxyPasswordLabel->setSizePolicy(sizePolicy);
        mProxyPasswordLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, mProxyPasswordLabel);

        mProxyPassword = new QLineEdit(layoutWidget);
        mProxyPassword->setObjectName(QString::fromUtf8("mProxyPassword"));
        mProxyPassword->setEnabled(false);
        sizePolicy.setHeightForWidth(mProxyPassword->sizePolicy().hasHeightForWidth());
        mProxyPassword->setSizePolicy(sizePolicy);
        mProxyPassword->setMinimumSize(QSize(240, 0));
        mProxyPassword->setEchoMode(QLineEdit::Password);
        mProxyPassword->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, mProxyPassword);

        mProxyRequirePassword = new QCheckBox(layoutWidget);
        mProxyRequirePassword->setObjectName(QString::fromUtf8("mProxyRequirePassword"));
        sizePolicy.setHeightForWidth(mProxyRequirePassword->sizePolicy().hasHeightForWidth());
        mProxyRequirePassword->setSizePolicy(sizePolicy);
        mProxyRequirePassword->setMinimumSize(QSize(240, 0));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, mProxyRequirePassword);


        verticalLayout_4->addLayout(formLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        mTabWidget->addTab(mNetworkTab, QString());

        verticalLayout_3->addWidget(mTabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        mOkBtn = new QPushButton(SettingsDialog);
        mOkBtn->setObjectName(QString::fromUtf8("mOkBtn"));

        horizontalLayout->addWidget(mOkBtn);

        mCancelBtn = new QPushButton(SettingsDialog);
        mCancelBtn->setObjectName(QString::fromUtf8("mCancelBtn"));

        horizontalLayout->addWidget(mCancelBtn);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(SettingsDialog);
        QObject::connect(mCancelBtn, SIGNAL(clicked()), SettingsDialog, SLOT(reject()));

        mTabWidget->setCurrentIndex(0);
        mProxyMethodComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Dialog", nullptr));
        mHideMainWinCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\205\330\256\331\201\333\214 \332\251\330\261\330\257\331\206 \331\276\331\206\330\254\330\261\331\207 \330\247\330\265\331\204\333\214 \331\207\331\206\332\257\330\247\331\205 \330\264\330\261\331\210\330\271", nullptr));
        mNotifyCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\330\247\330\271\331\204\330\247\331\206 \331\207\331\206\332\257\330\247\331\205 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207\342\200\214\331\207\330\247", nullptr));
        mSyncExtraTempFileCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\201\330\271\330\247\331\204 \332\251\330\261\330\257\331\206 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \331\201\330\247\333\214\331\204\342\200\214\331\207\330\247\333\214 \331\205\331\210\331\202\330\252 MSOffice/Libreoffice", nullptr));
        mAutoStartCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\330\264\330\261\331\210\330\271 \330\256\331\210\330\257\332\251\330\247\330\261 %1 \331\276\330\263 \330\247\330\262 \331\210\330\261\331\210\330\257", nullptr));
        mHideDockIconCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\205\330\256\331\201\333\214 \332\251\330\261\330\257\331\206 \330\242\333\214\332\251\331\210\331\206 %1 \330\247\330\262 \330\257\330\247\332\251", nullptr));
        mFinderSyncCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\201\330\271\330\247\331\204 \332\251\330\261\330\257\331\206 \330\247\331\201\330\262\331\210\331\206\331\207 FinderSync", nullptr));
        mShellExtCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\201\330\271\330\247\331\204 \332\251\330\261\330\257\331\206 \330\247\331\201\330\262\331\210\331\206\331\207 Explorer", nullptr));
        mHideWindowsIncompatibilityCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\331\205\330\256\331\201\333\214 \332\251\330\261\330\257\331\206 \331\276\333\214\330\247\331\205 \331\205\330\263\333\214\330\261\331\207\330\247\333\214 \331\206\330\247\330\263\330\247\330\262\332\257\330\247\330\261 Windows", nullptr));
        mIgnoreSymlinksCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\330\271\330\257\331\205 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \331\276\333\214\331\210\331\206\330\257\331\207\330\247\333\214 \330\263\331\205\330\250\331\204\333\214\332\251", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "\331\205\330\255\330\257\331\210\330\257\333\214\330\252 \330\263\330\261\330\271\330\252 \330\257\330\247\331\206\331\204\331\210\330\257 (KB/s):", nullptr));
        label_4->setText(QCoreApplication::translate("SettingsDialog", "\331\205\330\255\330\257\331\210\330\257\333\214\330\252 \330\263\330\261\330\271\330\252 \330\250\330\247\330\261\332\257\330\260\330\247\330\261\333\214 (KB/s):", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mBasicTab), QCoreApplication::translate("SettingsDialog", "Basic", nullptr));
        mAllowInvalidWorktreeCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\330\254\331\204\331\210\332\257\333\214\330\261\333\214 \330\247\330\262 \331\204\330\272\331\210 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \330\256\331\210\330\257\332\251\330\247\330\261 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207", nullptr));
        desc->setText(QCoreApplication::translate("SettingsDialog", "\330\254\331\204\331\210\332\257\333\214\330\261\333\214 \330\247\330\262 \331\204\330\272\331\210 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \330\256\331\210\330\257\332\251\330\247\330\261 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \331\210\331\202\330\252\333\214 \331\276\331\210\330\264\331\207 \331\205\330\255\331\204\333\214 \330\255\330\260\331\201 \333\214\330\247 \331\202\330\247\330\250\331\204 \330\257\330\263\330\252\330\261\330\263 \331\206\333\214\330\263\330\252", nullptr));
        mAllowRepoNotFoundCheckBox->setText(QCoreApplication::translate("SettingsDialog", "\330\254\331\204\331\210\332\257\333\214\330\261\333\214 \330\247\330\262 \331\204\330\272\331\210 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \331\207\331\206\332\257\330\247\331\205\333\214 \332\251\331\207 \330\257\330\261 \330\263\330\261\331\210\330\261 \331\276\333\214\330\257\330\247 \331\206\330\264\330\257\331\207 \330\250\330\247\330\264\330\257", nullptr));
        desc_2->setText(QCoreApplication::translate("SettingsDialog", "\331\207\331\206\332\257\330\247\331\205\333\214 \332\251\331\207 \332\251\330\252\330\247\330\250\330\256\330\247\331\206\331\207 \330\257\330\261 \330\263\330\261\331\210\330\261 \331\276\333\214\330\257\330\247 \331\206\330\264\330\257\331\207 \330\247\330\263\330\252\330\214 \330\254\331\204\331\210\332\257\333\214\330\261\333\214 \330\247\330\262 \331\204\330\272\331\210 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 \330\256\331\210\330\257\332\251\330\247\330\261 \330\242\331\206", nullptr));
        mDisableVerifyHttpSyncCert->setText(QCoreApplication::translate("SettingsDialog", "\330\272\333\214\330\261\331\201\330\271\330\247\331\204 \332\251\330\261\330\257\331\206 \330\252\330\247\333\214\333\214\330\257 \332\257\331\210\330\247\331\207\333\214\331\206\330\247\331\205\331\207 \330\263\330\261\331\210\330\261 \330\257\330\261 \331\207\331\205\332\257\330\247\331\205\342\200\214\330\263\330\247\330\262\333\214 HTTPS", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "\330\252\330\247\333\214\333\214\330\257 \331\202\330\250\331\204 \330\247\330\262 \330\255\330\260\331\201 \331\201\330\247\333\214\331\204\342\200\214\331\207\330\247\333\214 \330\250\333\214\330\264\330\252\330\261 \330\247\330\262", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mAdvancedTab), QCoreApplication::translate("SettingsDialog", "Advanced", nullptr));
        mLanguageLabel->setText(QCoreApplication::translate("SettingsDialog", "\330\262\330\250\330\247\331\206 (\331\206\333\214\330\247\330\262 \330\250\331\207 \330\261\333\214\342\200\214\330\247\330\263\330\252\330\247\330\261\330\252 \330\257\330\247\330\261\330\257)", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mLanguageTab), QCoreApplication::translate("SettingsDialog", "Language", nullptr));
        mProxyMethodLabel->setText(QCoreApplication::translate("SettingsDialog", "\331\206\331\210\330\271 \331\276\330\261\331\210\332\251\330\263\333\214:", nullptr));
        mProxyHostLabel->setText(QCoreApplication::translate("SettingsDialog", "\331\205\333\214\330\262\330\250\330\247\331\206:", nullptr));
        mProxyPortLabel->setText(QCoreApplication::translate("SettingsDialog", "\331\276\331\210\330\261\330\252:", nullptr));
        mProxyPort->setProperty("text", QVariant(QCoreApplication::translate("SettingsDialog", "0", nullptr)));
        mProxyUsernameLabel->setText(QCoreApplication::translate("SettingsDialog", "\331\206\330\247\331\205 \332\251\330\247\330\261\330\250\330\261\333\214:", nullptr));
        mProxyPasswordLabel->setText(QCoreApplication::translate("SettingsDialog", "\330\261\331\205\330\262 \330\271\330\250\331\210\330\261:", nullptr));
        mProxyRequirePassword->setText(QCoreApplication::translate("SettingsDialog", "\330\263\330\261\331\210\330\261 \331\276\330\261\331\210\332\251\330\263\333\214 \331\206\333\214\330\247\330\262 \330\250\331\207 \330\261\331\205\330\262 \330\271\330\250\331\210\330\261 \330\257\330\247\330\261\330\257", nullptr));
        mTabWidget->setTabText(mTabWidget->indexOf(mNetworkTab), QCoreApplication::translate("SettingsDialog", "Network", nullptr));
        mOkBtn->setText(QCoreApplication::translate("SettingsDialog", "\330\252\330\243\333\214\333\214\330\257", nullptr));
        mCancelBtn->setText(QCoreApplication::translate("SettingsDialog", "\331\204\330\272\331\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_2D_DIALOG_H
