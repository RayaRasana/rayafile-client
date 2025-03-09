/****************************************************************************
** Meta object code from reading C++ file 'repo-service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "repo-service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repo-service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RepoService_t {
    QByteArrayData data[18];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RepoService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RepoService_t qt_meta_stringdata_RepoService = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RepoService"
QT_MOC_LITERAL(1, 12, 14), // "refreshSuccess"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "std::vector<ServerRepo>"
QT_MOC_LITERAL(4, 52, 5), // "repos"
QT_MOC_LITERAL(5, 58, 13), // "refreshFailed"
QT_MOC_LITERAL(6, 72, 8), // "ApiError"
QT_MOC_LITERAL(7, 81, 5), // "error"
QT_MOC_LITERAL(8, 87, 7), // "refresh"
QT_MOC_LITERAL(9, 95, 16), // "onRefreshSuccess"
QT_MOC_LITERAL(10, 112, 15), // "onRefreshFailed"
QT_MOC_LITERAL(11, 128, 19), // "onGetRequestSuccess"
QT_MOC_LITERAL(12, 148, 10), // "ServerRepo"
QT_MOC_LITERAL(13, 159, 4), // "repo"
QT_MOC_LITERAL(14, 164, 18), // "onGetRequestFailed"
QT_MOC_LITERAL(15, 183, 11), // "onWiperDone"
QT_MOC_LITERAL(16, 195, 25), // "onRemoteWipeReportSuccess"
QT_MOC_LITERAL(17, 221, 24) // "onRemoteWipeReportFailed"

    },
    "RepoService\0refreshSuccess\0\0"
    "std::vector<ServerRepo>\0repos\0"
    "refreshFailed\0ApiError\0error\0refresh\0"
    "onRefreshSuccess\0onRefreshFailed\0"
    "onGetRequestSuccess\0ServerRepo\0repo\0"
    "onGetRequestFailed\0onWiperDone\0"
    "onRemoteWipeReportSuccess\0"
    "onRemoteWipeReportFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RepoService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void RepoService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RepoService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshSuccess((*reinterpret_cast< const std::vector<ServerRepo>(*)>(_a[1]))); break;
        case 1: _t->refreshFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->onRefreshSuccess((*reinterpret_cast< const std::vector<ServerRepo>(*)>(_a[1]))); break;
        case 4: _t->onRefreshFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 5: _t->onGetRequestSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1]))); break;
        case 6: _t->onGetRequestFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 7: _t->onWiperDone(); break;
        case 8: _t->onRemoteWipeReportSuccess(); break;
        case 9: _t->onRemoteWipeReportFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ServerRepo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RepoService::*)(const std::vector<ServerRepo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RepoService::refreshSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RepoService::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RepoService::refreshFailed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RepoService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RepoService.data,
    qt_meta_data_RepoService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RepoService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RepoService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RepoService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RepoService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void RepoService::refreshSuccess(const std::vector<ServerRepo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RepoService::refreshFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WipeFilesThread_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WipeFilesThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WipeFilesThread_t qt_meta_stringdata_WipeFilesThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WipeFilesThread"
QT_MOC_LITERAL(1, 16, 4), // "done"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "WipeFilesThread\0done\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WipeFilesThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WipeFilesThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WipeFilesThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->done(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WipeFilesThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WipeFilesThread::done)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WipeFilesThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WipeFilesThread.data,
    qt_meta_data_WipeFilesThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WipeFilesThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WipeFilesThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WipeFilesThread.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int WipeFilesThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WipeFilesThread::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
