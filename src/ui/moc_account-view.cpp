/****************************************************************************
** Meta object code from reading C++ file 'account-view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "account-view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account-view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountView_t {
    QByteArrayData data[15];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountView_t qt_meta_stringdata_AccountView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AccountView"
QT_MOC_LITERAL(1, 12, 7), // "refresh"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "sortOrderUpdated"
QT_MOC_LITERAL(4, 38, 16), // "onAccountChanged"
QT_MOC_LITERAL(5, 55, 20), // "showAddAccountDialog"
QT_MOC_LITERAL(6, 76, 13), // "deleteAccount"
QT_MOC_LITERAL(7, 90, 19), // "editAccountSettings"
QT_MOC_LITERAL(8, 110, 20), // "onAccountItemClicked"
QT_MOC_LITERAL(9, 131, 24), // "updateAccountInfoDisplay"
QT_MOC_LITERAL(10, 156, 12), // "updateAvatar"
QT_MOC_LITERAL(11, 169, 13), // "toggleAccount"
QT_MOC_LITERAL(12, 183, 20), // "visitServerInBrowser"
QT_MOC_LITERAL(13, 204, 4), // "link"
QT_MOC_LITERAL(14, 209, 22) // "slotShowSettingsDialog"

    },
    "AccountView\0refresh\0\0sortOrderUpdated\0"
    "onAccountChanged\0showAddAccountDialog\0"
    "deleteAccount\0editAccountSettings\0"
    "onAccountItemClicked\0updateAccountInfoDisplay\0"
    "updateAvatar\0toggleAccount\0"
    "visitServerInBrowser\0link\0"
    "slotShowSettingsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void AccountView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->sortOrderUpdated(); break;
        case 2: _t->onAccountChanged(); break;
        case 3: _t->showAddAccountDialog(); break;
        case 4: _t->deleteAccount(); break;
        case 5: _t->editAccountSettings(); break;
        case 6: _t->onAccountItemClicked(); break;
        case 7: _t->updateAccountInfoDisplay(); break;
        case 8: _t->updateAvatar(); break;
        case 9: _t->toggleAccount(); break;
        case 10: _t->visitServerInBrowser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotShowSettingsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountView::refresh)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountView::sortOrderUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AccountView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AccountView.data,
    qt_meta_data_AccountView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccountView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::AccountView"))
        return static_cast< Ui::AccountView*>(this);
    return QWidget::qt_metacast(_clname);
}

int AccountView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AccountView::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountView::sortOrderUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
