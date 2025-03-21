#include <QtGlobal>

#include <QtWidgets>
#include <QApplication>
#include <QDesktopServices>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QCoreApplication>
#include <QMessageBox>
#include <QTimer>
#include <QHostInfo>

#include <errno.h>
#include <glib.h>

#include "utils/utils.h"
#include "utils/file-utils.h"
#include "utils/log.h"
#include "account-mgr.h"
#include "configurator.h"
#include "daemon-mgr.h"
#include "message-poller.h"
#include "settings-mgr.h"
#include "certs-mgr.h"
#include "rpc/rpc-client.h"
#include "ui/main-window.h"
#include "ui/tray-icon.h"
#include "ui/settings-dialog.h"
#include "ui/init-vdrive-dialog.h"
#include "ui/login-dialog.h"
#include "open-local-helper.h"
#include "avatar-service.h"
#include "filebrowser/thumbnail-service.h"
#include "filebrowser/data-cache.h"
#include "filebrowser/auto-update-mgr.h"
#include "filebrowser/data-mgr.h"
#include "rpc/local-repo.h"
#include "rpc/rpc-server.h"
#include "network-mgr.h"
#include "server-status-service.h"
#include "account-info-service.h"
#include "customization-service.h"

#if defined(Q_OS_WIN32)
    #include "ext-handler.h"
    #include "utils/registry.h"
#elif defined(HAVE_FINDER_SYNC_SUPPORT)
    #include "finder-sync/finder-sync-listener.h"
#endif

#if defined(Q_OS_MAC)
#include "utils/utils-mac.h"
#endif

#include "rayafile.h"

