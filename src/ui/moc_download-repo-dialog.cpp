/****************************************************************************
** Meta object code from reading C++ file 'download-repo-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "download-repo-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'download-repo-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DownloadRepoDialog_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DownloadRepoDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DownloadRepoDialog_t qt_meta_stringdata_DownloadRepoDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DownloadRepoDialog"
QT_MOC_LITERAL(1, 19, 14), // "onOkBtnClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "chooseDirAction"
QT_MOC_LITERAL(4, 51, 28), // "onDownloadRepoRequestSuccess"
QT_MOC_LITERAL(5, 80, 16), // "RepoDownloadInfo"
QT_MOC_LITERAL(6, 97, 4), // "info"
QT_MOC_LITERAL(7, 102, 27), // "onDownloadRepoRequestFailed"
QT_MOC_LITERAL(8, 130, 8), // "ApiError"
QT_MOC_LITERAL(9, 139, 5), // "error"
QT_MOC_LITERAL(10, 145, 10), // "switchMode"
QT_MOC_LITERAL(11, 156, 11) // "startResync"

    },
    "DownloadRepoDialog\0onOkBtnClicked\0\0"
    "chooseDirAction\0onDownloadRepoRequestSuccess\0"
    "RepoDownloadInfo\0info\0onDownloadRepoRequestFailed\0"
    "ApiError\0error\0switchMode\0startResync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DownloadRepoDialog[] = {

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
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,
      10,    0,   52,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DownloadRepoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DownloadRepoDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOkBtnClicked(); break;
        case 1: _t->chooseDirAction(); break;
        case 2: _t->onDownloadRepoRequestSuccess((*reinterpret_cast< const RepoDownloadInfo(*)>(_a[1]))); break;
        case 3: _t->onDownloadRepoRequestFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 4: _t->switchMode(); break;
        case 5: _t->startResync(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DownloadRepoDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DownloadRepoDialog.data,
    qt_meta_data_DownloadRepoDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DownloadRepoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DownloadRepoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadRepoDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DownloadRepoDialog"))
        return static_cast< Ui::DownloadRepoDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int DownloadRepoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
