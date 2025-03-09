/****************************************************************************
** Meta object code from reading C++ file 'requests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "requests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'requests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PingServerRequest_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PingServerRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PingServerRequest_t qt_meta_stringdata_PingServerRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PingServerRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 42, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 57, 5) // "reply"

    },
    "PingServerRequest\0success\0\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PingServerRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void PingServerRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PingServerRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PingServerRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PingServerRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PingServerRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_PingServerRequest.data,
    qt_meta_data_PingServerRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PingServerRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PingServerRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PingServerRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int PingServerRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PingServerRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LoginRequest_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginRequest_t qt_meta_stringdata_LoginRequest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LoginRequest"
QT_MOC_LITERAL(1, 13, 7), // "success"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "token"
QT_MOC_LITERAL(4, 28, 10), // "s2fa_token"
QT_MOC_LITERAL(5, 39, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 54, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 69, 5) // "reply"

    },
    "LoginRequest\0success\0\0token\0s2fa_token\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void LoginRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginRequest::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_LoginRequest.data,
    qt_meta_data_LoginRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int LoginRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LoginRequest::success(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ListReposRequest_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListReposRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListReposRequest_t qt_meta_stringdata_ListReposRequest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ListReposRequest"
QT_MOC_LITERAL(1, 17, 7), // "success"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 23), // "std::vector<ServerRepo>"
QT_MOC_LITERAL(4, 50, 5), // "repos"
QT_MOC_LITERAL(5, 56, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 71, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 86, 5) // "reply"

    },
    "ListReposRequest\0success\0\0"
    "std::vector<ServerRepo>\0repos\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListReposRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ListReposRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListReposRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<ServerRepo>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListReposRequest::*)(const std::vector<ServerRepo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListReposRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ListReposRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_ListReposRequest.data,
    qt_meta_data_ListReposRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ListReposRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListReposRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListReposRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int ListReposRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ListReposRequest::success(const std::vector<ServerRepo> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DownloadRepoRequest_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadRepoRequest_t qt_meta_stringdata_DownloadRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DownloadRepoRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "RepoDownloadInfo"
QT_MOC_LITERAL(4, 46, 4), // "info"
QT_MOC_LITERAL(5, 51, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 66, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 81, 5) // "reply"

    },
    "DownloadRepoRequest\0success\0\0"
    "RepoDownloadInfo\0info\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void DownloadRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const RepoDownloadInfo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DownloadRepoRequest::*)(const RepoDownloadInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DownloadRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DownloadRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_DownloadRepoRequest.data,
    qt_meta_data_DownloadRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DownloadRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int DownloadRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void DownloadRepoRequest::success(const RepoDownloadInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetRepoRequest_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetRepoRequest_t qt_meta_stringdata_GetRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GetRepoRequest"
QT_MOC_LITERAL(1, 15, 7), // "success"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "ServerRepo"
QT_MOC_LITERAL(4, 35, 4), // "repo"
QT_MOC_LITERAL(5, 40, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 55, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 70, 5) // "reply"

    },
    "GetRepoRequest\0success\0\0ServerRepo\0"
    "repo\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const ServerRepo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetRepoRequest::*)(const ServerRepo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetRepoRequest.data,
    qt_meta_data_GetRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetRepoRequest::success(const ServerRepo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateRepoRequest_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateRepoRequest_t qt_meta_stringdata_CreateRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CreateRepoRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "RepoDownloadInfo"
QT_MOC_LITERAL(4, 44, 4), // "info"
QT_MOC_LITERAL(5, 49, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 64, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 79, 5) // "reply"

    },
    "CreateRepoRequest\0success\0\0RepoDownloadInfo\0"
    "info\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void CreateRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const RepoDownloadInfo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateRepoRequest::*)(const RepoDownloadInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateRepoRequest.data,
    qt_meta_data_CreateRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CreateRepoRequest::success(const RepoDownloadInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateSubrepoRequest_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateSubrepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateSubrepoRequest_t qt_meta_stringdata_CreateSubrepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CreateSubrepoRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "sub_repoid"
QT_MOC_LITERAL(4, 41, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 56, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 71, 5) // "reply"

    },
    "CreateSubrepoRequest\0success\0\0sub_repoid\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateSubrepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void CreateSubrepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateSubrepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateSubrepoRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateSubrepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateSubrepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateSubrepoRequest.data,
    qt_meta_data_CreateSubrepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateSubrepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateSubrepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateSubrepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateSubrepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CreateSubrepoRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetUnseenSeahubNotificationsRequest_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetUnseenSeahubNotificationsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetUnseenSeahubNotificationsRequest_t qt_meta_stringdata_GetUnseenSeahubNotificationsRequest = {
    {
QT_MOC_LITERAL(0, 0, 35), // "GetUnseenSeahubNotificationsR..."
QT_MOC_LITERAL(1, 36, 7), // "success"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 5), // "count"
QT_MOC_LITERAL(4, 51, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 66, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 81, 5) // "reply"

    },
    "GetUnseenSeahubNotificationsRequest\0"
    "success\0\0count\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetUnseenSeahubNotificationsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void GetUnseenSeahubNotificationsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetUnseenSeahubNotificationsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetUnseenSeahubNotificationsRequest::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetUnseenSeahubNotificationsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetUnseenSeahubNotificationsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetUnseenSeahubNotificationsRequest.data,
    qt_meta_data_GetUnseenSeahubNotificationsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetUnseenSeahubNotificationsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetUnseenSeahubNotificationsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetUnseenSeahubNotificationsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetUnseenSeahubNotificationsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetUnseenSeahubNotificationsRequest::success(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetDefaultRepoRequest_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetDefaultRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetDefaultRepoRequest_t qt_meta_stringdata_GetDefaultRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 21), // "GetDefaultRepoRequest"
QT_MOC_LITERAL(1, 22, 7), // "success"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "exists"
QT_MOC_LITERAL(4, 38, 7), // "repo_id"
QT_MOC_LITERAL(5, 46, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 61, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 76, 5) // "reply"

    },
    "GetDefaultRepoRequest\0success\0\0exists\0"
    "repo_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetDefaultRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetDefaultRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetDefaultRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetDefaultRepoRequest::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetDefaultRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetDefaultRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetDefaultRepoRequest.data,
    qt_meta_data_GetDefaultRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetDefaultRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetDefaultRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetDefaultRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetDefaultRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetDefaultRepoRequest::success(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateDefaultRepoRequest_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateDefaultRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateDefaultRepoRequest_t qt_meta_stringdata_CreateDefaultRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CreateDefaultRepoRequest"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "repo_id"
QT_MOC_LITERAL(4, 42, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 57, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 72, 5) // "reply"

    },
    "CreateDefaultRepoRequest\0success\0\0"
    "repo_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateDefaultRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void CreateDefaultRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateDefaultRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateDefaultRepoRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateDefaultRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateDefaultRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateDefaultRepoRequest.data,
    qt_meta_data_CreateDefaultRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateDefaultRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateDefaultRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateDefaultRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateDefaultRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CreateDefaultRepoRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetStarredFilesRequest_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetStarredFilesRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetStarredFilesRequest_t qt_meta_stringdata_GetStarredFilesRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GetStarredFilesRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "std::vector<StarredItem>"
QT_MOC_LITERAL(4, 57, 13), // "starred_files"
QT_MOC_LITERAL(5, 71, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 86, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 101, 5) // "reply"

    },
    "GetStarredFilesRequest\0success\0\0"
    "std::vector<StarredItem>\0starred_files\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetStarredFilesRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetStarredFilesRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetStarredFilesRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<StarredItem>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetStarredFilesRequest::*)(const std::vector<StarredItem> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetStarredFilesRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetStarredFilesRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetStarredFilesRequest.data,
    qt_meta_data_GetStarredFilesRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetStarredFilesRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetStarredFilesRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetStarredFilesRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetStarredFilesRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetStarredFilesRequest::success(const std::vector<StarredItem> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetStarredFilesRequestV2_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetStarredFilesRequestV2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetStarredFilesRequestV2_t qt_meta_stringdata_GetStarredFilesRequestV2 = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GetStarredFilesRequestV2"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "std::vector<StarredItem>"
QT_MOC_LITERAL(4, 59, 13), // "starred_files"
QT_MOC_LITERAL(5, 73, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 88, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 103, 5) // "reply"

    },
    "GetStarredFilesRequestV2\0success\0\0"
    "std::vector<StarredItem>\0starred_files\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetStarredFilesRequestV2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetStarredFilesRequestV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetStarredFilesRequestV2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<StarredItem>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetStarredFilesRequestV2::*)(const std::vector<StarredItem> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetStarredFilesRequestV2::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetStarredFilesRequestV2::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetStarredFilesRequestV2.data,
    qt_meta_data_GetStarredFilesRequestV2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetStarredFilesRequestV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetStarredFilesRequestV2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetStarredFilesRequestV2.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetStarredFilesRequestV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetStarredFilesRequestV2::success(const std::vector<StarredItem> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetEventsRequest_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetEventsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetEventsRequest_t qt_meta_stringdata_GetEventsRequest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GetEventsRequest"
QT_MOC_LITERAL(1, 17, 7), // "success"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 22), // "std::vector<SeafEvent>"
QT_MOC_LITERAL(4, 49, 6), // "events"
QT_MOC_LITERAL(5, 56, 11), // "more_offset"
QT_MOC_LITERAL(6, 68, 14), // "requestSuccess"
QT_MOC_LITERAL(7, 83, 14), // "QNetworkReply&"
QT_MOC_LITERAL(8, 98, 5) // "reply"

    },
    "GetEventsRequest\0success\0\0"
    "std::vector<SeafEvent>\0events\0more_offset\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetEventsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void GetEventsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetEventsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetEventsRequest::*)(const std::vector<SeafEvent> & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetEventsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetEventsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetEventsRequest.data,
    qt_meta_data_GetEventsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetEventsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetEventsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetEventsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetEventsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetEventsRequest::success(const std::vector<SeafEvent> & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetEventsRequestV2_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetEventsRequestV2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetEventsRequestV2_t qt_meta_stringdata_GetEventsRequestV2 = {
    {
QT_MOC_LITERAL(0, 0, 18), // "GetEventsRequestV2"
QT_MOC_LITERAL(1, 19, 7), // "success"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 22), // "std::vector<SeafEvent>"
QT_MOC_LITERAL(4, 51, 6), // "events"
QT_MOC_LITERAL(5, 58, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 73, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 88, 5) // "reply"

    },
    "GetEventsRequestV2\0success\0\0"
    "std::vector<SeafEvent>\0events\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetEventsRequestV2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetEventsRequestV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetEventsRequestV2 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetEventsRequestV2::*)(const std::vector<SeafEvent> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetEventsRequestV2::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetEventsRequestV2::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetEventsRequestV2.data,
    qt_meta_data_GetEventsRequestV2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetEventsRequestV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetEventsRequestV2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetEventsRequestV2.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetEventsRequestV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetEventsRequestV2::success(const std::vector<SeafEvent> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetCommitDetailsRequest_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetCommitDetailsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetCommitDetailsRequest_t qt_meta_stringdata_GetCommitDetailsRequest = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GetCommitDetailsRequest"
QT_MOC_LITERAL(1, 24, 7), // "success"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "CommitDetails"
QT_MOC_LITERAL(4, 47, 6), // "result"
QT_MOC_LITERAL(5, 54, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 69, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 84, 5) // "reply"

    },
    "GetCommitDetailsRequest\0success\0\0"
    "CommitDetails\0result\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetCommitDetailsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetCommitDetailsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetCommitDetailsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const CommitDetails(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetCommitDetailsRequest::*)(const CommitDetails & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetCommitDetailsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetCommitDetailsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetCommitDetailsRequest.data,
    qt_meta_data_GetCommitDetailsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetCommitDetailsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetCommitDetailsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetCommitDetailsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetCommitDetailsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetCommitDetailsRequest::success(const CommitDetails & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FetchImageRequest_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchImageRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchImageRequest_t qt_meta_stringdata_FetchImageRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FetchImageRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "avatar"
QT_MOC_LITERAL(4, 34, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 49, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 64, 5) // "reply"

    },
    "FetchImageRequest\0success\0\0avatar\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchImageRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void FetchImageRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchImageRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchImageRequest::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchImageRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchImageRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FetchImageRequest.data,
    qt_meta_data_FetchImageRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchImageRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchImageRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchImageRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FetchImageRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FetchImageRequest::success(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetAvatarRequest_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetAvatarRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetAvatarRequest_t qt_meta_stringdata_GetAvatarRequest = {
    {
QT_MOC_LITERAL(0, 0, 16), // "GetAvatarRequest"
QT_MOC_LITERAL(1, 17, 7), // "success"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "avatar"
QT_MOC_LITERAL(4, 33, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 48, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 63, 5) // "reply"

    },
    "GetAvatarRequest\0success\0\0avatar\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetAvatarRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void GetAvatarRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetAvatarRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetAvatarRequest::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetAvatarRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetAvatarRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetAvatarRequest.data,
    qt_meta_data_GetAvatarRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetAvatarRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetAvatarRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetAvatarRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetAvatarRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetAvatarRequest::success(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SetRepoPasswordRequest_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetRepoPasswordRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetRepoPasswordRequest_t qt_meta_stringdata_SetRepoPasswordRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SetRepoPasswordRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 47, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 62, 5) // "reply"

    },
    "SetRepoPasswordRequest\0success\0\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetRepoPasswordRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void SetRepoPasswordRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetRepoPasswordRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetRepoPasswordRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetRepoPasswordRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SetRepoPasswordRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_SetRepoPasswordRequest.data,
    qt_meta_data_SetRepoPasswordRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetRepoPasswordRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetRepoPasswordRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetRepoPasswordRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int SetRepoPasswordRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SetRepoPasswordRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ServerInfoRequest_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerInfoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerInfoRequest_t qt_meta_stringdata_ServerInfoRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ServerInfoRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "ServerInfo"
QT_MOC_LITERAL(4, 38, 4), // "info"
QT_MOC_LITERAL(5, 43, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 58, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 73, 5) // "reply"

    },
    "ServerInfoRequest\0success\0\0ServerInfo\0"
    "info\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerInfoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ServerInfoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerInfoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const ServerInfo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerInfoRequest::*)(const ServerInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerInfoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerInfoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_ServerInfoRequest.data,
    qt_meta_data_ServerInfoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerInfoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerInfoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerInfoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int ServerInfoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ServerInfoRequest::success(const ServerInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_LogoutDeviceRequest_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogoutDeviceRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogoutDeviceRequest_t qt_meta_stringdata_LogoutDeviceRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LogoutDeviceRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 44, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 59, 5) // "reply"

    },
    "LogoutDeviceRequest\0success\0\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogoutDeviceRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void LogoutDeviceRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogoutDeviceRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogoutDeviceRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogoutDeviceRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogoutDeviceRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_LogoutDeviceRequest.data,
    qt_meta_data_LogoutDeviceRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogoutDeviceRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogoutDeviceRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogoutDeviceRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int LogoutDeviceRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LogoutDeviceRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SingleBatchRepoTokensRequest_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleBatchRepoTokensRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleBatchRepoTokensRequest_t qt_meta_stringdata_SingleBatchRepoTokensRequest = {
    {
QT_MOC_LITERAL(0, 0, 28), // "SingleBatchRepoTokensRequest"
QT_MOC_LITERAL(1, 29, 7), // "success"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 53, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 68, 5) // "reply"

    },
    "SingleBatchRepoTokensRequest\0success\0"
    "\0requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleBatchRepoTokensRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void SingleBatchRepoTokensRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingleBatchRepoTokensRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SingleBatchRepoTokensRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SingleBatchRepoTokensRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SingleBatchRepoTokensRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_SingleBatchRepoTokensRequest.data,
    qt_meta_data_SingleBatchRepoTokensRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SingleBatchRepoTokensRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleBatchRepoTokensRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleBatchRepoTokensRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int SingleBatchRepoTokensRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SingleBatchRepoTokensRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_GetRepoTokensRequest_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetRepoTokensRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetRepoTokensRequest_t qt_meta_stringdata_GetRepoTokensRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GetRepoTokensRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 45, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 60, 5), // "reply"
QT_MOC_LITERAL(6, 66, 12) // "batchSuccess"

    },
    "GetRepoTokensRequest\0success\0\0"
    "requestSuccess\0QNetworkReply&\0reply\0"
    "batchSuccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetRepoTokensRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       6,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

       0        // eod
};

void GetRepoTokensRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetRepoTokensRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        case 2: _t->batchSuccess(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetRepoTokensRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetRepoTokensRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetRepoTokensRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetRepoTokensRequest.data,
    qt_meta_data_GetRepoTokensRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetRepoTokensRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetRepoTokensRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetRepoTokensRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetRepoTokensRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GetRepoTokensRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_GetLoginTokenRequest_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetLoginTokenRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetLoginTokenRequest_t qt_meta_stringdata_GetLoginTokenRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GetLoginTokenRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "token"
QT_MOC_LITERAL(4, 36, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 51, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 66, 5) // "reply"

    },
    "GetLoginTokenRequest\0success\0\0token\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetLoginTokenRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void GetLoginTokenRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetLoginTokenRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetLoginTokenRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetLoginTokenRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetLoginTokenRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetLoginTokenRequest.data,
    qt_meta_data_GetLoginTokenRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetLoginTokenRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetLoginTokenRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetLoginTokenRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetLoginTokenRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetLoginTokenRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FileSearchRequest_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSearchRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSearchRequest_t qt_meta_stringdata_FileSearchRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FileSearchRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 29), // "std::vector<FileSearchResult>"
QT_MOC_LITERAL(4, 57, 6), // "result"
QT_MOC_LITERAL(5, 64, 15), // "is_loading_more"
QT_MOC_LITERAL(6, 80, 8), // "has_more"
QT_MOC_LITERAL(7, 89, 14), // "requestSuccess"
QT_MOC_LITERAL(8, 104, 14), // "QNetworkReply&"
QT_MOC_LITERAL(9, 119, 5) // "reply"

    },
    "FileSearchRequest\0success\0\0"
    "std::vector<FileSearchResult>\0result\0"
    "is_loading_more\0has_more\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSearchRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void FileSearchRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSearchRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const std::vector<FileSearchResult>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSearchRequest::*)(const std::vector<FileSearchResult> & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSearchRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileSearchRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FileSearchRequest.data,
    qt_meta_data_FileSearchRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileSearchRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSearchRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSearchRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FileSearchRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FileSearchRequest::success(const std::vector<FileSearchResult> & _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FetchCustomLogoRequest_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchCustomLogoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchCustomLogoRequest_t qt_meta_stringdata_FetchCustomLogoRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "FetchCustomLogoRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "url"
QT_MOC_LITERAL(4, 36, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 51, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 66, 5) // "reply"

    },
    "FetchCustomLogoRequest\0success\0\0url\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchCustomLogoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void FetchCustomLogoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchCustomLogoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchCustomLogoRequest::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchCustomLogoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchCustomLogoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FetchCustomLogoRequest.data,
    qt_meta_data_FetchCustomLogoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchCustomLogoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchCustomLogoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchCustomLogoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FetchCustomLogoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FetchCustomLogoRequest::success(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FetchAccountInfoRequest_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchAccountInfoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchAccountInfoRequest_t qt_meta_stringdata_FetchAccountInfoRequest = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FetchAccountInfoRequest"
QT_MOC_LITERAL(1, 24, 7), // "success"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "AccountInfo"
QT_MOC_LITERAL(4, 45, 4), // "info"
QT_MOC_LITERAL(5, 50, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 65, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 80, 5) // "reply"

    },
    "FetchAccountInfoRequest\0success\0\0"
    "AccountInfo\0info\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchAccountInfoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void FetchAccountInfoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchAccountInfoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const AccountInfo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchAccountInfoRequest::*)(const AccountInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchAccountInfoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchAccountInfoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FetchAccountInfoRequest.data,
    qt_meta_data_FetchAccountInfoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchAccountInfoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchAccountInfoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchAccountInfoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FetchAccountInfoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FetchAccountInfoRequest::success(const AccountInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PrivateShareRequest_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivateShareRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivateShareRequest_t qt_meta_stringdata_PrivateShareRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PrivateShareRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 44, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 59, 5) // "reply"

    },
    "PrivateShareRequest\0success\0\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivateShareRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void PrivateShareRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrivateShareRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PrivateShareRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PrivateShareRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrivateShareRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_PrivateShareRequest.data,
    qt_meta_data_PrivateShareRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrivateShareRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivateShareRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateShareRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int PrivateShareRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PrivateShareRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_GetPrivateShareItemsRequest_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetPrivateShareItemsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetPrivateShareItemsRequest_t qt_meta_stringdata_GetPrivateShareItemsRequest = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GetPrivateShareItemsRequest"
QT_MOC_LITERAL(1, 28, 7), // "success"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "QList<GroupShareInfo>"
QT_MOC_LITERAL(4, 59, 20), // "QList<UserShareInfo>"
QT_MOC_LITERAL(5, 80, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 95, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 110, 5) // "reply"

    },
    "GetPrivateShareItemsRequest\0success\0"
    "\0QList<GroupShareInfo>\0QList<UserShareInfo>\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetPrivateShareItemsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetPrivateShareItemsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetPrivateShareItemsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QList<GroupShareInfo>(*)>(_a[1])),(*reinterpret_cast< const QList<UserShareInfo>(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<GroupShareInfo> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<UserShareInfo> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetPrivateShareItemsRequest::*)(const QList<GroupShareInfo> & , const QList<UserShareInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetPrivateShareItemsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetPrivateShareItemsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetPrivateShareItemsRequest.data,
    qt_meta_data_GetPrivateShareItemsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetPrivateShareItemsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetPrivateShareItemsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetPrivateShareItemsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetPrivateShareItemsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetPrivateShareItemsRequest::success(const QList<GroupShareInfo> & _t1, const QList<UserShareInfo> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FetchGroupsAndContactsRequest_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchGroupsAndContactsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchGroupsAndContactsRequest_t qt_meta_stringdata_FetchGroupsAndContactsRequest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "FetchGroupsAndContactsRequest"
QT_MOC_LITERAL(1, 30, 7), // "success"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "QList<SeafileGroup>"
QT_MOC_LITERAL(4, 59, 18), // "QList<SeafileUser>"
QT_MOC_LITERAL(5, 78, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 93, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 108, 5) // "reply"

    },
    "FetchGroupsAndContactsRequest\0success\0"
    "\0QList<SeafileGroup>\0QList<SeafileUser>\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchGroupsAndContactsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void FetchGroupsAndContactsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchGroupsAndContactsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QList<SeafileGroup>(*)>(_a[1])),(*reinterpret_cast< const QList<SeafileUser>(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafileGroup> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafileUser> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchGroupsAndContactsRequest::*)(const QList<SeafileGroup> & , const QList<SeafileUser> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchGroupsAndContactsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchGroupsAndContactsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FetchGroupsAndContactsRequest.data,
    qt_meta_data_FetchGroupsAndContactsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchGroupsAndContactsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchGroupsAndContactsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchGroupsAndContactsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FetchGroupsAndContactsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FetchGroupsAndContactsRequest::success(const QList<SeafileGroup> & _t1, const QList<SeafileUser> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RemoteWipeReportRequest_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteWipeReportRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteWipeReportRequest_t qt_meta_stringdata_RemoteWipeReportRequest = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RemoteWipeReportRequest"
QT_MOC_LITERAL(1, 24, 7), // "success"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 48, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 63, 5) // "reply"

    },
    "RemoteWipeReportRequest\0success\0\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteWipeReportRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void RemoteWipeReportRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoteWipeReportRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoteWipeReportRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoteWipeReportRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoteWipeReportRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_RemoteWipeReportRequest.data,
    qt_meta_data_RemoteWipeReportRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoteWipeReportRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteWipeReportRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteWipeReportRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int RemoteWipeReportRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RemoteWipeReportRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SearchUsersRequest_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchUsersRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchUsersRequest_t qt_meta_stringdata_SearchUsersRequest = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SearchUsersRequest"
QT_MOC_LITERAL(1, 19, 7), // "success"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "QList<SeafileUser>"
QT_MOC_LITERAL(4, 47, 5), // "users"
QT_MOC_LITERAL(5, 53, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 68, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 83, 5) // "reply"

    },
    "SearchUsersRequest\0success\0\0"
    "QList<SeafileUser>\0users\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchUsersRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SearchUsersRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchUsersRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QList<SeafileUser>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafileUser> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchUsersRequest::*)(const QList<SeafileUser> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchUsersRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchUsersRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_SearchUsersRequest.data,
    qt_meta_data_SearchUsersRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchUsersRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchUsersRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchUsersRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int SearchUsersRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SearchUsersRequest::success(const QList<SeafileUser> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FetchGroupsRequest_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FetchGroupsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FetchGroupsRequest_t qt_meta_stringdata_FetchGroupsRequest = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FetchGroupsRequest"
QT_MOC_LITERAL(1, 19, 7), // "success"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "QList<SeafileGroup>"
QT_MOC_LITERAL(4, 48, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 63, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 78, 5) // "reply"

    },
    "FetchGroupsRequest\0success\0\0"
    "QList<SeafileGroup>\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FetchGroupsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void FetchGroupsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FetchGroupsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QList<SeafileGroup>(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafileGroup> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchGroupsRequest::*)(const QList<SeafileGroup> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchGroupsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FetchGroupsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_FetchGroupsRequest.data,
    qt_meta_data_FetchGroupsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FetchGroupsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FetchGroupsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FetchGroupsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int FetchGroupsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FetchGroupsRequest::success(const QList<SeafileGroup> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetThumbnailRequest_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetThumbnailRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetThumbnailRequest_t qt_meta_stringdata_GetThumbnailRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GetThumbnailRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "thumbnail"
QT_MOC_LITERAL(4, 39, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 54, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 69, 5) // "reply"

    },
    "GetThumbnailRequest\0success\0\0thumbnail\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetThumbnailRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void GetThumbnailRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetThumbnailRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetThumbnailRequest::*)(const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetThumbnailRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetThumbnailRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetThumbnailRequest.data,
    qt_meta_data_GetThumbnailRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetThumbnailRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetThumbnailRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetThumbnailRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetThumbnailRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetThumbnailRequest::success(const QPixmap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UnshareRepoRequest_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnshareRepoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnshareRepoRequest_t qt_meta_stringdata_UnshareRepoRequest = {
    {
QT_MOC_LITERAL(0, 0, 18), // "UnshareRepoRequest"
QT_MOC_LITERAL(1, 19, 7), // "success"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 43, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 58, 5) // "reply"

    },
    "UnshareRepoRequest\0success\0\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnshareRepoRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void UnshareRepoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnshareRepoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnshareRepoRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnshareRepoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UnshareRepoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_UnshareRepoRequest.data,
    qt_meta_data_UnshareRepoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UnshareRepoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnshareRepoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnshareRepoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int UnshareRepoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void UnshareRepoRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CreateFileUploadLinkRequest_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateFileUploadLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateFileUploadLinkRequest_t qt_meta_stringdata_CreateFileUploadLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 27), // "CreateFileUploadLinkRequest"
QT_MOC_LITERAL(1, 28, 7), // "success"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "UploadLinkInfo"
QT_MOC_LITERAL(4, 52, 9), // "link_info"
QT_MOC_LITERAL(5, 62, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 77, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 92, 5) // "reply"

    },
    "CreateFileUploadLinkRequest\0success\0"
    "\0UploadLinkInfo\0link_info\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateFileUploadLinkRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void CreateFileUploadLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateFileUploadLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const UploadLinkInfo(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateFileUploadLinkRequest::*)(const UploadLinkInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateFileUploadLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateFileUploadLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateFileUploadLinkRequest.data,
    qt_meta_data_CreateFileUploadLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateFileUploadLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateFileUploadLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateFileUploadLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateFileUploadLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CreateFileUploadLinkRequest::success(const UploadLinkInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetUploadFileLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetUploadFileLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetUploadFileLinkRequest_t qt_meta_stringdata_GetUploadFileLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GetUploadFileLinkRequest"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "url"
QT_MOC_LITERAL(4, 38, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 53, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 68, 5) // "reply"

    },
    "GetUploadFileLinkRequest\0success\0\0url\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetUploadFileLinkRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void GetUploadFileLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetUploadFileLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetUploadFileLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetUploadFileLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetUploadFileLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetUploadFileLinkRequest.data,
    qt_meta_data_GetUploadFileLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetUploadFileLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetUploadFileLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetUploadFileLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetUploadFileLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GetUploadFileLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ClientSSOLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSSOLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSSOLinkRequest_t qt_meta_stringdata_ClientSSOLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ClientSSOLinkRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 4), // "link"
QT_MOC_LITERAL(4, 35, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 50, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 65, 5) // "reply"

    },
    "ClientSSOLinkRequest\0success\0\0link\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSSOLinkRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void ClientSSOLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSSOLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSSOLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSSOLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientSSOLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_ClientSSOLinkRequest.data,
    qt_meta_data_ClientSSOLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientSSOLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSSOLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSSOLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int ClientSSOLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ClientSSOLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ClientSSOStatusRequest_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSSOStatusRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSSOStatusRequest_t qt_meta_stringdata_ClientSSOStatusRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ClientSSOStatusRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "ClientSSOStatus"
QT_MOC_LITERAL(4, 48, 6), // "status"
QT_MOC_LITERAL(5, 55, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 70, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 85, 5) // "reply"

    },
    "ClientSSOStatusRequest\0success\0\0"
    "ClientSSOStatus\0status\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSSOStatusRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ClientSSOStatusRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSSOStatusRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const ClientSSOStatus(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSSOStatusRequest::*)(const ClientSSOStatus & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientSSOStatusRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientSSOStatusRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_ClientSSOStatusRequest.data,
    qt_meta_data_ClientSSOStatusRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientSSOStatusRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSSOStatusRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSSOStatusRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int ClientSSOStatusRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SeafileApiRequest::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ClientSSOStatusRequest::success(const ClientSSOStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
