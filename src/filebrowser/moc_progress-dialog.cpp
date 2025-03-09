/****************************************************************************
** Meta object code from reading C++ file 'progress-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "progress-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progress-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileBrowserProgressDialog_t {
    QByteArrayData data[17];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileBrowserProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileBrowserProgressDialog_t qt_meta_stringdata_FileBrowserProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FileBrowserProgressDialog"
QT_MOC_LITERAL(1, 26, 6), // "cancel"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "onProgressUpdate"
QT_MOC_LITERAL(4, 51, 15), // "processed_bytes"
QT_MOC_LITERAL(5, 67, 11), // "total_bytes"
QT_MOC_LITERAL(6, 79, 19), // "onCurrentNameUpdate"
QT_MOC_LITERAL(7, 99, 12), // "current_name"
QT_MOC_LITERAL(8, 112, 14), // "onTaskFinished"
QT_MOC_LITERAL(9, 127, 7), // "success"
QT_MOC_LITERAL(10, 135, 12), // "initTaskInfo"
QT_MOC_LITERAL(11, 148, 21), // "onOneFileUploadFailed"
QT_MOC_LITERAL(12, 170, 8), // "filename"
QT_MOC_LITERAL(13, 179, 11), // "single_file"
QT_MOC_LITERAL(14, 191, 18), // "retryOrSkipOrAbort"
QT_MOC_LITERAL(15, 210, 15), // "ActionOnFailure"
QT_MOC_LITERAL(16, 226, 3) // "msg"

    },
    "FileBrowserProgressDialog\0cancel\0\0"
    "onProgressUpdate\0processed_bytes\0"
    "total_bytes\0onCurrentNameUpdate\0"
    "current_name\0onTaskFinished\0success\0"
    "initTaskInfo\0onOneFileUploadFailed\0"
    "filename\0single_file\0retryOrSkipOrAbort\0"
    "ActionOnFailure\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileBrowserProgressDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    2,   50,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,
      11,    2,   62,    2, 0x08 /* Private */,
      14,    2,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,   13,
    0x80000000 | 15, QMetaType::QString, QMetaType::Bool,   16,   13,

       0        // eod
};

void FileBrowserProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBrowserProgressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->onProgressUpdate((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->onCurrentNameUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onTaskFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->initTaskInfo(); break;
        case 5: _t->onOneFileUploadFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: { ActionOnFailure _r = _t->retryOrSkipOrAbort((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ActionOnFailure*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileBrowserProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QProgressDialog::staticMetaObject>(),
    qt_meta_stringdata_FileBrowserProgressDialog.data,
    qt_meta_data_FileBrowserProgressDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileBrowserProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileBrowserProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileBrowserProgressDialog.stringdata0))
        return static_cast<void*>(this);
    return QProgressDialog::qt_metacast(_clname);
}

int FileBrowserProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProgressDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
