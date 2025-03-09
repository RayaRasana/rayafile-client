/****************************************************************************
** Meta object code from reading C++ file 'server-status-service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "server-status-service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'server-status-service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServerStatusService_t {
    QByteArrayData data[11];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerStatusService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerStatusService_t qt_meta_stringdata_ServerStatusService = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ServerStatusService"
QT_MOC_LITERAL(1, 20, 19), // "serverStatusChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "refresh"
QT_MOC_LITERAL(4, 49, 24), // "only_refresh_unconnected"
QT_MOC_LITERAL(5, 74, 18), // "refreshUnconnected"
QT_MOC_LITERAL(6, 93, 26), // "updateOnSuccessfullRequest"
QT_MOC_LITERAL(7, 120, 3), // "url"
QT_MOC_LITERAL(8, 124, 21), // "updateOnFailedRequest"
QT_MOC_LITERAL(9, 146, 19), // "onPingServerSuccess"
QT_MOC_LITERAL(10, 166, 18) // "onPingServerFailed"

    },
    "ServerStatusService\0serverStatusChanged\0"
    "\0refresh\0only_refresh_unconnected\0"
    "refreshUnconnected\0updateOnSuccessfullRequest\0"
    "url\0updateOnFailedRequest\0onPingServerSuccess\0"
    "onPingServerFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerStatusService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x0a /* Public */,
       3,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   59,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerStatusService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerStatusService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serverStatusChanged(); break;
        case 1: _t->refresh((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->refresh(); break;
        case 3: _t->refreshUnconnected(); break;
        case 4: _t->updateOnSuccessfullRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->updateOnFailedRequest((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->onPingServerSuccess(); break;
        case 7: _t->onPingServerFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerStatusService::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ServerStatusService::serverStatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServerStatusService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ServerStatusService.data,
    qt_meta_data_ServerStatusService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServerStatusService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerStatusService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerStatusService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ServerStatusService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ServerStatusService::serverStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
