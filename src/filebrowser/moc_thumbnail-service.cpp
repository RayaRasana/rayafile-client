/****************************************************************************
** Meta object code from reading C++ file 'thumbnail-service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "thumbnail-service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thumbnail-service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThumbnailService_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThumbnailService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThumbnailService_t qt_meta_stringdata_ThumbnailService = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ThumbnailService"
QT_MOC_LITERAL(1, 17, 16), // "thumbnailUpdated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "thumbnail"
QT_MOC_LITERAL(4, 45, 4), // "path"
QT_MOC_LITERAL(5, 50, 21), // "onGetThumbnailSuccess"
QT_MOC_LITERAL(6, 72, 20), // "onGetThumbnailFailed"
QT_MOC_LITERAL(7, 93, 8), // "ApiError"
QT_MOC_LITERAL(8, 102, 5), // "error"
QT_MOC_LITERAL(9, 108, 20) // "checkPendingRequests"

    },
    "ThumbnailService\0thumbnailUpdated\0\0"
    "thumbnail\0path\0onGetThumbnailSuccess\0"
    "onGetThumbnailFailed\0ApiError\0error\0"
    "checkPendingRequests"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThumbnailService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x08 /* Private */,
       6,    1,   42,    2, 0x08 /* Private */,
       9,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void ThumbnailService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThumbnailService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->thumbnailUpdated((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onGetThumbnailSuccess((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 2: _t->onGetThumbnailFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 3: _t->checkPendingRequests(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThumbnailService::*)(const QPixmap & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThumbnailService::thumbnailUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ThumbnailService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ThumbnailService.data,
    qt_meta_data_ThumbnailService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThumbnailService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThumbnailService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThumbnailService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ThumbnailService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ThumbnailService::thumbnailUpdated(const QPixmap & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
