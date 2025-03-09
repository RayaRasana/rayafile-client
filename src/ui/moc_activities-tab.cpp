/****************************************************************************
** Meta object code from reading C++ file 'activities-tab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "activities-tab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activities-tab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ActivitiesTab_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActivitiesTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActivitiesTab_t qt_meta_stringdata_ActivitiesTab = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ActivitiesTab"
QT_MOC_LITERAL(1, 14, 7), // "refresh"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "refreshEvents"
QT_MOC_LITERAL(4, 37, 22), // "std::vector<SeafEvent>"
QT_MOC_LITERAL(5, 60, 6), // "events"
QT_MOC_LITERAL(6, 67, 15), // "is_loading_more"
QT_MOC_LITERAL(7, 83, 8), // "has_more"
QT_MOC_LITERAL(8, 92, 13), // "refreshFailed"
QT_MOC_LITERAL(9, 106, 8), // "ApiError"
QT_MOC_LITERAL(10, 115, 5), // "error"
QT_MOC_LITERAL(11, 121, 14) // "loadMoreEvents"

    },
    "ActivitiesTab\0refresh\0\0refreshEvents\0"
    "std::vector<SeafEvent>\0events\0"
    "is_loading_more\0has_more\0refreshFailed\0"
    "ApiError\0error\0loadMoreEvents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActivitiesTab[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    3,   35,    2, 0x08 /* Private */,
       8,    1,   42,    2, 0x08 /* Private */,
      11,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void ActivitiesTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActivitiesTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->refreshEvents((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->refreshFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 3: _t->loadMoreEvents(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ActivitiesTab::staticMetaObject = { {
    QMetaObject::SuperData::link<TabView::staticMetaObject>(),
    qt_meta_stringdata_ActivitiesTab.data,
    qt_meta_data_ActivitiesTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ActivitiesTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActivitiesTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ActivitiesTab.stringdata0))
        return static_cast<void*>(this);
    return TabView::qt_metacast(_clname);
}

int ActivitiesTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabView::qt_metacall(_c, _id, _a);
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
