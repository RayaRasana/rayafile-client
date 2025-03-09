/****************************************************************************
** Meta object code from reading C++ file 'sharedlink-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "sharedlink-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharedlink-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SharedLinkDialog_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedLinkDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedLinkDialog_t qt_meta_stringdata_SharedLinkDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SharedLinkDialog"
QT_MOC_LITERAL(1, 17, 10), // "onCopyText"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "onDownloadStateChanged"
QT_MOC_LITERAL(4, 52, 5), // "state"
QT_MOC_LITERAL(5, 58, 17), // "slotGenSharedLink"
QT_MOC_LITERAL(6, 76, 25), // "onCreateSharedLinkSuccess"
QT_MOC_LITERAL(7, 102, 4), // "link"
QT_MOC_LITERAL(8, 107, 24), // "onCreateSharedLinkFailed"
QT_MOC_LITERAL(9, 132, 8), // "ApiError"
QT_MOC_LITERAL(10, 141, 5), // "error"
QT_MOC_LITERAL(11, 147, 31) // "slotShowPasswordCheckBoxClicked"

    },
    "SharedLinkDialog\0onCopyText\0\0"
    "onDownloadStateChanged\0state\0"
    "slotGenSharedLink\0onCreateSharedLinkSuccess\0"
    "link\0onCreateSharedLinkFailed\0ApiError\0"
    "error\0slotShowPasswordCheckBoxClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedLinkDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       8,    1,   52,    2, 0x08 /* Private */,
      11,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void SharedLinkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SharedLinkDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCopyText(); break;
        case 1: _t->onDownloadStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slotGenSharedLink(); break;
        case 3: _t->onCreateSharedLinkSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onCreateSharedLinkFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 5: _t->slotShowPasswordCheckBoxClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SharedLinkDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SharedLinkDialog.data,
    qt_meta_data_SharedLinkDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SharedLinkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedLinkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SharedLinkDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SharedLinkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
