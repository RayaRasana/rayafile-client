/****************************************************************************
** Meta object code from reading C++ file 'file-browser-requests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "file-browser-requests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file-browser-requests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GetDirentsRequest_t {
    QByteArrayData data[13];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetDirentsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetDirentsRequest_t qt_meta_stringdata_GetDirentsRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GetDirentsRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "current_readonly"
QT_MOC_LITERAL(4, 44, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(5, 62, 7), // "dirents"
QT_MOC_LITERAL(6, 70, 7), // "repo_id"
QT_MOC_LITERAL(7, 78, 6), // "failed"
QT_MOC_LITERAL(8, 85, 8), // "ApiError"
QT_MOC_LITERAL(9, 94, 5), // "error"
QT_MOC_LITERAL(10, 100, 14), // "requestSuccess"
QT_MOC_LITERAL(11, 115, 14), // "QNetworkReply&"
QT_MOC_LITERAL(12, 130, 5) // "reply"

    },
    "GetDirentsRequest\0success\0\0current_readonly\0"
    "QList<SeafDirent>\0dirents\0repo_id\0"
    "failed\0ApiError\0error\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetDirentsRequest[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       7,    2,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::QString,    3,    5,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void GetDirentsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetDirentsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->failed((*reinterpret_cast< const ApiError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetDirentsRequest::*)(bool , const QList<SeafDirent> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetDirentsRequest::success)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GetDirentsRequest::*)(const ApiError & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetDirentsRequest::failed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetDirentsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetDirentsRequest.data,
    qt_meta_data_GetDirentsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetDirentsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetDirentsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetDirentsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetDirentsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetDirentsRequest::success(bool _t1, const QList<SeafDirent> & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GetDirentsRequest::failed(const ApiError & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_GetFileDownloadLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetFileDownloadLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetFileDownloadLinkRequest_t qt_meta_stringdata_GetFileDownloadLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GetFileDownloadLinkRequest"
QT_MOC_LITERAL(1, 27, 7), // "success"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 3), // "url"
QT_MOC_LITERAL(4, 40, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 55, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 70, 5) // "reply"

    },
    "GetFileDownloadLinkRequest\0success\0\0"
    "url\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetFileDownloadLinkRequest[] = {

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

void GetFileDownloadLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetFileDownloadLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetFileDownloadLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetFileDownloadLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetFileDownloadLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetFileDownloadLinkRequest.data,
    qt_meta_data_GetFileDownloadLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetFileDownloadLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetFileDownloadLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetFileDownloadLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetFileDownloadLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetFileDownloadLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateDirectoryRequest_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateDirectoryRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateDirectoryRequest_t qt_meta_stringdata_CreateDirectoryRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CreateDirectoryRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "repo_id"
QT_MOC_LITERAL(4, 40, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 55, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 70, 5) // "reply"

    },
    "CreateDirectoryRequest\0success\0\0repo_id\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateDirectoryRequest[] = {

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

void CreateDirectoryRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateDirectoryRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateDirectoryRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateDirectoryRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateDirectoryRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateDirectoryRequest.data,
    qt_meta_data_CreateDirectoryRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateDirectoryRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateDirectoryRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateDirectoryRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateDirectoryRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CreateDirectoryRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RenameDirentRequest_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenameDirentRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenameDirentRequest_t qt_meta_stringdata_RenameDirentRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RenameDirentRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "repo_id"
QT_MOC_LITERAL(4, 37, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 52, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 67, 5) // "reply"

    },
    "RenameDirentRequest\0success\0\0repo_id\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenameDirentRequest[] = {

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

void RenameDirentRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RenameDirentRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenameDirentRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenameDirentRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RenameDirentRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_RenameDirentRequest.data,
    qt_meta_data_RenameDirentRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RenameDirentRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenameDirentRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenameDirentRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int RenameDirentRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RenameDirentRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RemoveDirentRequest_t {
    QByteArrayData data[7];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoveDirentRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoveDirentRequest_t qt_meta_stringdata_RemoveDirentRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RemoveDirentRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "repo_id"
QT_MOC_LITERAL(4, 37, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 52, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 67, 5) // "reply"

    },
    "RemoveDirentRequest\0success\0\0repo_id\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoveDirentRequest[] = {

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

void RemoveDirentRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoveDirentRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoveDirentRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoveDirentRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoveDirentRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_RemoveDirentRequest.data,
    qt_meta_data_RemoveDirentRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoveDirentRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoveDirentRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoveDirentRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int RemoveDirentRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RemoveDirentRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_RemoveDirentsRequest_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoveDirentsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoveDirentsRequest_t qt_meta_stringdata_RemoveDirentsRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RemoveDirentsRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "repo_id"
QT_MOC_LITERAL(4, 38, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 53, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 68, 5) // "reply"

    },
    "RemoveDirentsRequest\0success\0\0repo_id\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoveDirentsRequest[] = {

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

void RemoveDirentsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoveDirentsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoveDirentsRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoveDirentsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoveDirentsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_RemoveDirentsRequest.data,
    qt_meta_data_RemoveDirentsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoveDirentsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoveDirentsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoveDirentsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int RemoveDirentsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RemoveDirentsRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetSharedLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetSharedLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetSharedLinkRequest_t qt_meta_stringdata_GetSharedLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GetSharedLinkRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "url"
QT_MOC_LITERAL(4, 34, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 49, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 64, 5) // "reply"

    },
    "GetSharedLinkRequest\0success\0\0url\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetSharedLinkRequest[] = {

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

void GetSharedLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetSharedLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetSharedLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetSharedLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetSharedLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetSharedLinkRequest.data,
    qt_meta_data_GetSharedLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetSharedLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetSharedLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetSharedLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetSharedLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetSharedLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CreateSharedLinkRequest_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateSharedLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateSharedLinkRequest_t qt_meta_stringdata_CreateSharedLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CreateSharedLinkRequest"
QT_MOC_LITERAL(1, 24, 7), // "success"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "url"
QT_MOC_LITERAL(4, 37, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 52, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 67, 5), // "reply"
QT_MOC_LITERAL(7, 73, 11), // "onHttpError"
QT_MOC_LITERAL(8, 85, 4) // "code"

    },
    "CreateSharedLinkRequest\0success\0\0url\0"
    "requestSuccess\0QNetworkReply&\0reply\0"
    "onHttpError\0code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateSharedLinkRequest[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x09 /* Protected */,
       7,    1,   35,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void CreateSharedLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateSharedLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        case 2: _t->onHttpError((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CreateSharedLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CreateSharedLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateSharedLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CreateSharedLinkRequest.data,
    qt_meta_data_CreateSharedLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateSharedLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateSharedLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateSharedLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CreateSharedLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CreateSharedLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetFileUploadLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetFileUploadLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetFileUploadLinkRequest_t qt_meta_stringdata_GetFileUploadLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "GetFileUploadLinkRequest"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "url"
QT_MOC_LITERAL(4, 38, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 53, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 68, 5) // "reply"

    },
    "GetFileUploadLinkRequest\0success\0\0url\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetFileUploadLinkRequest[] = {

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

void GetFileUploadLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetFileUploadLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetFileUploadLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetFileUploadLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetFileUploadLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetFileUploadLinkRequest.data,
    qt_meta_data_GetFileUploadLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetFileUploadLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetFileUploadLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetFileUploadLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetFileUploadLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetFileUploadLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MoveFileRequest_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveFileRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveFileRequest_t qt_meta_stringdata_MoveFileRequest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MoveFileRequest"
QT_MOC_LITERAL(1, 16, 7), // "success"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 40, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 55, 5) // "reply"

    },
    "MoveFileRequest\0success\0\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveFileRequest[] = {

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

void MoveFileRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoveFileRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoveFileRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveFileRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoveFileRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_MoveFileRequest.data,
    qt_meta_data_MoveFileRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoveFileRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveFileRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveFileRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int MoveFileRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MoveFileRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_CopyMultipleFilesRequest_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CopyMultipleFilesRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CopyMultipleFilesRequest_t qt_meta_stringdata_CopyMultipleFilesRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CopyMultipleFilesRequest"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "dst_repo_id"
QT_MOC_LITERAL(4, 46, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 61, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 76, 5) // "reply"

    },
    "CopyMultipleFilesRequest\0success\0\0"
    "dst_repo_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CopyMultipleFilesRequest[] = {

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

void CopyMultipleFilesRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CopyMultipleFilesRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CopyMultipleFilesRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CopyMultipleFilesRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CopyMultipleFilesRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_CopyMultipleFilesRequest.data,
    qt_meta_data_CopyMultipleFilesRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CopyMultipleFilesRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopyMultipleFilesRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CopyMultipleFilesRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int CopyMultipleFilesRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CopyMultipleFilesRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MoveMultipleFilesRequest_t {
    QByteArrayData data[7];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoveMultipleFilesRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoveMultipleFilesRequest_t qt_meta_stringdata_MoveMultipleFilesRequest = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MoveMultipleFilesRequest"
QT_MOC_LITERAL(1, 25, 7), // "success"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "dst_repo_id"
QT_MOC_LITERAL(4, 46, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 61, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 76, 5) // "reply"

    },
    "MoveMultipleFilesRequest\0success\0\0"
    "dst_repo_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoveMultipleFilesRequest[] = {

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

void MoveMultipleFilesRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoveMultipleFilesRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoveMultipleFilesRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoveMultipleFilesRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoveMultipleFilesRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_MoveMultipleFilesRequest.data,
    qt_meta_data_MoveMultipleFilesRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoveMultipleFilesRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoveMultipleFilesRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoveMultipleFilesRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int MoveMultipleFilesRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void MoveMultipleFilesRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QueryAsyncOperationProgress_t {
    QByteArrayData data[6];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QueryAsyncOperationProgress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QueryAsyncOperationProgress_t qt_meta_stringdata_QueryAsyncOperationProgress = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QueryAsyncOperationProgress"
QT_MOC_LITERAL(1, 28, 7), // "success"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 52, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 67, 5) // "reply"

    },
    "QueryAsyncOperationProgress\0success\0"
    "\0requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QueryAsyncOperationProgress[] = {

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
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void QueryAsyncOperationProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QueryAsyncOperationProgress *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QueryAsyncOperationProgress::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QueryAsyncOperationProgress::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QueryAsyncOperationProgress::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_QueryAsyncOperationProgress.data,
    qt_meta_data_QueryAsyncOperationProgress,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QueryAsyncOperationProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueryAsyncOperationProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QueryAsyncOperationProgress.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int QueryAsyncOperationProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QueryAsyncOperationProgress::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest_t qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest = {
    {
QT_MOC_LITERAL(0, 0, 30), // "AsyncCopyAndMoveOneItemRequest"
QT_MOC_LITERAL(1, 31, 7), // "success"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "task_id"
QT_MOC_LITERAL(4, 48, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 63, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 78, 5) // "reply"

    },
    "AsyncCopyAndMoveOneItemRequest\0success\0"
    "\0task_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncCopyAndMoveOneItemRequest[] = {

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

void AsyncCopyAndMoveOneItemRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsyncCopyAndMoveOneItemRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AsyncCopyAndMoveOneItemRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncCopyAndMoveOneItemRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsyncCopyAndMoveOneItemRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest.data,
    qt_meta_data_AsyncCopyAndMoveOneItemRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AsyncCopyAndMoveOneItemRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncCopyAndMoveOneItemRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncCopyAndMoveOneItemRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int AsyncCopyAndMoveOneItemRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AsyncCopyAndMoveOneItemRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AsyncCopyMultipleItemsRequest_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncCopyMultipleItemsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncCopyMultipleItemsRequest_t qt_meta_stringdata_AsyncCopyMultipleItemsRequest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AsyncCopyMultipleItemsRequest"
QT_MOC_LITERAL(1, 30, 7), // "success"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "task_id"
QT_MOC_LITERAL(4, 47, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 62, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 77, 5) // "reply"

    },
    "AsyncCopyMultipleItemsRequest\0success\0"
    "\0task_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncCopyMultipleItemsRequest[] = {

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

void AsyncCopyMultipleItemsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsyncCopyMultipleItemsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AsyncCopyMultipleItemsRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncCopyMultipleItemsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsyncCopyMultipleItemsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_AsyncCopyMultipleItemsRequest.data,
    qt_meta_data_AsyncCopyMultipleItemsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AsyncCopyMultipleItemsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncCopyMultipleItemsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncCopyMultipleItemsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int AsyncCopyMultipleItemsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AsyncCopyMultipleItemsRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AsyncMoveMultipleItemsRequest_t {
    QByteArrayData data[7];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncMoveMultipleItemsRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncMoveMultipleItemsRequest_t qt_meta_stringdata_AsyncMoveMultipleItemsRequest = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AsyncMoveMultipleItemsRequest"
QT_MOC_LITERAL(1, 30, 7), // "success"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "task_id"
QT_MOC_LITERAL(4, 47, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 62, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 77, 5) // "reply"

    },
    "AsyncMoveMultipleItemsRequest\0success\0"
    "\0task_id\0requestSuccess\0QNetworkReply&\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncMoveMultipleItemsRequest[] = {

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

void AsyncMoveMultipleItemsRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsyncMoveMultipleItemsRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AsyncMoveMultipleItemsRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncMoveMultipleItemsRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsyncMoveMultipleItemsRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_AsyncMoveMultipleItemsRequest.data,
    qt_meta_data_AsyncMoveMultipleItemsRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AsyncMoveMultipleItemsRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncMoveMultipleItemsRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncMoveMultipleItemsRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int AsyncMoveMultipleItemsRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AsyncMoveMultipleItemsRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_StarFileRequest_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StarFileRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StarFileRequest_t qt_meta_stringdata_StarFileRequest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StarFileRequest"
QT_MOC_LITERAL(1, 16, 7), // "success"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 40, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 55, 5) // "reply"

    },
    "StarFileRequest\0success\0\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StarFileRequest[] = {

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

void StarFileRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StarFileRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StarFileRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StarFileRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StarFileRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_StarFileRequest.data,
    qt_meta_data_StarFileRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StarFileRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StarFileRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StarFileRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int StarFileRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void StarFileRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_UnstarFileRequest_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnstarFileRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnstarFileRequest_t qt_meta_stringdata_UnstarFileRequest = {
    {
QT_MOC_LITERAL(0, 0, 17), // "UnstarFileRequest"
QT_MOC_LITERAL(1, 18, 7), // "success"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "requestSuccess"
QT_MOC_LITERAL(4, 42, 14), // "QNetworkReply&"
QT_MOC_LITERAL(5, 57, 5) // "reply"

    },
    "UnstarFileRequest\0success\0\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnstarFileRequest[] = {

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

void UnstarFileRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnstarFileRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success(); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnstarFileRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnstarFileRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UnstarFileRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_UnstarFileRequest.data,
    qt_meta_data_UnstarFileRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UnstarFileRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnstarFileRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnstarFileRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int UnstarFileRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UnstarFileRequest::success()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LockFileRequest_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LockFileRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LockFileRequest_t qt_meta_stringdata_LockFileRequest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LockFileRequest"
QT_MOC_LITERAL(1, 16, 7), // "success"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "repo_id"
QT_MOC_LITERAL(4, 33, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 48, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 63, 5) // "reply"

    },
    "LockFileRequest\0success\0\0repo_id\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LockFileRequest[] = {

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

void LockFileRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LockFileRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LockFileRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockFileRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LockFileRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_LockFileRequest.data,
    qt_meta_data_LockFileRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LockFileRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockFileRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LockFileRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int LockFileRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LockFileRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetFileUploadedBytesRequest_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetFileUploadedBytesRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetFileUploadedBytesRequest_t qt_meta_stringdata_GetFileUploadedBytesRequest = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GetFileUploadedBytesRequest"
