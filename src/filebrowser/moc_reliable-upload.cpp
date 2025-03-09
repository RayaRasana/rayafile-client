/****************************************************************************
** Meta object code from reading C++ file 'reliable-upload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "reliable-upload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reliable-upload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReliablePostFileTask_t {
    QByteArrayData data[14];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReliablePostFileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReliablePostFileTask_t qt_meta_stringdata_ReliablePostFileTask = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ReliablePostFileTask"
QT_MOC_LITERAL(1, 21, 6), // "cancel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 29), // "onGetFileUploadedBytesSuccess"
QT_MOC_LITERAL(4, 59, 25), // "support_chunked_uploading"
QT_MOC_LITERAL(5, 85, 14), // "uploaded_bytes"
QT_MOC_LITERAL(6, 100, 28), // "onGetFileUploadedBytesFailed"
QT_MOC_LITERAL(7, 129, 8), // "ApiError"
QT_MOC_LITERAL(8, 138, 5), // "error"
QT_MOC_LITERAL(9, 144, 22), // "onPostFileTaskFinished"
QT_MOC_LITERAL(10, 167, 6), // "result"
QT_MOC_LITERAL(11, 174, 28), // "onPostFileTaskProgressUpdate"
QT_MOC_LITERAL(12, 203, 4), // "done"
QT_MOC_LITERAL(13, 208, 5) // "total"

    },
    "ReliablePostFileTask\0cancel\0\0"
    "onGetFileUploadedBytesSuccess\0"
    "support_chunked_uploading\0uploaded_bytes\0"
    "onGetFileUploadedBytesFailed\0ApiError\0"
    "error\0onPostFileTaskFinished\0result\0"
    "onPostFileTaskProgressUpdate\0done\0"
    "total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReliablePostFileTask[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    2,   40,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       9,    1,   48,    2, 0x08 /* Private */,
      11,    2,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::ULongLong,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,

       0        // eod
};

void ReliablePostFileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReliablePostFileTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->onGetFileUploadedBytesSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 2: _t->onGetFileUploadedBytesFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 3: _t->onPostFileTaskFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onPostFileTaskProgressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReliablePostFileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileServerTask::staticMetaObject>(),
    qt_meta_stringdata_ReliablePostFileTask.data,
    qt_meta_data_ReliablePostFileTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReliablePostFileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReliablePostFileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReliablePostFileTask.stringdata0))
        return static_cast<void*>(this);
    return FileServerTask::qt_metacast(_clname);
}

int ReliablePostFileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileServerTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_PostFileTask_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PostFileTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PostFileTask_t qt_meta_stringdata_PostFileTask = {
    {
QT_MOC_LITERAL(0, 0, 12) // "PostFileTask"

    },
    "PostFileTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PostFileTask[] = {

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

void PostFileTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PostFileTask::staticMetaObject = { {
    QMetaObject::SuperData::link<FileServerTask::staticMetaObject>(),
    qt_meta_stringdata_PostFileTask.data,
    qt_meta_data_PostFileTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PostFileTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PostFileTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PostFileTask.stringdata0))
        return static_cast<void*>(this);
    return FileServerTask::qt_metacast(_clname);
}

int PostFileTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FileServerTask::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
