/****************************************************************************
** Meta object code from reading C++ file 'private-share-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "private-share-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'private-share-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrivateShareDialog_t {
    QByteArrayData data[32];
    char stringdata0[492];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrivateShareDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrivateShareDialog_t qt_meta_stringdata_PrivateShareDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PrivateShareDialog"
QT_MOC_LITERAL(1, 19, 17), // "onUpdateShareItem"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "group_id"
QT_MOC_LITERAL(4, 47, 15), // "SharePermission"
QT_MOC_LITERAL(5, 63, 10), // "permission"
QT_MOC_LITERAL(6, 74, 11), // "SeafileUser"
QT_MOC_LITERAL(7, 86, 5), // "email"
QT_MOC_LITERAL(8, 92, 17), // "onRemoveShareItem"
QT_MOC_LITERAL(9, 110, 4), // "user"
QT_MOC_LITERAL(10, 115, 14), // "selectFirstRow"
QT_MOC_LITERAL(11, 130, 17), // "onNameInputEdited"
QT_MOC_LITERAL(12, 148, 14), // "onShareSuccess"
QT_MOC_LITERAL(13, 163, 13), // "onShareFailed"
QT_MOC_LITERAL(14, 177, 8), // "ApiError"
QT_MOC_LITERAL(15, 186, 5), // "error"
QT_MOC_LITERAL(16, 192, 20), // "onUpdateShareSuccess"
QT_MOC_LITERAL(17, 213, 19), // "onUpdateShareFailed"
QT_MOC_LITERAL(18, 233, 20), // "onRemoveShareSuccess"
QT_MOC_LITERAL(19, 254, 19), // "onRemoveShareFailed"
QT_MOC_LITERAL(20, 274, 20), // "onFetchGroupsSuccess"
QT_MOC_LITERAL(21, 295, 19), // "QList<SeafileGroup>"
QT_MOC_LITERAL(22, 315, 6), // "groups"
QT_MOC_LITERAL(23, 322, 21), // "onFetchContactsFailed"
QT_MOC_LITERAL(24, 344, 14), // "onOkBtnClicked"
QT_MOC_LITERAL(25, 359, 23), // "onGetSharedItemsSuccess"
QT_MOC_LITERAL(26, 383, 21), // "QList<GroupShareInfo>"
QT_MOC_LITERAL(27, 405, 12), // "group_shares"
QT_MOC_LITERAL(28, 418, 20), // "QList<UserShareInfo>"
QT_MOC_LITERAL(29, 439, 11), // "user_shares"
QT_MOC_LITERAL(30, 451, 22), // "onGetSharedItemsFailed"
QT_MOC_LITERAL(31, 474, 17) // "onUserNameChoosed"

    },
    "PrivateShareDialog\0onUpdateShareItem\0"
    "\0group_id\0SharePermission\0permission\0"
    "SeafileUser\0email\0onRemoveShareItem\0"
    "user\0selectFirstRow\0onNameInputEdited\0"
    "onShareSuccess\0onShareFailed\0ApiError\0"
    "error\0onUpdateShareSuccess\0"
    "onUpdateShareFailed\0onRemoveShareSuccess\0"
    "onRemoveShareFailed\0onFetchGroupsSuccess\0"
    "QList<SeafileGroup>\0groups\0"
    "onFetchContactsFailed\0onOkBtnClicked\0"
    "onGetSharedItemsSuccess\0QList<GroupShareInfo>\0"
    "group_shares\0QList<UserShareInfo>\0"
    "user_shares\0onGetSharedItemsFailed\0"
    "onUserNameChoosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrivateShareDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  104,    2, 0x0a /* Public */,
       1,    2,  109,    2, 0x0a /* Public */,
       8,    2,  114,    2, 0x0a /* Public */,
       8,    2,  119,    2, 0x0a /* Public */,
      10,    0,  124,    2, 0x08 /* Private */,
      11,    0,  125,    2, 0x08 /* Private */,
      12,    0,  126,    2, 0x08 /* Private */,
      13,    1,  127,    2, 0x08 /* Private */,
      16,    0,  130,    2, 0x08 /* Private */,
      17,    1,  131,    2, 0x08 /* Private */,
      18,    0,  134,    2, 0x08 /* Private */,
      19,    1,  135,    2, 0x08 /* Private */,
      20,    1,  138,    2, 0x08 /* Private */,
      23,    1,  141,    2, 0x08 /* Private */,
      24,    0,  144,    2, 0x08 /* Private */,
      25,    2,  145,    2, 0x08 /* Private */,
      30,    1,  150,    2, 0x08 /* Private */,
      31,    0,  153,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4,    7,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4,    9,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28,   27,   29,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void PrivateShareDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PrivateShareDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateShareItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 1: _t->onUpdateShareItem((*reinterpret_cast< const SeafileUser(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 2: _t->onRemoveShareItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 3: _t->onRemoveShareItem((*reinterpret_cast< const SeafileUser(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 4: _t->selectFirstRow(); break;
        case 5: _t->onNameInputEdited(); break;
        case 6: _t->onShareSuccess(); break;
        case 7: _t->onShareFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 8: _t->onUpdateShareSuccess(); break;
        case 9: _t->onUpdateShareFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 10: _t->onRemoveShareSuccess(); break;
        case 11: _t->onRemoveShareFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 12: _t->onFetchGroupsSuccess((*reinterpret_cast< const QList<SeafileGroup>(*)>(_a[1]))); break;
        case 13: _t->onFetchContactsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 14: _t->onOkBtnClicked(); break;
        case 15: _t->onGetSharedItemsSuccess((*reinterpret_cast< const QList<GroupShareInfo>(*)>(_a[1])),(*reinterpret_cast< const QList<UserShareInfo>(*)>(_a[2]))); break;
        case 16: _t->onGetSharedItemsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 17: _t->onUserNameChoosed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PrivateShareDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PrivateShareDialog.data,
    qt_meta_data_PrivateShareDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PrivateShareDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrivateShareDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrivateShareDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::PrivateShareDialog"))
        return static_cast< Ui::PrivateShareDialog*>(this);
    return QDialog::qt_metacast(_clname);
}

int PrivateShareDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
struct qt_meta_stringdata_SharedItemsHeadView_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedItemsHeadView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedItemsHeadView_t qt_meta_stringdata_SharedItemsHeadView = {
    {
QT_MOC_LITERAL(0, 0, 19) // "SharedItemsHeadView"

    },
    "SharedItemsHeadView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedItemsHeadView[] = {

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

void SharedItemsHeadView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SharedItemsHeadView::staticMetaObject = { {
    QMetaObject::SuperData::link<QHeaderView::staticMetaObject>(),
    qt_meta_stringdata_SharedItemsHeadView.data,
    qt_meta_data_SharedItemsHeadView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SharedItemsHeadView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedItemsHeadView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SharedItemsHeadView.stringdata0))
        return static_cast<void*>(this);
    return QHeaderView::qt_metacast(_clname);
}

int SharedItemsHeadView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QHeaderView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SharedItemsTableView_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedItemsTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedItemsTableView_t qt_meta_stringdata_SharedItemsTableView = {
    {
QT_MOC_LITERAL(0, 0, 20) // "SharedItemsTableView"

    },
    "SharedItemsTableView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedItemsTableView[] = {

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

void SharedItemsTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SharedItemsTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_SharedItemsTableView.data,
    qt_meta_data_SharedItemsTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SharedItemsTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedItemsTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SharedItemsTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int SharedItemsTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SharedItemsTableModel_t {
    QByteArrayData data[11];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedItemsTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedItemsTableModel_t qt_meta_stringdata_SharedItemsTableModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SharedItemsTableModel"
QT_MOC_LITERAL(1, 22, 15), // "updateShareItem"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "group_id"
QT_MOC_LITERAL(4, 48, 15), // "SharePermission"
QT_MOC_LITERAL(5, 64, 10), // "permission"
QT_MOC_LITERAL(6, 75, 11), // "SeafileUser"
QT_MOC_LITERAL(7, 87, 4), // "user"
QT_MOC_LITERAL(8, 92, 15), // "removeShareItem"
QT_MOC_LITERAL(9, 108, 8), // "onResize"
QT_MOC_LITERAL(10, 117, 4) // "size"

    },
    "SharedItemsTableModel\0updateShareItem\0"
    "\0group_id\0SharePermission\0permission\0"
    "SeafileUser\0user\0removeShareItem\0"
    "onResize\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedItemsTableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       1,    2,   44,    2, 0x06 /* Public */,
       8,    2,   49,    2, 0x06 /* Public */,
       8,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4,    7,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 4,    7,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,   10,

       0        // eod
};

void SharedItemsTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SharedItemsTableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateShareItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 1: _t->updateShareItem((*reinterpret_cast< const SeafileUser(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 2: _t->removeShareItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 3: _t->removeShareItem((*reinterpret_cast< const SeafileUser(*)>(_a[1])),(*reinterpret_cast< SharePermission(*)>(_a[2]))); break;
        case 4: _t->onResize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SharedItemsTableModel::*)(int , SharePermission );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SharedItemsTableModel::updateShareItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SharedItemsTableModel::*)(const SeafileUser & , SharePermission );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SharedItemsTableModel::updateShareItem)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SharedItemsTableModel::*)(int , SharePermission );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SharedItemsTableModel::removeShareItem)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SharedItemsTableModel::*)(const SeafileUser & , SharePermission );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SharedItemsTableModel::removeShareItem)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SharedItemsTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_SharedItemsTableModel.data,
    qt_meta_data_SharedItemsTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SharedItemsTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedItemsTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SharedItemsTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int SharedItemsTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SharedItemsTableModel::updateShareItem(int _t1, SharePermission _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SharedItemsTableModel::updateShareItem(const SeafileUser & _t1, SharePermission _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SharedItemsTableModel::removeShareItem(int _t1, SharePermission _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SharedItemsTableModel::removeShareItem(const SeafileUser & _t1, SharePermission _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_SharedItemDelegate_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SharedItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SharedItemDelegate_t qt_meta_stringdata_SharedItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SharedItemDelegate"
QT_MOC_LITERAL(1, 19, 21), // "oncurrentIndexChanged"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "SharedItemDelegate\0oncurrentIndexChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SharedItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SharedItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SharedItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->oncurrentIndexChanged(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SharedItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_SharedItemDelegate.data,
    qt_meta_data_SharedItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SharedItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SharedItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SharedItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int SharedItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
