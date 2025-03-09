/****************************************************************************
** Meta object code from reading C++ file 'avatar-service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "avatar-service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatar-service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarService_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarService_t qt_meta_stringdata_AvatarService = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AvatarService"
QT_MOC_LITERAL(1, 14, 13), // "avatarUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "email"
QT_MOC_LITERAL(4, 35, 6), // "avatar"
QT_MOC_LITERAL(5, 42, 18), // "onGetAvatarSuccess"
QT_MOC_LITERAL(6, 61, 3), // "img"
QT_MOC_LITERAL(7, 65, 17), // "onGetAvatarFailed"
QT_MOC_LITERAL(8, 83, 8), // "ApiError"
QT_MOC_LITERAL(9, 92, 5), // "error"
QT_MOC_LITERAL(10, 98, 20), // "checkPendingRequests"
QT_MOC_LITERAL(11, 119, 16) // "onAccountChanged"

    },
    "AvatarService\0avatarUpdated\0\0email\0"
    "avatar\0onGetAvatarSuccess\0img\0"
    "onGetAvatarFailed\0ApiError\0error\0"
    "checkPendingRequests\0onAccountChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   44,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,
      10,    0,   50,    2, 0x08 /* Private */,
      11,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AvatarService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvatarService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avatarUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->onGetAvatarSuccess((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->onGetAvatarFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 3: _t->checkPendingRequests(); break;
        case 4: _t->onAccountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarService::*)(const QString & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarService::avatarUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AvatarService.data,
    qt_meta_data_AvatarService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AvatarService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AvatarService::avatarUpdated(const QString & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
