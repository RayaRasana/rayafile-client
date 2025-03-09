/****************************************************************************
** Meta object code from reading C++ file 'init-vdrive-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "init-vdrive-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'init-vdrive-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InitVirtualDriveDialog_t {
    QByteArrayData data[18];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InitVirtualDriveDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InitVirtualDriveDialog_t qt_meta_stringdata_InitVirtualDriveDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "InitVirtualDriveDialog"
QT_MOC_LITERAL(1, 23, 23), // "onGetDefaultRepoSuccess"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "exists"
QT_MOC_LITERAL(4, 55, 7), // "repo_id"
QT_MOC_LITERAL(5, 63, 23), // "onGetDefaultRepoFailure"
QT_MOC_LITERAL(6, 87, 8), // "ApiError"
QT_MOC_LITERAL(7, 96, 5), // "error"
QT_MOC_LITERAL(8, 102, 26), // "onCreateDefaultRepoSuccess"
QT_MOC_LITERAL(9, 129, 26), // "onCreateDefaultRepoFailure"
QT_MOC_LITERAL(10, 156, 21), // "onDownloadRepoSuccess"
QT_MOC_LITERAL(11, 178, 16), // "RepoDownloadInfo"
QT_MOC_LITERAL(12, 195, 4), // "info"
QT_MOC_LITERAL(13, 200, 21), // "onDownloadRepoFailure"
QT_MOC_LITERAL(14, 222, 21), // "checkDownloadProgress"
QT_MOC_LITERAL(15, 244, 5), // "start"
QT_MOC_LITERAL(16, 250, 8), // "onCancel"
QT_MOC_LITERAL(17, 259, 15) // "openVirtualDisk"

    },
    "InitVirtualDriveDialog\0onGetDefaultRepoSuccess\0"
    "\0exists\0repo_id\0onGetDefaultRepoFailure\0"
    "ApiError\0error\0onCreateDefaultRepoSuccess\0"
    "onCreateDefaultRepoFailure\0"
    "onDownloadRepoSuccess\0RepoDownloadInfo\0"
    "info\0onDownloadRepoFailure\0"
    "checkDownloadProgress\0start\0onCancel\0"
    "openVirtualDisk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InitVirtualDriveDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x08 /* Private */,
       5,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InitVirtualDriveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InitVirtualDriveDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onGetDefaultRepoSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onGetDefaultRepoFailure((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 2: _t->onCreateDefaultRepoSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onCreateDefaultRepoFailure((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 4: _t->onDownloadRepoSuccess((*reinterpret_cast< const RepoDownloadInfo(*)>(_a[1]))); break;
        case 5: _t->onDownloadRepoFailure((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 6: _t->checkDownloadProgress(); break;
        case 7: _t->start(); break;
        case 8: _t->onCancel(); break;
        case 9: _t->openVirtualDisk(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InitVirtualDriveDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_InitVirtualDriveDialog.data,
    qt_meta_data_InitVirtualDriveDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InitVirtualDriveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InitVirtualDriveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InitVirtualDriveDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::InitVirtualDriveDialog"))
        return static_cast< Ui::InitVirtualDriveDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int InitVirtualDriveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
