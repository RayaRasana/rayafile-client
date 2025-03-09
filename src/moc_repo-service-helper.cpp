/****************************************************************************
** Meta object code from reading C++ file 'repo-service-helper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "repo-service-helper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repo-service-helper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileDownloadHelper_t {
    QByteArrayData data[9];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDownloadHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDownloadHelper_t qt_meta_stringdata_FileDownloadHelper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FileDownloadHelper"
QT_MOC_LITERAL(1, 19, 8), // "onCancel"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "onGetDirentsSuccess"
QT_MOC_LITERAL(4, 49, 16), // "current_readonly"
QT_MOC_LITERAL(5, 66, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(6, 84, 7), // "dirents"
QT_MOC_LITERAL(7, 92, 19), // "onGetDirentsFailure"
QT_MOC_LITERAL(8, 112, 8) // "ApiError"

    },
    "FileDownloadHelper\0onCancel\0\0"
    "onGetDirentsSuccess\0current_readonly\0"
    "QList<SeafDirent>\0dirents\0onGetDirentsFailure\0"
    "ApiError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDownloadHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    2,   30,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void FileDownloadHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDownloadHelper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCancel(); break;
        case 1: _t->onGetDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2]))); break;
        case 2: _t->onGetDirentsFailure((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafDirent> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileDownloadHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileDownloadHelper.data,
    qt_meta_data_FileDownloadHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileDownloadHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDownloadHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDownloadHelper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileDownloadHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
