/****************************************************************************
** Meta object code from reading C++ file 'repos-tab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "repos-tab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repos-tab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReposTab_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReposTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReposTab_t qt_meta_stringdata_ReposTab = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ReposTab"
QT_MOC_LITERAL(1, 9, 7), // "refresh"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "refreshRepos"
QT_MOC_LITERAL(4, 31, 23), // "std::vector<ServerRepo>"
QT_MOC_LITERAL(5, 55, 5), // "repos"
QT_MOC_LITERAL(6, 61, 18), // "refreshReposFailed"
QT_MOC_LITERAL(7, 80, 8), // "ApiError"
QT_MOC_LITERAL(8, 89, 5), // "error"
QT_MOC_LITERAL(9, 95, 19), // "onFilterTextChanged"
QT_MOC_LITERAL(10, 115, 4) // "text"

    },
    "ReposTab\0refresh\0\0refreshRepos\0"
    "std::vector<ServerRepo>\0repos\0"
    "refreshReposFailed\0ApiError\0error\0"
    "onFilterTextChanged\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReposTab[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       6,    1,   38,    2, 0x08 /* Private */,
       9,    1,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void ReposTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReposTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->refreshRepos((*reinterpret_cast< const std::vector<ServerRepo>(*)>(_a[1]))); break;
        case 2: _t->refreshReposFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 3: _t->onFilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ReposTab::staticMetaObject = { {
    QMetaObject::SuperData::link<TabView::staticMetaObject>(),
    qt_meta_stringdata_ReposTab.data,
    qt_meta_data_ReposTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReposTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReposTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReposTab.stringdata0))
        return static_cast<void*>(this);
    return TabView::qt_metacast(_clname);
}

int ReposTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
