/****************************************************************************
** Meta object code from reading C++ file 'settings-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "settings-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsDialog_t {
    QByteArrayData data[18];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsDialog_t qt_meta_stringdata_SettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsDialog"
QT_MOC_LITERAL(1, 15, 16), // "autoStartChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "state"
QT_MOC_LITERAL(4, 39, 19), // "hideDockIconChanged"
QT_MOC_LITERAL(5, 59, 13), // "notifyChanged"
QT_MOC_LITERAL(6, 73, 15), // "downloadChanged"
QT_MOC_LITERAL(7, 89, 5), // "value"
QT_MOC_LITERAL(8, 95, 13), // "uploadChanged"
QT_MOC_LITERAL(9, 109, 10), // "closeEvent"
QT_MOC_LITERAL(10, 120, 12), // "QCloseEvent*"
QT_MOC_LITERAL(11, 133, 5), // "event"
QT_MOC_LITERAL(12, 139, 9), // "showEvent"
QT_MOC_LITERAL(13, 149, 11), // "QShowEvent*"
QT_MOC_LITERAL(14, 161, 14), // "updateSettings"
QT_MOC_LITERAL(15, 176, 14), // "onOkBtnClicked"
QT_MOC_LITERAL(16, 191, 27), // "proxyRequirePasswordChanged"
QT_MOC_LITERAL(17, 219, 39) // "showHideControlsBasedOnCurren..."

    },
    "SettingsDialog\0autoStartChanged\0\0state\0"
    "hideDockIconChanged\0notifyChanged\0"
    "downloadChanged\0value\0uploadChanged\0"
    "closeEvent\0QCloseEvent*\0event\0showEvent\0"
    "QShowEvent*\0updateSettings\0onOkBtnClicked\0"
    "proxyRequirePasswordChanged\0"
    "showHideControlsBasedOnCurrentProxyType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    1,   78,    2, 0x08 /* Private */,
       8,    1,   81,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,
      16,    1,   92,    2, 0x08 /* Private */,
      17,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->autoStartChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hideDockIconChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->notifyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->downloadChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->uploadChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 6: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 7: _t->updateSettings(); break;
        case 8: _t->onOkBtnClicked(); break;
        case 9: _t->proxyRequirePasswordChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->showHideControlsBasedOnCurrentProxyType((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SettingsDialog.data,
    qt_meta_data_SettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SettingsDialog"))
        return static_cast< Ui::SettingsDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
