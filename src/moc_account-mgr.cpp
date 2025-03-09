/****************************************************************************
** Meta object code from reading C++ file 'account-mgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "account-mgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account-mgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountManager_t {
    QByteArrayData data[21];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountManager_t qt_meta_stringdata_AccountManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AccountManager"
QT_MOC_LITERAL(1, 15, 21), // "beforeAccountSwitched"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 15), // "accountsChanged"
QT_MOC_LITERAL(4, 54, 21), // "accountAboutToRelogin"
QT_MOC_LITERAL(5, 76, 7), // "Account"
QT_MOC_LITERAL(6, 84, 7), // "account"
QT_MOC_LITERAL(7, 92, 21), // "accountRequireRelogin"
QT_MOC_LITERAL(8, 114, 17), // "requireAddAccount"
QT_MOC_LITERAL(9, 132, 18), // "accountInfoUpdated"
QT_MOC_LITERAL(10, 151, 14), // "reloginAccount"
QT_MOC_LITERAL(11, 166, 17), // "serverInfoSuccess"
QT_MOC_LITERAL(12, 184, 10), // "ServerInfo"
QT_MOC_LITERAL(13, 195, 4), // "info"
QT_MOC_LITERAL(14, 200, 16), // "serverInfoFailed"
QT_MOC_LITERAL(15, 217, 8), // "ApiError"
QT_MOC_LITERAL(16, 226, 17), // "onAccountsChanged"
QT_MOC_LITERAL(17, 244, 13), // "onAboutToQuit"
QT_MOC_LITERAL(18, 258, 22), // "onGetRepoTokensSuccess"
QT_MOC_LITERAL(19, 281, 21), // "onGetRepoTokensFailed"
QT_MOC_LITERAL(20, 303, 5) // "error"

    },
    "AccountManager\0beforeAccountSwitched\0"
    "\0accountsChanged\0accountAboutToRelogin\0"
    "Account\0account\0accountRequireRelogin\0"
    "requireAddAccount\0accountInfoUpdated\0"
    "reloginAccount\0serverInfoSuccess\0"
    "ServerInfo\0info\0serverInfoFailed\0"
    "ApiError\0onAccountsChanged\0onAboutToQuit\0"
    "onGetRepoTokensSuccess\0onGetRepoTokensFailed\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    1,   81,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,
       8,    0,   87,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   91,    2, 0x0a /* Public */,
      11,    1,   94,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   20,

       0        // eod
};

void AccountManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beforeAccountSwitched(); break;
        case 1: _t->accountsChanged(); break;
        case 2: _t->accountAboutToRelogin((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 3: _t->accountRequireRelogin((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 4: _t->requireAddAccount(); break;
        case 5: _t->accountInfoUpdated((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 6: _t->reloginAccount((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        case 7: _t->serverInfoSuccess((*reinterpret_cast< const ServerInfo(*)>(_a[1]))); break;
        case 8: _t->serverInfoFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 9: _t->onAccountsChanged(); break;
        case 10: _t->onAboutToQuit(); break;
        case 11: _t->onGetRepoTokensSuccess(); break;
        case 12: _t->onGetRepoTokensFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Account >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::beforeAccountSwitched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(const Account & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountAboutToRelogin)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(const Account & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountRequireRelogin)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::requireAddAccount)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(const Account & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::accountInfoUpdated)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AccountManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AccountManager.data,
    qt_meta_data_AccountManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AccountManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AccountManager::beforeAccountSwitched()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountManager::accountsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AccountManager::accountAboutToRelogin(const Account & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountManager::accountRequireRelogin(const Account & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AccountManager::requireAddAccount()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AccountManager::accountInfoUpdated(const Account & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
