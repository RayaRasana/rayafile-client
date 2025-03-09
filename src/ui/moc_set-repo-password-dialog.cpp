/****************************************************************************
** Meta object code from reading C++ file 'set-repo-password-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "set-repo-password-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'set-repo-password-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetRepoPasswordDialog_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetRepoPasswordDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetRepoPasswordDialog_t qt_meta_stringdata_SetRepoPasswordDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SetRepoPasswordDialog"
QT_MOC_LITERAL(1, 22, 14), // "onOkBtnClicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "requestFailed"
QT_MOC_LITERAL(4, 52, 8), // "ApiError"
QT_MOC_LITERAL(5, 61, 5) // "error"

    },
    "SetRepoPasswordDialog\0onOkBtnClicked\0"
    "\0requestFailed\0ApiError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetRepoPasswordDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void SetRepoPasswordDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SetRepoPasswordDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOkBtnClicked(); break;
        case 1: _t->requestFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SetRepoPasswordDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SetRepoPasswordDialog.data,
    qt_meta_data_SetRepoPasswordDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetRepoPasswordDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetRepoPasswordDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetRepoPasswordDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SetRepoPasswordDialog"))
        return static_cast< Ui::SetRepoPasswordDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int SetRepoPasswordDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
