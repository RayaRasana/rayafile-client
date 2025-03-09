/****************************************************************************
** Meta object code from reading C++ file 'tasks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tasks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tasks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileNetworkTask_t {
    QByteArrayData data[23];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileNetworkTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileNetworkTask_t qt_meta_stringdata_FileNetworkTask = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FileNetworkTask"
QT_MOC_LITERAL(1, 16, 14), // "progressUpdate"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "transferred"
QT_MOC_LITERAL(4, 44, 5), // "total"
QT_MOC_LITERAL(5, 50, 10), // "nameUpdate"
QT_MOC_LITERAL(6, 61, 12), // "current_name"
QT_MOC_LITERAL(7, 74, 8), // "finished"
QT_MOC_LITERAL(8, 83, 7), // "success"
QT_MOC_LITERAL(9, 91, 7), // "retried"
QT_MOC_LITERAL(10, 99, 11), // "retry_count"
QT_MOC_LITERAL(11, 111, 5), // "start"
QT_MOC_LITERAL(12, 117, 6), // "cancel"
QT_MOC_LITERAL(13, 124, 30), // "onFileServerTaskProgressUpdate"
QT_MOC_LITERAL(14, 155, 26), // "onFileServerTaskNameUpdate"
QT_MOC_LITERAL(15, 182, 9), // "onLinkGet"
QT_MOC_LITERAL(16, 192, 4), // "link"
QT_MOC_LITERAL(17, 197, 15), // "onGetLinkFailed"
QT_MOC_LITERAL(18, 213, 8), // "ApiError"
QT_MOC_LITERAL(19, 222, 5), // "error"
QT_MOC_LITERAL(20, 228, 19), // "startFileServerTask"
QT_MOC_LITERAL(21, 248, 24), // "onFileServerTaskFinished"
QT_MOC_LITERAL(22, 273, 10) // "onFinished"

    },
    "FileNetworkTask\0progressUpdate\0\0"
    "transferred\0total\0nameUpdate\0current_name\0"
    "finished\0success\0retried\0retry_count\0"
    "start\0cancel\0onFileServerTaskProgressUpdate\0"
    "onFileServerTaskNameUpdate\0onLinkGet\0"
    "link\0onGetLinkFailed\0ApiError\0error\0"
    "startFileServerTask\0onFileServerTaskFinished\0"
    "onFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileNetworkTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,
       7,    1,   87,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    2,   95,    2, 0x09 /* Protected */,
      14,    1,  100,    2, 0x09 /* Protected */,
      15,    1,  103,    2, 0x09 /* Protected */,
      17,    1,  106,    2, 0x09 /* Protected */,
      20,    1,  109,    2, 0x09 /* Protected */,
      21,    1,  112,    2, 0x09 /* Protected */,
      22,    1,  115,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void FileNetworkTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileNetworkTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->nameUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->retried((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->start(); break;
        case 5: _t->cancel(); break;
        case 6: _t->onFileServerTaskProgressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->onFileServerTaskNameUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onLinkGet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->onGetLinkFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 10: _t->startFileServerTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->onFileServerTaskFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileNetworkTask::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileNetworkTask::progressUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileNetworkTask::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileNetworkTask::nameUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileNetworkTask::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileNetworkTask::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileNetworkTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileNetworkTask::retried)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileNetworkTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileNetworkTask.data,
    qt_meta_data_FileNetworkTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileNetworkTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileNetworkTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileNetworkTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileNetworkTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FileNetworkTask::progressUpdate(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileNetworkTask::nameUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileNetworkTask::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileNetworkTask::retried(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_FileDownloadTask_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDownloadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDownloadTask_t qt_meta_stringdata_FileDownloadTask = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FileDownloadTask"
QT_MOC_LITERAL(1, 17, 9), // "onLinkGet"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4) // "link"

    },
    "FileDownloadTask\0onLinkGet\0\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDownloadTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void FileDownloadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDownloadTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onLinkGet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileDownloadTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileNetworkTask::staticMetaObject>(),
    qt_meta_stringdata_FileDownloadTask.data,
    qt_meta_data_FileDownloadTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileDownloadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDownloadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDownloadTask.stringdata0))
        return static_cast<void*>(this);
    return FileNetworkTask::qt_metacast(_clname);
}

int FileDownloadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileNetworkTask::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FileUploadTask_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileUploadTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileUploadTask_t qt_meta_stringdata_FileUploadTask = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FileUploadTask"
QT_MOC_LITERAL(1, 15, 13), // "oneFileFailed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "filename"
QT_MOC_LITERAL(4, 39, 11), // "single_file"
QT_MOC_LITERAL(5, 51, 15), // "onOneFileFailed"
QT_MOC_LITERAL(6, 67, 14), // "onLinkGetAgain"
QT_MOC_LITERAL(7, 82, 4) // "link"

    },
    "FileUploadTask\0oneFileFailed\0\0filename\0"
    "single_file\0onOneFileFailed\0onLinkGetAgain\0"
    "link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileUploadTask[] = {

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
       5,    2,   34,    2, 0x09 /* Protected */,
       6,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void FileUploadTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileUploadTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->oneFileFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->onOneFileFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->onLinkGetAgain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileUploadTask::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileUploadTask::oneFileFailed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileUploadTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileNetworkTask::staticMetaObject>(),
    qt_meta_stringdata_FileUploadTask.data,
    qt_meta_data_FileUploadTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileUploadTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileUploadTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileUploadTask.stringdata0))
        return static_cast<void*>(this);
    return FileNetworkTask::qt_metacast(_clname);
}

int FileUploadTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileNetworkTask::qt_metacall(_c, _id, _a);
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
void FileUploadTask::oneFileFailed(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FileUploadMultipleTask_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileUploadMultipleTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileUploadMultipleTask_t qt_meta_stringdata_FileUploadMultipleTask = {
    {
QT_MOC_LITERAL(0, 0, 22) // "FileUploadMultipleTask"

    },
    "FileUploadMultipleTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileUploadMultipleTask[] = {

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

void FileUploadMultipleTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FileUploadMultipleTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileUploadTask::staticMetaObject>(),
    qt_meta_stringdata_FileUploadMultipleTask.data,
    qt_meta_data_FileUploadMultipleTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileUploadMultipleTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileUploadMultipleTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileUploadMultipleTask.stringdata0))
        return static_cast<void*>(this);
    return FileUploadTask::qt_metacast(_clname);
}

int FileUploadMultipleTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileUploadTask::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FileUploadDirectoryTask_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileUploadDirectoryTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileUploadDirectoryTask_t qt_meta_stringdata_FileUploadDirectoryTask = {
    {
QT_MOC_LITERAL(0, 0, 23), // "FileUploadDirectoryTask"
QT_MOC_LITERAL(1, 24, 10), // "onFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "success"
QT_MOC_LITERAL(4, 44, 15), // "nextEmptyFolder"
QT_MOC_LITERAL(5, 60, 17), // "onCreateDirFailed"
QT_MOC_LITERAL(6, 78, 8), // "ApiError"
QT_MOC_LITERAL(7, 87, 5) // "error"

    },
    "FileUploadDirectoryTask\0onFinished\0\0"
    "success\0nextEmptyFolder\0onCreateDirFailed\0"
    "ApiError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileUploadDirectoryTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void FileUploadDirectoryTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileUploadDirectoryTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->nextEmptyFolder(); break;
        case 2: _t->onCreateDirFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileUploadDirectoryTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileUploadTask::staticMetaObject>(),
    qt_meta_stringdata_FileUploadDirectoryTask.data,
    qt_meta_data_FileUploadDirectoryTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileUploadDirectoryTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileUploadDirectoryTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileUploadDirectoryTask.stringdata0))
        return static_cast<void*>(this);
    return FileUploadTask::qt_metacast(_clname);
}

int FileUploadDirectoryTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileUploadTask::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FileServerTask_t {
    QByteArrayData data[22];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileServerTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileServerTask_t qt_meta_stringdata_FileServerTask = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FileServerTask"
QT_MOC_LITERAL(1, 15, 14), // "progressUpdate"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "transferred"
QT_MOC_LITERAL(4, 43, 5), // "total"
QT_MOC_LITERAL(5, 49, 10), // "nameUpdate"
QT_MOC_LITERAL(6, 60, 12), // "current_name"
QT_MOC_LITERAL(7, 73, 8), // "finished"
QT_MOC_LITERAL(8, 82, 7), // "success"
QT_MOC_LITERAL(9, 90, 7), // "retried"
QT_MOC_LITERAL(10, 98, 11), // "retry_count"
QT_MOC_LITERAL(11, 110, 13), // "oneFileFailed"
QT_MOC_LITERAL(12, 124, 8), // "filename"
QT_MOC_LITERAL(13, 133, 11), // "single_file"
QT_MOC_LITERAL(14, 145, 5), // "start"
QT_MOC_LITERAL(15, 151, 6), // "cancel"
QT_MOC_LITERAL(16, 158, 11), // "onSslErrors"
QT_MOC_LITERAL(17, 170, 16), // "QList<QSslError>"
QT_MOC_LITERAL(18, 187, 6), // "errors"
QT_MOC_LITERAL(19, 194, 19), // "httpRequestFinished"
QT_MOC_LITERAL(20, 214, 5), // "retry"
QT_MOC_LITERAL(21, 220, 7) // "doAbort"

    },
    "FileServerTask\0progressUpdate\0\0"
    "transferred\0total\0nameUpdate\0current_name\0"
    "finished\0success\0retried\0retry_count\0"
    "oneFileFailed\0filename\0single_file\0"
    "start\0cancel\0onSslErrors\0QList<QSslError>\0"
    "errors\0httpRequestFinished\0retry\0"
    "doAbort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileServerTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       5,    1,   74,    2, 0x06 /* Public */,
       7,    1,   77,    2, 0x06 /* Public */,
       9,    1,   80,    2, 0x06 /* Public */,
      11,    2,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    1,   90,    2, 0x09 /* Protected */,
      19,    0,   93,    2, 0x09 /* Protected */,
      20,    0,   94,    2, 0x09 /* Protected */,
      21,    0,   95,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileServerTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileServerTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->nameUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->retried((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->oneFileFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->start(); break;
        case 6: _t->cancel(); break;
        case 7: _t->onSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 8: _t->httpRequestFinished(); break;
        case 9: _t->retry(); break;
        case 10: _t->doAbort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileServerTask::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServerTask::progressUpdate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileServerTask::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServerTask::nameUpdate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileServerTask::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServerTask::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileServerTask::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServerTask::retried)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileServerTask::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileServerTask::oneFileFailed)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileServerTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileServerTask.data,
    qt_meta_data_FileServerTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileServerTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileServerTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileServerTask.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileServerTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FileServerTask::progressUpdate(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileServerTask::nameUpdate(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileServerTask::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileServerTask::retried(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileServerTask::oneFileFailed(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_GetFileTask_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetFileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetFileTask_t qt_meta_stringdata_GetFileTask = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GetFileTask"
QT_MOC_LITERAL(1, 12, 13), // "httpReadyRead"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "GetFileTask\0httpReadyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetFileTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GetFileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetFileTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->httpReadyRead(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GetFileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileServerTask::staticMetaObject>(),
    qt_meta_stringdata_GetFileTask.data,
    qt_meta_data_GetFileTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetFileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetFileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetFileTask.stringdata0))
        return static_cast<void*>(this);
    return FileServerTask::qt_metacast(_clname);
}

int GetFileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileServerTask::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PostFilesTask_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PostFilesTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PostFilesTask_t qt_meta_stringdata_PostFilesTask = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PostFilesTask"
QT_MOC_LITERAL(1, 14, 6), // "cancel"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "onProgressUpdate"
QT_MOC_LITERAL(4, 39, 24), // "onPostTaskProgressUpdate"
QT_MOC_LITERAL(5, 64, 18), // "onPostTaskFinished"
QT_MOC_LITERAL(6, 83, 7) // "success"

    },
    "PostFilesTask\0cancel\0\0onProgressUpdate\0"
    "onPostTaskProgressUpdate\0onPostTaskFinished\0"
    "success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PostFilesTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    2,   36,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void PostFilesTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PostFilesTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->onProgressUpdate(); break;
        case 2: _t->onPostTaskProgressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->onPostTaskFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PostFilesTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileServerTask::staticMetaObject>(),
    qt_meta_stringdata_PostFilesTask.data,
    qt_meta_data_PostFilesTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PostFilesTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PostFilesTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PostFilesTask.stringdata0))
        return static_cast<void*>(this);
    return FileServerTask::qt_metacast(_clname);
}

int PostFilesTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileServerTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
