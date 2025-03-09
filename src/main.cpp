#include <getopt.h>
#include <glib-object.h>
#include <cstdio>

// Qt Libraries
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QDebug>
#include <QDir>
#include <QMessageBox>
#include <QtGlobal>

// Local Headers
#include "i18n.h"
#include "crash-handler.h"
#include "utils/utils.h"
#include "utils/paint-utils.h"
#include "utils/process.h"
#include "utils/uninstall-helpers.h"
#include "ui/proxy-style.h"
#include "rayafile.h"
#include "QtAwesome.h"
#include "open-local-helper.h"

#if defined(Q_OS_WIN32)
#include "utils/utils-win.h"
#endif

#if defined(Q_OS_MAC)
#include "application.h"
#endif

#define APPNAME "seafile-applet"

namespace {
    // Initialize GLib
    void initGlib() {
#if !GLIB_CHECK_VERSION(2, 35, 0)
        g_type_init();
#endif
#if !GLIB_CHECK_VERSION(2, 31, 0)
        g_thread_init(NULL);
#endif
    }

    // Initialize Breakpad for crash reporting (Windows only)
#if defined(Q_OS_WIN32)
    void initBreakpad() {
#ifdef SEAFILE_CLIENT_HAS_CRASH_REPORTER
        Breakpad::CrashHandler::instance()->Init(QDir(defaultCcnetDir()).absoluteFilePath("crash-applet"));
#endif
    }
#endif

    // Fix HiDPI scaling issues
    void setupHIDPIFix() {
        qApp->setAttribute(Qt::AA_UseHighDpiPixmaps);
#if defined(Q_OS_WIN32)
        if (!utils::win::fixQtHDPINonIntegerScaling()) {
            qApp->setAttribute(Qt::AA_EnableHighDpiScaling);
        }
#elif !defined(Q_OS_MAC)
        qApp->setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    }

    // Setup application settings domain
    void setupSettingDomain() {
        QCoreApplication::setOrganizationName(getBrand());
        QCoreApplication::setOrganizationDomain("seafile.com");
        QCoreApplication::setApplicationName(QString("%1 Client").arg(getBrand()));
    }

    // Handle command-line options
    void handleCommandLineOption(int argc, char *argv[]) {
        int c;
        static const char *short_options = "KDXPc:d:f:";
        static const struct option long_options[] = {
            { "config-dir", required_argument, NULL, 'c' },
            { "data-dir", required_argument, NULL, 'd' },
            { "stop", no_argument, NULL, 'K' },
            { "delay", no_argument, NULL, 'D' },
            { "remove-user-data", no_argument, NULL, 'X' },
            { "open-local-file", no_argument, NULL, 'f' },
            { "stdout", no_argument, NULL, 'l' },
            { "ping", no_argument, NULL, 'P' },
            { NULL, 0, NULL, 0, },
        };

        while ((c = getopt_long(argc, argv, short_options, long_options, NULL)) != EOF) {
            switch (c) {
                case 'c':
                    g_setenv("CCNET_CONF_DIR", optarg, 1);
                    break;
                case 'd':
                    g_setenv("SEAFILE_DATA_DIR", optarg, 1);
                    break;
                case 'l':
                    g_setenv("LOG_STDOUT", "", 1);
                    break;
                case 'K':
                    do_stop();
                    exit(0);
                case 'P':
                    do_ping();
                    exit(0);
                case 'D':
                    msleep(1000);
                    break;
                case 'X':
                    do_remove_user_data();
                    exit(0);
                case 'f':
                    OpenLocalHelper::instance()->handleOpenLocalFromCommandLine(optarg);
                    break;
#if defined(HAVE_SPARKLE_SUPPORT) && defined(WINSPARKLE_DEBUG)
                case 'U':
                    g_setenv("SEAFILE_CLIENT_APPCAST_URI", optarg, 1);
                    break;
#endif
                default:
                    exit(1);
            }
        }
    }
}

int main(int argc, char *argv[]) {
    int ret = 0;

    // Initialize GLib
    initGlib();

    // Initialize Breakpad on Windows
#if defined(Q_OS_WIN32)
    initBreakpad();
#endif

    // Apply HiDPI fixes
    setupHIDPIFix();

    // Set library path for Windows
#if defined(Q_OS_WIN32)
    QCoreApplication::addLibraryPath(".\\");
#endif

    // Create QApplication instance
#if defined(Q_OS_MAC)
    Application app(argc, argv);
#else
    QApplication app(argc, argv);

    // Set Persian locale and RTL layout direction
    QLocale::setDefault(QLocale(QLocale::Persian, QLocale::Iran));
    app.setLayoutDirection(Qt::RightToLeft);
#endif

    // Prevent quitting when the last window is closed
    app.setQuitOnLastWindowClosed(false);

    // Setup application settings domain
    setupSettingDomain();

    // Load Persian translation
    QString translationPath = "/usr/share/seafile-client/i18n/seafile_fa.qm";
    QTranslator translator;
    if (translator.load(translationPath)) {
        qDebug() << "Persian translation loaded successfully from:" << translationPath;
        app.installTranslator(&translator);
    } else {
        qWarning() << "Failed to load Persian translation. Path:" << translationPath;
        qWarning() << "Check file path and permissions.";
    }

    // Initialize internationalization helper
    I18NHelper::getInstance()->init();

    // Apply custom style
    app.setStyle(new SeafileProxyStyle());

    // Initialize the main application object
    RayaFileApplet mApplet;
    rayafileApp = &mApplet;

    // Handle command-line options
    handleCommandLineOption(argc, argv);

    // Check if another instance of the application is running
    if (count_process(APPNAME) > 1) {
        if (OpenLocalHelper::instance()->activateRunningInstance()) {
            printf("Activated running instance of seafile client\n");
            return 0;
        }
        QMessageBox::warning(nullptr, getBrand(), QObject::tr("%1 Client is already running").arg(getBrand()), QMessageBox::Ok);
        return -1;
    }

    // Initialize QtAwesome for font icons
    awesome = new QtAwesome(qApp);
    awesome->initFontAwesome();

    // Start the application
    mApplet.start();

    // Execute the application event loop
    ret = app.exec();

    return ret;
}