/****************************************************************************
** Meta object code from reading C++ file 'create-repo-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "create-repo-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'create-repo-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CreateRepoDialog_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateRepoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateRepoDialog_t qt_meta_stringdata_CreateRepoDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CreateRepoDialog"
QT_MOC_LITERAL(1, 17, 12), // "createAction"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "chooseDirAction"
QT_MOC_LITERAL(4, 47, 13), // "createSuccess"
QT_MOC_LITERAL(5, 61, 16), // "RepoDownloadInfo"
QT_MOC_LITERAL(6, 78, 4), // "info"
QT_MOC_LITERAL(7, 83, 12), // "createFailed"
QT_MOC_LITERAL(8, 96, 8), // "ApiError"
QT_MOC_LITERAL(9, 105, 5) // "error"

    },
    "CreateRepoDialog\0createAction\0\0"
    "chooseDirAction\0createSuccess\0"
    "RepoDownloadInfo\0info\0createFailed\0"
    "ApiError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateRepoDialog[] = {

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
       4,    1,   36,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void CreateRepoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreateRepoDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createAction(); break;
        case 1: _t->chooseDirAction(); break;
        case 2: _t->createSuccess((*reinterpret_cast< const RepoDownloadInfo(*)>(_a[1]))); break;
        case 3: _t->createFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreateRepoDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CreateRepoDialog.data,
    qt_meta_data_CreateRepoDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreateRepoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateRepoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreateRepoDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CreateRepoDialog"))
        return static_cast< Ui::CreateRepoDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int CreateRepoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
