/****************************************************************************
** Meta object code from reading C++ file 'rayafile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "rayafile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rayafile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RayaFileApplet_t {
    QByteArrayData data[7];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RayaFileApplet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RayaFileApplet_t qt_meta_stringdata_RayaFileApplet = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RayaFileApplet"
QT_MOC_LITERAL(1, 15, 15), // "onDaemonStarted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "onDaemonRestarted"
QT_MOC_LITERAL(4, 50, 15), // "checkInitVDrive"
QT_MOC_LITERAL(5, 66, 30), // "updateReposPropertyForHttpSync"
QT_MOC_LITERAL(6, 97, 13) // "onAboutToQuit"

    },
    "RayaFileApplet\0onDaemonStarted\0\0"
    "onDaemonRestarted\0checkInitVDrive\0"
    "updateReposPropertyForHttpSync\0"
    "onAboutToQuit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RayaFileApplet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RayaFileApplet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RayaFileApplet *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDaemonStarted(); break;
        case 1: _t->onDaemonRestarted(); break;
        case 2: _t->checkInitVDrive(); break;
        case 3: _t->updateReposPropertyForHttpSync(); break;
        case 4: _t->onAboutToQuit(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject RayaFileApplet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RayaFileApplet.data,
    qt_meta_data_RayaFileApplet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RayaFileApplet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RayaFileApplet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RayaFileApplet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RayaFileApplet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
