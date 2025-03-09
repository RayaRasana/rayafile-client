/****************************************************************************
** Meta object code from reading C++ file 'user-name-completer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "user-name-completer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user-name-completer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SeafileUserNameCompleter_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SeafileUserNameCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SeafileUserNameCompleter_t qt_meta_stringdata_SeafileUserNameCompleter = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SeafileUserNameCompleter"
QT_MOC_LITERAL(1, 25, 20), // "onSearchUsersSuccess"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 18), // "QList<SeafileUser>"
QT_MOC_LITERAL(4, 66, 8), // "contacts"
QT_MOC_LITERAL(5, 75, 19), // "onSearchUsersFailed"
QT_MOC_LITERAL(6, 95, 8), // "ApiError"
QT_MOC_LITERAL(7, 104, 5), // "error"
QT_MOC_LITERAL(8, 110, 14), // "doneCompletion"
QT_MOC_LITERAL(9, 125, 14), // "preventSuggest"
QT_MOC_LITERAL(10, 140, 11), // "autoSuggest"
QT_MOC_LITERAL(11, 152, 14), // "showCompletion"
QT_MOC_LITERAL(12, 167, 5), // "users"
QT_MOC_LITERAL(13, 173, 7), // "pattern"
QT_MOC_LITERAL(14, 181, 15), // "onAvatarUpdated"
QT_MOC_LITERAL(15, 197, 5), // "email"
QT_MOC_LITERAL(16, 203, 6) // "avatar"

    },
    "SeafileUserNameCompleter\0onSearchUsersSuccess\0"
    "\0QList<SeafileUser>\0contacts\0"
    "onSearchUsersFailed\0ApiError\0error\0"
    "doneCompletion\0preventSuggest\0autoSuggest\0"
    "showCompletion\0users\0pattern\0"
    "onAvatarUpdated\0email\0avatar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SeafileUserNameCompleter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,
      11,    2,   58,    2, 0x08 /* Private */,
      14,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QImage,   15,   16,

       0        // eod
};

void SeafileUserNameCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SeafileUserNameCompleter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSearchUsersSuccess((*reinterpret_cast< const QList<SeafileUser>(*)>(_a[1]))); break;
        case 1: _t->onSearchUsersFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 2: _t->doneCompletion(); break;
        case 3: _t->preventSuggest(); break;
        case 4: _t->autoSuggest(); break;
        case 5: _t->showCompletion((*reinterpret_cast< const QList<SeafileUser>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->onAvatarUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SeafileUserNameCompleter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SeafileUserNameCompleter.data,
    qt_meta_data_SeafileUserNameCompleter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SeafileUserNameCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SeafileUserNameCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SeafileUserNameCompleter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SeafileUserNameCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