namespace {
enum DEBUG_LEVEL {
  DEBUG = 0,
  WARNING
};

#if !defined(QT_NO_DEBUG) || !defined(NDEBUG)
DEBUG_LEVEL seafile_client_debug_level = DEBUG;
#else
DEBUG_LEVEL seafile_client_debug_level = WARNING;
#endif

void myLogHandlerDebug(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
#ifdef QT_MESSAGELOGCONTEXT
    case QtDebugMsg:
        g_debug("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
    case QtWarningMsg:
        g_warning("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
    case QtCriticalMsg:
        g_critical("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
    case QtFatalMsg:
        g_critical("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        abort();
    case QtInfoMsg:
        g_info("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
#else
    case QtDebugMsg:
        g_debug("%s\n", localMsg.constData());
        break;
    case QtWarningMsg:
        g_warning("%s\n", localMsg.constData());
        break;
    case QtCriticalMsg:
        g_critical("%s\n", localMsg.constData());
        break;
    case QtFatalMsg:
        g_critical("%s\n", localMsg.constData());
        abort();
    case QtInfoMsg:
        g_info("%s\n", localMsg.constData());
        break;
#endif
    default:
        break;
    }
}

void myLogHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
#ifdef QT_MESSAGELOGCONTEXT
    case QtWarningMsg:
        g_warning("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
    case QtCriticalMsg:
        g_critical("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
    case QtFatalMsg:
        g_critical("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        abort();
    case QtInfoMsg:
        g_info("%s (%s:%u)\n", localMsg.constData(), context.file, context.line);
        break;
#else
    case QtWarningMsg:
        g_warning("%s\n", localMsg.constData());
        break;
    case QtCriticalMsg:
        g_critical("%s\n", localMsg.constData());
        break;
    case QtFatalMsg:
        g_critical("%s\n", localMsg.constData());
        abort();
    case QtInfoMsg:
        g_info("%s\n", localMsg.constData());
        break;
#endif
    default:
        break;
    }
}

#ifdef Q_OS_MAC
void writeCABundleForCurl()
{
    QString ca_bundle_path = QDir(rayafileApp->configurator()->seafileDir()).filePath("ca-bundle.pem");
    QFile bundle(ca_bundle_path);
    if (bundle.exists()) {
        bundle.remove();
    }
    bundle.open(QIODevice::WriteOnly);
    const std::vector<QByteArray> certs = utils::mac::getSystemCaCertificates();
    for (size_t i = 0; i < certs.size(); i++) {
        QList<QSslCertificate> list = QSslCertificate::fromData(certs[i], QSsl::Der);
        foreach (const QSslCertificate& cert, list) {
            bundle.write(cert.toPem());
        }
    }
}
#endif

const char *const kPreconfigureUsername = "PreconfigureUsername";
const char *const kPreconfigureUserToken = "PreconfigureUserToken";
const char *const kPreconfigureServerAddr = "PreconfigureServerAddr";
const char *const kPreconfigureComputerName = "PreconfigureComputerName";
const char* const kPreConfiguretionBlockSize = "PreconfigureBlockSize";
const char* const kHideConfigurationWizard = "HideConfigurationWizard";
#if defined(Q_OS_WIN32)
const char *const kSeafileConfigureFileName = "seafile.ini";
const char *const kSeafileConfigurePath = "SOFTWARE\\Seafile";
const int kIntervalBeforeShowInitVirtualDialog = 3000;
#else
const char *const kSeafileConfigureFileName = ".seafilerc";
#endif
const char *const kSeafilePreconfigureGroupName = "preconfigure";

const int kIntervalForUpdateRepoProperty = 1000;

const char *kRepoServerUrlProperty = "server-url";

} // namespace

RayaFileApplet *rayafileApp;

RayaFileApplet::RayaFileApplet()
    : configurator_(new Configurator),
      account_mgr_(new AccountManager),
      daemon_mgr_(new DaemonManager),
      main_win_(NULL),
      rpc_client_(new SeafileRpcClient),
      message_poller_(new MessagePoller),
      settings_dialog_(new SettingsDialog),
      settings_mgr_(new SettingsManager),
      certs_mgr_(new CertsManager),
      data_mgr_(new DataManager),
      started_(false),
      in_exit_(false),
      is_pro_(false),
      about_to_quit_(false)
{
    tray_icon_ = new SeafileTrayIcon(this);
    connect(qApp, SIGNAL(aboutToQuit()), this, SLOT(onAboutToQuit()));
}

RayaFileApplet::~RayaFileApplet()
{
    NetworkStatusDetector::instance()->stop();

#ifdef HAVE_FINDER_SYNC_SUPPORT
    finderSyncListenerStop();
#endif
    delete tray_icon_;
    delete certs_mgr_;
    delete settings_dialog_;
    delete message_poller_;
    delete rpc_client_;
    delete account_mgr_;
    delete daemon_mgr_;
    delete configurator_;
    delete data_mgr_;
    if (main_win_)
        delete main_win_;
#if defined(Q_OS_WIN32)
    SeafileExtensionHandler::instance()->stop();
#endif
}

void RayaFileApplet::start()
{
    refreshQss();

    configurator_->checkInit();

    initLog();

    qDebug("client id is %s", toCStr(getUniqueClientId()));
    account_mgr_->start();

    certs_mgr_->start();

    data_mgr_->start();

#if defined(Q_OS_WIN32)
    QString crash_rpt_path = QDir(configurator_->ccnetDir()).filePath("logs/seafile-crash-report.txt");
    if (!g_setenv("CRASH_RPT_PATH", toCStr(crash_rpt_path), FALSE))
        qWarning("Failed to set CRASH_RPT_PATH env variable.\n");
#endif

#if defined(Q_OS_MAC)
    writeCABundleForCurl();
#endif

    settings_mgr_->writeSystemProxyInfo(
        account_mgr_->currentAccount().serverUrl,
        QDir(configurator_->seafileDir()).filePath("system-proxy.txt"));

    FileCache::instance()->start();

    daemon_mgr_->startSeafileDaemon();

    connect(daemon_mgr_, SIGNAL(daemonStarted()),
            this, SLOT(onDaemonStarted()));
    connect(daemon_mgr_, SIGNAL(daemonRestarted()),
            this, SLOT(onDaemonRestarted()));
}

void RayaFileApplet::onDaemonStarted()
{
    rpc_client_->connectDaemon();

    msleep(500);

    settings_mgr_->loadSettings();

    NetworkStatusDetector::instance()->start();
    AutoUpdateManager::instance()->start();

    AvatarService::instance()->start();
    ThumbnailService::instance()->start();

    ServerStatusService::instance()->start();
    CustomizationService::instance()->start();
    AccountInfoService::instance()->start();
    SeafileAppletRpcServer::instance()->start();

    account_mgr_->updateServerInfoForAllAccounts();

    main_win_ = new MainWindow;

#if defined(Q_OS_MAC)
    rayafileApp->settingsManager()->setHideDockIcon(rayafileApp->settingsManager()->hideDockIcon());
#endif

#ifdef XCODE_APP
    if (configurator_->firstUse()) {
        settings_mgr_->setAutoStart(true);
    }
#endif

    if (configurator_->firstUse() || account_mgr_->accounts().size() == 0) {
        do {
            QString username = readPreconfigureExpandedString(kPreconfigureUsername);
            QString token = readPreconfigureExpandedString(kPreconfigureUserToken);
            QString url = readPreconfigureExpandedString(kPreconfigureServerAddr);
            QString computer_name = readPreconfigureExpandedString(kPreconfigureComputerName, settingsManager()->getComputerName());
            if (!computer_name.isEmpty())
                settingsManager()->setComputerName(computer_name);
            if (!username.isEmpty() && !token.isEmpty() && !url.isEmpty()) {
                Account account(url, username, token);
                account_mgr_->setCurrentAccount(account);
                break;
            }

            if (readPreconfigureEntry(kHideConfigurationWizard).toInt())
                break;
            LoginDialog login_dialog;
            login_dialog.exec();
        } while (0);
    } else if (!account_mgr_->accounts().empty()) {
        const Account &account = account_mgr_->accounts()[0];
        account_mgr_->removeNonautoLoginSyncTokens();
        account_mgr_->validateAndUseAccount(account);
    }

    started_ = true;

    if (configurator_->firstUse() || !settings_mgr_->hideMainWindowWhenStarted()) {
        main_win_->showWindow();
    }

    tray_icon_->start();
    tray_icon_->setState(SeafileTrayIcon::STATE_DAEMON_UP);
    message_poller_->start();

#if defined(Q_OS_WIN32)
    QTimer::singleShot(kIntervalBeforeShowInitVirtualDialog, this, SLOT(checkInitVDrive()));
    configurator_->installCustomUrlHandler();
#endif

    QString value;
    if (rayafileApp->rpcClient()->seafileGetConfig("client_name", &value) < 0 || value.isEmpty()) {
        rayafileApp->rpcClient()->seafileSetConfig("client_name", settings_mgr_->getComputerName());
    }

    if (rpc_client_->seafileGetConfig("client_id", &value) < 0 ||
        value.isEmpty() || value != getUniqueClientId()) {
        rpc_client_->seafileSetConfig("client_id", getUniqueClientId());
    }

    QString block = readPreconfigureExpandedString(kPreConfiguretionBlockSize);
    if (!block.isEmpty()) {
        int block_size = block.toInt();
        if (rpc_client_->seafileSetConfigInt("block_size", block_size) < 0) {
            qDebug("setting sync block_size error");
        }
    }
    QTimer::singleShot(kIntervalForUpdateRepoProperty,
                       this, SLOT(updateReposPropertyForHttpSync()));

#if defined(Q_OS_WIN32)
    SeafileExtensionHandler::instance()->start();
#elif defined(HAVE_FINDER_SYNC_SUPPORT)
    finderSyncListenerStart();
#endif
}

void RayaFileApplet::checkInitVDrive()
{
    if (configurator_->firstUse() && account_mgr_->hasAccount()) {
        const Account account = account_mgr_->currentAccount();
        InitVirtualDriveDialog *dialog = new InitVirtualDriveDialog(account);
        int x = main_win_->pos().x() - dialog->rect().width() - 30;
        int y = (getScreenSize(0).center() - dialog->rect().center()).y();
        dialog->move(qMax(0, x), y);
        dialog->show();
        dialog->raise();
        dialog->activateWindow();
    }
}

void RayaFileApplet::onAboutToQuit()
{
    about_to_quit_ = true;
    tray_icon_->hide();
    if (main_win_) {
        main_win_->writeSettings();
    }
}

void RayaFileApplet::errorAndExit(const QString& error)
{
    if (in_exit_ || QCoreApplication::closingDown()) {
        return;
    }

    in_exit_ = true;

    warningBox(error);
    QCoreApplication::exit(1);
}

void RayaFileApplet::restartApp()
{
    if (in_exit_ || QCoreApplication::closingDown()) {
        return;
    }

    in_exit_ = true;

    QStringList args = QApplication::arguments();

    args.removeFirst();

    bool found = false;
    Q_FOREACH(const QString& arg, args)
    {
        if (arg == "--delay" || arg == "-D") {
            found = true;
            break;
        }
    }

    if (!found)
        args.push_back("--delay");

    QProcess::startDetached(QApplication::applicationFilePath(), args);
    QCoreApplication::quit();
}

void RayaFileApplet::initLog()
{
    if (applet_log_init(toCStr(configurator_->ccnetDir())) < 0) {
        errorAndExit(tr("Failed to initialize log: %s").arg(g_strerror(errno)));
    } else {
        QString debug_level = qgetenv("SEAFILE_CLIENT_DEBUG");
        if (!debug_level.isEmpty() && debug_level != "false" && debug_level != "0")
            seafile_client_debug_level = DEBUG;

        if (seafile_client_debug_level == DEBUG)
            qInstallMessageHandler(myLogHandlerDebug);
        else
            qInstallMessageHandler(myLogHandler);
    }
}

bool RayaFileApplet::loadQss(const QString& path)
{
    QFile file(path);
    if (!QFileInfo(file).exists()) {
        return false;
    }
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream input(&file);
    style_ += "\n";
    style_ += input.readAll();
    qApp->setStyleSheet(style_);

    return true;
}

void RayaFileApplet::refreshQss()
{
    style_.clear();
    loadQss("qt.css") || loadQss(":/qt.css");

#if defined(Q_OS_WIN32)
    loadQss("qt-win.css") || loadQss(":/qt-win.css");
#elif defined(Q_OS_LINUX)
    loadQss("qt-linux.css") || loadQss(":/qt-linux.css");
#else
    loadQss("qt-mac.css") || loadQss(":/qt-mac.css");
#endif
}

void RayaFileApplet::warningBox(const QString& msg, QWidget *parent)
{
    QMessageBox box(parent ? parent : main_win_);
    box.setText(msg);
    box.setWindowTitle(getBrand());
    box.setIcon(QMessageBox::Warning);
    box.addButton(tr("OK"), QMessageBox::YesRole);
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();

    if (!parent && main_win_) {
        main_win_->showWindow();
    }
    qWarning("%s", msg.toUtf8().data());
}

void RayaFileApplet::messageBox(const QString& msg, QWidget *parent)
{
    QMessageBox box(parent ? parent : main_win_);
    box.setText(msg);
    box.setWindowTitle(getBrand());
    box.setIcon(QMessageBox::Information);
    box.addButton(tr("OK"), QMessageBox::YesRole);
    if (!parent) {
        main_win_->showWindow();
    }
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();
    qDebug("%s", msg.toUtf8().data());
}

bool RayaFileApplet::yesOrNoBox(const QString& msg, QWidget *parent, bool default_val)
{
    QMessageBox box(parent ? parent : main_win_);
    box.setText(msg);
    box.setWindowTitle(getBrand());
    box.setIcon(QMessageBox::Question);
    QPushButton *yes_btn = box.addButton(tr("Yes"), QMessageBox::YesRole);
    QPushButton *no_btn = box.addButton(tr("No"), QMessageBox::NoRole);
    box.setDefaultButton(default_val ? yes_btn : no_btn);
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();

    return box.clickedButton() == yes_btn;
}

bool RayaFileApplet::yesOrCancelBox(const QString& msg, QWidget *parent, bool default_yes)
{
    QMessageBox box(parent ? parent : main_win_);
    box.setText(msg);
    box.setWindowTitle(getBrand());
    box.setIcon(QMessageBox::Question);
    QPushButton *yes_btn = box.addButton(tr("Yes"), QMessageBox::YesRole);
    QPushButton *cancel_btn = box.addButton(tr("Cancel"), QMessageBox::RejectRole);
    box.setDefaultButton(default_yes ? yes_btn : cancel_btn);
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();

    return box.clickedButton() == yes_btn;
}

QMessageBox::StandardButton
RayaFileApplet::yesNoCancelBox(const QString& msg, QWidget *parent, QMessageBox::StandardButton default_btn)
{
    QMessageBox box(parent ? parent : main_win_);
    box.setText(msg);
    box.setWindowTitle(getBrand());
    box.setIcon(QMessageBox::Question);
    QPushButton *yes_btn = box.addButton(tr("Yes"), QMessageBox::YesRole);
    QPushButton *no_btn = box.addButton(tr("No"), QMessageBox::NoRole);
    box.addButton(tr("Cancel"), QMessageBox::RejectRole);
    box.setDefaultButton(default_btn);
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();

    QAbstractButton *btn = box.clickedButton();
    if (btn == yes_btn) {
        return QMessageBox::Yes;
    } else if (btn == no_btn) {
        return QMessageBox::No;
    }

    return QMessageBox::Cancel;
}

bool RayaFileApplet::detailedYesOrNoBox(const QString& msg, const QString& detailed_text, QWidget *parent, bool default_val)
{
    QMessageBox msgBox(QMessageBox::Question,
                       getBrand(),
                       msg,
                       QMessageBox::Yes | QMessageBox::No,
                       parent != 0 ? parent : main_win_);
    msgBox.setDetailedText(detailed_text);
    msgBox.setButtonText(QMessageBox::Yes, tr("Yes"));
    msgBox.setButtonText(QMessageBox::No, tr("No"));
    QSpacerItem* horizontalSpacer = new QSpacerItem(400, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QGridLayout* layout = (QGridLayout*)msgBox.layout();
    layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
    msgBox.setDefaultButton(default_val ? QMessageBox::Yes : QMessageBox::No);
    msgBox.setFocusPolicy(Qt::ClickFocus);
    return msgBox.exec() == QMessageBox::Yes;
}

bool RayaFileApplet::deletingConfirmationBox(const QString& text, const QString& info)
{
    QMessageBox box(main_win_);
    box.setText(text);
    box.setInformativeText(info);
    box.setIcon(QMessageBox::Question);
    box.setWindowFlags((box.windowFlags() & ~Qt::WindowCloseButtonHint) | Qt::CustomizeWindowHint);
    auto yesButton = box.addButton(tr("Yes"), QMessageBox::YesRole);
    auto noButton = box.addButton(tr("No"), QMessageBox::NoRole);
    auto settingsButton = box.addButton(tr("Settings"), QMessageBox::NoRole);
    box.setDefaultButton(noButton);
    box.setFocusPolicy(Qt::ClickFocus);
    box.exec();

    if (box.clickedButton() == yesButton) {
        return true;
    } else if (box.clickedButton() == noButton) {
        return false;
    } else if (box.clickedButton() == settingsButton) {
        settings_dialog_->setCurrentTab(1);
        settings_dialog_->show();
        settings_dialog_->raise();
        settings_dialog_->activateWindow();
        return false;
    }

    return false;
}

void RayaFileApplet::updateReposPropertyForHttpSync()
{
    std::vector<LocalRepo> repos;
    if (rpc_client_->listLocalRepos(&repos) < 0) {
        QTimer::singleShot(kIntervalForUpdateRepoProperty,
                           this, SLOT(updateReposPropertyForHttpSync()));
        return;
    }

    const std::vector<Account>& accounts = account_mgr_->accounts();
    for (size_t i = 0; i < repos.size(); i++) {
        const LocalRepo& repo = repos[i];
        QString repo_server_url;
        QString server_url;
        if (rpc_client_->getRepoProperty(repo.id, kRepoServerUrlProperty, &repo_server_url) < 0) {
            continue;
        }
        if (!repo_server_url.isEmpty()) {
            continue;
        }
        if (rpc_client_->getRepoProperty(repo.id, kRepoServerUrlProperty, &server_url) < 0) {
            continue;
        }

        QString server_host = QUrl(server_url).host();
        for (size_t i = 0; i < accounts.size(); i++) {
            const Account& account = accounts[i];
            if (account.serverUrl.host() == server_host) {
                QUrl url(account.serverUrl);
                url.setPath("/");
                rpc_client_->setRepoProperty(repo.id, kRepoServerUrlProperty, url.toString());
                break;
            }
        }
    }
}

QVariant RayaFileApplet::readPreconfigureEntry(const QString& key, const QVariant& default_value)
{
#ifdef Q_OS_WIN32
    QVariant v = RegElement::getPreconfigureValue(key);
    if (!v.isNull()) {
        return v;
    }
#endif
    QString configure_file = QDir::home().filePath(kSeafileConfigureFileName);
    if (!QFileInfo(configure_file).exists())
        return default_value;
    QSettings setting(configure_file, QSettings::IniFormat);
    setting.beginGroup(kSeafilePreconfigureGroupName);
    QVariant value = setting.value(key, default_value);
    setting.endGroup();
    return value;
}

QString RayaFileApplet::readPreconfigureExpandedString(const QString& key, const QVariant& default_value)
{
    QVariant retval = readPreconfigureEntry(key, default_value);
    if (retval.isNull() || retval.type() != QVariant::String)
        return QString();
    return expandVars(retval.toString());
}

QString RayaFileApplet::getText(QWidget *parent,
                                const QString &title,
                                const QString &label,
                                QLineEdit::EchoMode mode,
                                const QString &text,
                                bool *ok,
                                Qt::WindowFlags flags,
                                Qt::InputMethodHints inputMethodHints)
{
    QInputDialog tmp_dialog;
    if (flags == 0) {
        flags = tmp_dialog.windowFlags() & ~Qt::WindowContextHelpButtonHint;
    }

    return QInputDialog::getText(parent != nullptr ? parent : main_win_,
                                 title,
                                 label,
                                 mode,
                                 text,
                                 ok,
                                 flags,
                                 inputMethodHints);
}

QString RayaFileApplet::getUniqueClientId()
{
    static QString id;
    if (!id.isEmpty()) {
        return id;
    }

    QFile id_file(QDir(rayafileApp->configurator()->seafileDir()).absoluteFilePath("id"));
    if (!id_file.exists()) {
        qWarning("id file not found, creating it");
        QString ccnet_conf_file = QDir(configurator_->ccnetDir()).absoluteFilePath("ccnet.conf");
        QString ccnet_id;
        if (QFile(ccnet_conf_file).exists()) {
            QSettings ccnet_conf(ccnet_conf_file, QSettings::IniFormat);
            ccnet_id = ccnet_conf.value("ID").toString();
            if (ccnet_id.isEmpty()) {
                ccnet_conf.beginGroup("General");
                ccnet_id = ccnet_conf.value("ID", "").toString();
            }
        }

        if (!ccnet_id.isEmpty()) {
            id = ccnet_id;
            qWarning("use existing ccnet id %s", toCStr(id));
        } else {
            srand(time(NULL));
            while (id.length() < 40) {
                int r = rand() % 0xff;
                id += QString("%1").arg(r, 0, 16);
            }
            id = id.mid(0, 40);
            qWarning("generated new device id %s", toCStr(id));
        }

        if (!id_file.open(QIODevice::WriteOnly)) {
            errorAndExit(tr("failed to save client id"));
            return "";
        }

        id_file.write(id.toUtf8().data());
        return id;
    }

    if (!id_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        errorAndExit(tr("failed to access %1").arg(id_file.fileName()));
        return "";
    }

    QTextStream input(&id_file);
#if (QT_VERSION >= QT_VERSION_CHECK(6,0,0))
    input.setEncoding(QStringConverter::Utf8);
#else
    input.setCodec("UTF-8");
#endif

    if (input.atEnd()) {
        errorAndExit(tr("incorrect client id"));
        return "";
    }

    id = input.readLine().trimmed();
    if (id.length() != 40) {
        errorAndExit(tr("failed to read %1").arg(id_file.fileName()));
        return "";
    }

    qWarning("read id from id file");
    return id;
}

void RayaFileApplet::onDaemonRestarted()
{
    qDebug("reviving rpc client when daemon is restarted");
    if (rpc_client_) {
        delete rpc_client_;
    }

    rpc_client_ = new SeafileRpcClient();
    rpc_client_->tryConnectDaemon();
}