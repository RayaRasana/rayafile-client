/****************************************************************************
** Meta object code from reading C++ file 'daemon-mgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "daemon-mgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daemon-mgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DaemonManager_t {
    QByteArrayData data[13];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DaemonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DaemonManager_t qt_meta_stringdata_DaemonManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DaemonManager"
QT_MOC_LITERAL(1, 14, 13), // "daemonStarted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "daemonDead"
QT_MOC_LITERAL(4, 40, 15), // "daemonRestarted"
QT_MOC_LITERAL(5, 56, 15), // "onDaemonStarted"
QT_MOC_LITERAL(6, 72, 16), // "onDaemonFinished"
QT_MOC_LITERAL(7, 89, 9), // "exit_code"
QT_MOC_LITERAL(8, 99, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 120, 11), // "exit_status"
QT_MOC_LITERAL(10, 132, 14), // "systemShutDown"
QT_MOC_LITERAL(11, 147, 16), // "checkDaemonReady"
QT_MOC_LITERAL(12, 164, 20) // "restartSeafileDaemon"

    },
    "DaemonManager\0daemonStarted\0\0daemonDead\0"
    "daemonRestarted\0onDaemonStarted\0"
    "onDaemonFinished\0exit_code\0"
    "QProcess::ExitStatus\0exit_status\0"
    "systemShutDown\0checkDaemonReady\0"
    "restartSeafileDaemon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DaemonManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    2,   58,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DaemonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DaemonManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->daemonStarted(); break;
        case 1: _t->daemonDead(); break;
        case 2: _t->daemonRestarted(); break;
        case 3: _t->onDaemonStarted(); break;
        case 4: _t->onDaemonFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 5: _t->systemShutDown(); break;
        case 6: _t->checkDaemonReady(); break;
        case 7: _t->restartSeafileDaemon(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DaemonManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DaemonManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonDead)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DaemonManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DaemonManager::daemonRestarted)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DaemonManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DaemonManager.data,
    qt_meta_data_DaemonManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DaemonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DaemonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DaemonManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DaemonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DaemonManager::daemonStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DaemonManager::daemonDead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DaemonManager::daemonRestarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
