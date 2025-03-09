/****************************************************************************
** Meta object code from reading C++ file 'search-tab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "search-tab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'search-tab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchTab_t {
    QByteArrayData data[19];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchTab_t qt_meta_stringdata_SearchTab = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SearchTab"
QT_MOC_LITERAL(1, 10, 7), // "refresh"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "doSearch"
QT_MOC_LITERAL(4, 28, 7), // "keyword"
QT_MOC_LITERAL(5, 36, 12), // "doRealSearch"
QT_MOC_LITERAL(6, 49, 9), // "load_more"
QT_MOC_LITERAL(7, 59, 21), // "loadMoreSearchResults"
QT_MOC_LITERAL(8, 81, 15), // "onDoubleClicked"
QT_MOC_LITERAL(9, 97, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 109, 5), // "index"
QT_MOC_LITERAL(11, 115, 15), // "onSearchSuccess"
QT_MOC_LITERAL(12, 131, 29), // "std::vector<FileSearchResult>"
QT_MOC_LITERAL(13, 161, 7), // "results"
QT_MOC_LITERAL(14, 169, 15), // "is_loading_more"
QT_MOC_LITERAL(15, 185, 8), // "has_more"
QT_MOC_LITERAL(16, 194, 14), // "onSearchFailed"
QT_MOC_LITERAL(17, 209, 8), // "ApiError"
QT_MOC_LITERAL(18, 218, 5) // "error"

    },
    "SearchTab\0refresh\0\0doSearch\0keyword\0"
    "doRealSearch\0load_more\0loadMoreSearchResults\0"
    "onDoubleClicked\0QModelIndex\0index\0"
    "onSearchSuccess\0std::vector<FileSearchResult>\0"
    "results\0is_loading_more\0has_more\0"
    "onSearchFailed\0ApiError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchTab[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       5,    0,   61,    2, 0x28 /* Private | MethodCloned */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
      11,    3,   66,    2, 0x08 /* Private */,
      16,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool, QMetaType::Bool,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void SearchTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->doSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->doRealSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doRealSearch(); break;
        case 4: _t->loadMoreSearchResults(); break;
        case 5: _t->onDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->onSearchSuccess((*reinterpret_cast< const std::vector<FileSearchResult>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->onSearchFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchTab::staticMetaObject = { {
    QMetaObject::SuperData::link<TabView::staticMetaObject>(),
    qt_meta_stringdata_SearchTab.data,
    qt_meta_data_SearchTab,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchTab.stringdata0))
        return static_cast<void*>(this);
    return TabView::qt_metacast(_clname);
}

int SearchTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TabView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
