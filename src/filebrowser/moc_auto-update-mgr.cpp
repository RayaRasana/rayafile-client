/****************************************************************************
** Meta object code from reading C++ file 'auto-update-mgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "auto-update-mgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'auto-update-mgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoUpdateManager_t {
    QByteArrayData data[19];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoUpdateManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoUpdateManager_t qt_meta_stringdata_AutoUpdateManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AutoUpdateManager"
QT_MOC_LITERAL(1, 18, 11), // "fileUpdated"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "repo_id"
QT_MOC_LITERAL(4, 39, 4), // "path"
QT_MOC_LITERAL(5, 44, 13), // "onFileChanged"
QT_MOC_LITERAL(6, 58, 20), // "onUpdateTaskFinished"
QT_MOC_LITERAL(7, 79, 7), // "success"
QT_MOC_LITERAL(8, 87, 15), // "onGetRepoFailed"
QT_MOC_LITERAL(9, 103, 8), // "ApiError"
QT_MOC_LITERAL(10, 112, 5), // "error"
QT_MOC_LITERAL(11, 118, 16), // "onGetRepoSuccess"
QT_MOC_LITERAL(12, 135, 10), // "ServerRepo"
QT_MOC_LITERAL(13, 146, 4), // "repo"
QT_MOC_LITERAL(14, 151, 3), // "sig"
QT_MOC_LITERAL(15, 155, 7), // "file_id"
QT_MOC_LITERAL(16, 163, 10), // "local_path"
QT_MOC_LITERAL(17, 174, 18), // "checkFileRecreated"
QT_MOC_LITERAL(18, 193, 14) // "systemShutDown"

    },
    "AutoUpdateManager\0fileUpdated\0\0repo_id\0"
    "path\0onFileChanged\0onUpdateTaskFinished\0"
    "success\0onGetRepoFailed\0ApiError\0error\0"
    "onGetRepoSuccess\0ServerRepo\0repo\0sig\0"
    "file_id\0local_path\0checkFileRecreated\0"
    "systemShutDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoUpdateManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x08 /* Private */,
       6,    1,   57,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    6,   63,    2, 0x08 /* Private */,
      17,    0,   76,    2, 0x08 /* Private */,
      18,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,    3,    4,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoUpdateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoUpdateManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onUpdateTaskFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onGetRepoFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 4: _t->onGetRepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 5: _t->checkFileRecreated(); break;
        case 6: _t->systemShutDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutoUpdateManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoUpdateManager::fileUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoUpdateManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AutoUpdateManager.data,
    qt_meta_data_AutoUpdateManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoUpdateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoUpdateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoUpdateManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoUpdateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AutoUpdateManager::fileUpdated(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CachedFilesCleaner_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CachedFilesCleaner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CachedFilesCleaner_t qt_meta_stringdata_CachedFilesCleaner = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CachedFilesCleaner"

    },
    "CachedFilesCleaner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CachedFilesCleaner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CachedFilesCleaner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CachedFilesCleaner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CachedFilesCleaner.data,
    qt_meta_data_CachedFilesCleaner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CachedFilesCleaner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CachedFilesCleaner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CachedFilesCleaner.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int CachedFilesCleaner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