QT_MOC_LITERAL(1, 28, 7), // "success"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "support_chunked_uploading"
QT_MOC_LITERAL(4, 63, 14), // "uploaded_bytes"
QT_MOC_LITERAL(5, 78, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 93, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 108, 5) // "reply"

    },
    "GetFileUploadedBytesRequest\0success\0"
    "\0support_chunked_uploading\0uploaded_bytes\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetFileUploadedBytesRequest[] = {

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
    QMetaType::Void, QMetaType::Bool, QMetaType::ULongLong,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void GetFileUploadedBytesRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetFileUploadedBytesRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetFileUploadedBytesRequest::*)(bool , quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetFileUploadedBytesRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetFileUploadedBytesRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetFileUploadedBytesRequest.data,
    qt_meta_data_GetFileUploadedBytesRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetFileUploadedBytesRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetFileUploadedBytesRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetFileUploadedBytesRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetFileUploadedBytesRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetFileUploadedBytesRequest::success(bool _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetSmartLinkRequest_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetSmartLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetSmartLinkRequest_t qt_meta_stringdata_GetSmartLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GetSmartLinkRequest"
QT_MOC_LITERAL(1, 20, 7), // "success"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "smart_link"
QT_MOC_LITERAL(4, 40, 13), // "protocol_link"
QT_MOC_LITERAL(5, 54, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 69, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 84, 5) // "reply"

    },
    "GetSmartLinkRequest\0success\0\0smart_link\0"
    "protocol_link\0requestSuccess\0"
    "QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetSmartLinkRequest[] = {

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

void GetSmartLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetSmartLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetSmartLinkRequest::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetSmartLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetSmartLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetSmartLinkRequest.data,
    qt_meta_data_GetSmartLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetSmartLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetSmartLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetSmartLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetSmartLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetSmartLinkRequest::success(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetFileLockInfoRequest_t {
    QByteArrayData data[12];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetFileLockInfoRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetFileLockInfoRequest_t qt_meta_stringdata_GetFileLockInfoRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GetFileLockInfoRequest"
QT_MOC_LITERAL(1, 23, 7), // "success"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "found"
QT_MOC_LITERAL(4, 38, 10), // "lock_owner"
QT_MOC_LITERAL(5, 49, 14), // "requestSuccess"
QT_MOC_LITERAL(6, 64, 14), // "QNetworkReply&"
QT_MOC_LITERAL(7, 79, 5), // "reply"
QT_MOC_LITERAL(8, 85, 19), // "onGetDirentsSuccess"
QT_MOC_LITERAL(9, 105, 16), // "current_readonly"
QT_MOC_LITERAL(10, 122, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(11, 140, 7) // "dirents"

    },
    "GetFileLockInfoRequest\0success\0\0found\0"
    "lock_owner\0requestSuccess\0QNetworkReply&\0"
    "reply\0onGetDirentsSuccess\0current_readonly\0"
    "QList<SeafDirent>\0dirents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetFileLockInfoRequest[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x09 /* Protected */,
       8,    2,   37,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,

       0        // eod
};

void GetFileLockInfoRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetFileLockInfoRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        case 2: _t->onGetDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetFileLockInfoRequest::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetFileLockInfoRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetFileLockInfoRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetFileLockInfoRequest.data,
    qt_meta_data_GetFileLockInfoRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetFileLockInfoRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetFileLockInfoRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetFileLockInfoRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetFileLockInfoRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetFileLockInfoRequest::success(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_GetUploadLinkRequest_t {
    QByteArrayData data[7];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetUploadLinkRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetUploadLinkRequest_t qt_meta_stringdata_GetUploadLinkRequest = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GetUploadLinkRequest"
QT_MOC_LITERAL(1, 21, 7), // "success"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 11), // "upload_link"
QT_MOC_LITERAL(4, 42, 14), // "requestSuccess"
QT_MOC_LITERAL(5, 57, 14), // "QNetworkReply&"
QT_MOC_LITERAL(6, 72, 5) // "reply"

    },
    "GetUploadLinkRequest\0success\0\0upload_link\0"
    "requestSuccess\0QNetworkReply&\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetUploadLinkRequest[] = {

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

void GetUploadLinkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetUploadLinkRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->success((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetUploadLinkRequest::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetUploadLinkRequest::success)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetUploadLinkRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<SeafileApiRequest::staticMetaObject>(),
    qt_meta_stringdata_GetUploadLinkRequest.data,
    qt_meta_data_GetUploadLinkRequest,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetUploadLinkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetUploadLinkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetUploadLinkRequest.stringdata0))
        return static_cast<void*>(this);
    return SeafileApiRequest::qt_metacast(_clname);
}

int GetUploadLinkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GetUploadLinkRequest::success(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
