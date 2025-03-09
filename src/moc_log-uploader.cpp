/****************************************************************************
** Meta object code from reading C++ file 'log-uploader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "log-uploader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log-uploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogDirUploader_t {
    QByteArrayData data[15];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDirUploader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDirUploader_t qt_meta_stringdata_LogDirUploader = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LogDirUploader"
QT_MOC_LITERAL(1, 15, 8), // "finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "start"
QT_MOC_LITERAL(4, 31, 10), // "onCanceled"
QT_MOC_LITERAL(5, 42, 18), // "onCompressFinished"
QT_MOC_LITERAL(6, 61, 7), // "success"
QT_MOC_LITERAL(7, 69, 20), // "compressed_file_name"
QT_MOC_LITERAL(8, 90, 22), // "onGetUploadLinkSuccess"
QT_MOC_LITERAL(9, 113, 21), // "onGetUploadLinkFailed"
QT_MOC_LITERAL(10, 135, 8), // "ApiError"
QT_MOC_LITERAL(11, 144, 22), // "onUploadLogDirFinished"
QT_MOC_LITERAL(12, 167, 16), // "onProgressUpdate"
QT_MOC_LITERAL(13, 184, 15), // "processed_bytes"
QT_MOC_LITERAL(14, 200, 11) // "total_bytes"

    },
    "LogDirUploader\0finished\0\0start\0"
    "onCanceled\0onCompressFinished\0success\0"
    "compressed_file_name\0onGetUploadLinkSuccess\0"
    "onGetUploadLinkFailed\0ApiError\0"
    "onUploadLogDirFinished\0onProgressUpdate\0"
    "processed_bytes\0total_bytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDirUploader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    2,   57,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      12,    2,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   13,   14,

       0        // eod
};

void LogDirUploader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDirUploader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->start(); break;
        case 2: _t->onCanceled(); break;
        case 3: _t->onCompressFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->onGetUploadLinkSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onGetUploadLinkFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 6: _t->onUploadLogDirFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onProgressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogDirUploader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDirUploader::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogDirUploader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogDirUploader.data,
    qt_meta_data_LogDirUploader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogDirUploader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDirUploader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDirUploader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LogDirUploader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void LogDirUploader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_LogUploadProgressDialog_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogUploadProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogUploadProgressDialog_t qt_meta_stringdata_LogUploadProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 23) // "LogUploadProgressDialog"

    },
    "LogUploadProgressDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogUploadProgressDialog[] = {

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

void LogUploadProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LogUploadProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressDialog::staticMetaObject>(),
    qt_meta_stringdata_LogUploadProgressDialog.data,
    qt_meta_data_LogUploadProgressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogUploadProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogUploadProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogUploadProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int LogUploadProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LogDirCompressor_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogDirCompressor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogDirCompressor_t qt_meta_stringdata_LogDirCompressor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LogDirCompressor"
QT_MOC_LITERAL(1, 17, 16), // "compressFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "success"
QT_MOC_LITERAL(4, 43, 20), // "compressed_file_name"
QT_MOC_LITERAL(5, 64, 3) // "run"

    },
    "LogDirCompressor\0compressFinished\0\0"
    "success\0compressed_file_name\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogDirCompressor[] = {

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
       1,    2,   29,    2, 0x06 /* Public */,
       1,    1,   34,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LogDirCompressor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogDirCompressor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->compressFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->compressFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogDirCompressor::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogDirCompressor::compressFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogDirCompressor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LogDirCompressor.data,
    qt_meta_data_LogDirCompressor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogDirCompressor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogDirCompressor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogDirCompressor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int LogDirCompressor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LogDirCompressor::compressFinished(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
