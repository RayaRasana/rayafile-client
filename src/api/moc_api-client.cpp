/****************************************************************************
** Meta object code from reading C++ file 'api-client.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "api-client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'api-client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeafileApiClient_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeafileApiClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeafileApiClient_t qt_meta_stringdata_SeafileApiClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SeafileApiClient"
QT_MOC_LITERAL(1, 17, 14), // "requestSuccess"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "QNetworkReply&"
QT_MOC_LITERAL(4, 48, 5), // "reply"
QT_MOC_LITERAL(5, 54, 13), // "requestFailed"
QT_MOC_LITERAL(6, 68, 4), // "code"
QT_MOC_LITERAL(7, 73, 12), // "networkError"
QT_MOC_LITERAL(8, 86, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 114, 5), // "error"
QT_MOC_LITERAL(10, 120, 12), // "error_string"
QT_MOC_LITERAL(11, 133, 19), // "httpRequestFinished"
QT_MOC_LITERAL(12, 153, 11), // "onSslErrors"
QT_MOC_LITERAL(13, 165, 16), // "QList<QSslError>"
QT_MOC_LITERAL(14, 182, 6), // "errors"
QT_MOC_LITERAL(15, 189, 7) // "doAbort"

    },
    "SeafileApiClient\0requestSuccess\0\0"
    "QNetworkReply&\0reply\0requestFailed\0"
    "code\0networkError\0QNetworkReply::NetworkError\0"
    "error\0error_string\0httpRequestFinished\0"
    "onSslErrors\0QList<QSslError>\0errors\0"
    "doAbort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeafileApiClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   55,    2, 0x08 /* Private */,
      12,    1,   56,    2, 0x08 /* Private */,
      15,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void SeafileApiClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SeafileApiClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestSuccess((*reinterpret_cast< QNetworkReply(*)>(_a[1]))); break;
        case 1: _t->requestFailed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->networkError((*reinterpret_cast< const QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->httpRequestFinished(); break;
        case 4: _t->onSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 5: _t->doAbort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SeafileApiClient::*)(QNetworkReply & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeafileApiClient::requestSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SeafileApiClient::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeafileApiClient::requestFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SeafileApiClient::*)(const QNetworkReply::NetworkError & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SeafileApiClient::networkError)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeafileApiClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SeafileApiClient.data,
    qt_meta_data_SeafileApiClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeafileApiClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeafileApiClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeafileApiClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SeafileApiClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SeafileApiClient::requestSuccess(QNetworkReply & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SeafileApiClient::requestFailed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SeafileApiClient::networkError(const QNetworkReply::NetworkError & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
