/****************************************************************************
** Meta object code from reading C++ file 'events-service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "events-service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'events-service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EventsService_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EventsService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EventsService_t qt_meta_stringdata_EventsService = {
    {
QT_MOC_LITERAL(0, 0, 13), // "EventsService"
QT_MOC_LITERAL(1, 14, 14), // "refreshSuccess"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "std::vector<SeafEvent>"
QT_MOC_LITERAL(4, 53, 6), // "events"
QT_MOC_LITERAL(5, 60, 15), // "is_loading_more"
QT_MOC_LITERAL(6, 76, 8), // "has_more"
QT_MOC_LITERAL(7, 85, 13), // "refreshFailed"
QT_MOC_LITERAL(8, 99, 8), // "ApiError"
QT_MOC_LITERAL(9, 108, 5), // "error"
QT_MOC_LITERAL(10, 114, 7), // "refresh"
QT_MOC_LITERAL(11, 122, 16), // "onRefreshSuccess"
QT_MOC_LITERAL(12, 139, 11), // "more_offset"
QT_MOC_LITERAL(13, 151, 18), // "onRefreshSuccessV2"
QT_MOC_LITERAL(14, 170, 15) // "onRefreshFailed"

    },
    "EventsService\0refreshSuccess\0\0"
    "std::vector<SeafEvent>\0events\0"
    "is_loading_more\0has_more\0refreshFailed\0"
    "ApiError\0error\0refresh\0onRefreshSuccess\0"
    "more_offset\0onRefreshSuccessV2\0"
    "onRefreshFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EventsService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   54,    2, 0x0a /* Public */,
      11,    2,   55,    2, 0x08 /* Private */,
      13,    1,   60,    2, 0x08 /* Private */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,   12,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void EventsService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EventsService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshSuccess((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->refreshFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->onRefreshSuccess((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onRefreshSuccessV2((*reinterpret_cast< const std::vector<SeafEvent>(*)>(_a[1]))); break;
        case 5: _t->onRefreshFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EventsService::*)(const std::vector<SeafEvent> & , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsService::refreshSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EventsService::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EventsService::refreshFailed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EventsService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EventsService.data,
    qt_meta_data_EventsService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EventsService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EventsService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EventsService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EventsService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EventsService::refreshSuccess(const std::vector<SeafEvent> & _t1, bool _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EventsService::refreshFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
