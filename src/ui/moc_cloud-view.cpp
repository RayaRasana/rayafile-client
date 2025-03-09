/****************************************************************************
** Meta object code from reading C++ file 'cloud-view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "cloud-view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloud-view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CloudView_t {
    QByteArrayData data[19];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloudView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloudView_t qt_meta_stringdata_CloudView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CloudView"
QT_MOC_LITERAL(1, 10, 20), // "showCloneTasksDialog"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "refreshStatusBar"
QT_MOC_LITERAL(4, 49, 22), // "showServerStatusDialog"
QT_MOC_LITERAL(5, 72, 16), // "onRefreshClicked"
QT_MOC_LITERAL(6, 89, 18), // "onSortOrderUpdated"
QT_MOC_LITERAL(7, 108, 20), // "onMinimizeBtnClicked"
QT_MOC_LITERAL(8, 129, 17), // "onCloseBtnClicked"
QT_MOC_LITERAL(9, 147, 18), // "chooseFolderToSync"
QT_MOC_LITERAL(10, 166, 16), // "onAccountChanged"
QT_MOC_LITERAL(11, 183, 12), // "onTabChanged"
QT_MOC_LITERAL(12, 196, 5), // "index"
QT_MOC_LITERAL(13, 202, 19), // "refreshServerStatus"
QT_MOC_LITERAL(14, 222, 19), // "onServerLogoFetched"
QT_MOC_LITERAL(15, 242, 3), // "url"
QT_MOC_LITERAL(16, 246, 20), // "onAccountInfoUpdated"
QT_MOC_LITERAL(17, 267, 7), // "Account"
QT_MOC_LITERAL(18, 275, 7) // "account"

    },
    "CloudView\0showCloneTasksDialog\0\0"
    "refreshStatusBar\0showServerStatusDialog\0"
    "onRefreshClicked\0onSortOrderUpdated\0"
    "onMinimizeBtnClicked\0onCloseBtnClicked\0"
    "chooseFolderToSync\0onAccountChanged\0"
    "onTabChanged\0index\0refreshServerStatus\0"
    "onServerLogoFetched\0url\0onAccountInfoUpdated\0"
    "Account\0account"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloudView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void CloudView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CloudView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showCloneTasksDialog(); break;
        case 1: _t->refreshStatusBar(); break;
        case 2: _t->showServerStatusDialog(); break;
        case 3: _t->onRefreshClicked(); break;
        case 4: _t->onSortOrderUpdated(); break;
        case 5: _t->onMinimizeBtnClicked(); break;
        case 6: _t->onCloseBtnClicked(); break;
        case 7: _t->chooseFolderToSync(); break;
        case 8: _t->onAccountChanged(); break;
        case 9: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->refreshServerStatus(); break;
        case 11: _t->onServerLogoFetched((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 12: _t->onAccountInfoUpdated((*reinterpret_cast< const Account(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CloudView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CloudView.data,
    qt_meta_data_CloudView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CloudView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloudView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloudView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::CloudView"))
        return static_cast< Ui::CloudView*>(this);
    return QWidget::qt_metacast(_clname);
}

int CloudView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
