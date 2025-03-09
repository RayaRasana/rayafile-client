/****************************************************************************
** Meta object code from reading C++ file 'file-table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "file-table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file-table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileTableViewDelegate_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTableViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTableViewDelegate_t qt_meta_stringdata_FileTableViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21) // "FileTableViewDelegate"

    },
    "FileTableViewDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTableViewDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FileTableViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FileTableViewDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_FileTableViewDelegate.data,
    qt_meta_data_FileTableViewDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTableViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTableViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTableViewDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int FileTableViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FileTableView_t {
    QByteArrayData data[47];
    char stringdata0[637];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTableView_t qt_meta_stringdata_FileTableView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FileTableView"
QT_MOC_LITERAL(1, 14, 13), // "direntClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "SeafDirent"
QT_MOC_LITERAL(4, 40, 6), // "dirent"
QT_MOC_LITERAL(5, 47, 12), // "direntSaveAs"
QT_MOC_LITERAL(6, 60, 24), // "QList<const SeafDirent*>"
QT_MOC_LITERAL(7, 85, 7), // "dirents"
QT_MOC_LITERAL(8, 93, 18), // "deleteLocalVersion"
QT_MOC_LITERAL(9, 112, 18), // "localVersionSaveAs"
QT_MOC_LITERAL(10, 131, 8), // "dropFile"
QT_MOC_LITERAL(11, 140, 5), // "paths"
QT_MOC_LITERAL(12, 146, 10), // "direntLock"
QT_MOC_LITERAL(13, 157, 12), // "direntRename"
QT_MOC_LITERAL(14, 170, 12), // "direntRemove"
QT_MOC_LITERAL(15, 183, 12), // "direntUpdate"
QT_MOC_LITERAL(16, 196, 11), // "direntShare"
QT_MOC_LITERAL(17, 208, 24), // "direntShareToUserOrGroup"
QT_MOC_LITERAL(18, 233, 8), // "to_group"
QT_MOC_LITERAL(19, 242, 18), // "direntShareSeafile"
QT_MOC_LITERAL(20, 261, 16), // "direntUploadLink"
QT_MOC_LITERAL(21, 278, 11), // "direntPaste"
QT_MOC_LITERAL(22, 290, 14), // "cancelDownload"
QT_MOC_LITERAL(23, 305, 16), // "syncSubdirectory"
QT_MOC_LITERAL(24, 322, 11), // "folder_name"
QT_MOC_LITERAL(25, 334, 14), // "onAboutToReset"
QT_MOC_LITERAL(26, 349, 19), // "onItemDoubleClicked"
QT_MOC_LITERAL(27, 369, 11), // "QModelIndex"
QT_MOC_LITERAL(28, 381, 5), // "index"
QT_MOC_LITERAL(29, 387, 23), // "onRetryUploadCachedFile"
QT_MOC_LITERAL(30, 411, 20), // "onDeleteLocalVersion"
QT_MOC_LITERAL(31, 432, 20), // "onLocalVersionSaveAs"
QT_MOC_LITERAL(32, 453, 8), // "onSaveAs"
QT_MOC_LITERAL(33, 462, 6), // "onLock"
QT_MOC_LITERAL(34, 469, 8), // "onRename"
QT_MOC_LITERAL(35, 478, 8), // "onRemove"
QT_MOC_LITERAL(36, 487, 7), // "onShare"
QT_MOC_LITERAL(37, 495, 15), // "onGenUploadLink"
QT_MOC_LITERAL(38, 511, 13), // "onShareToUser"
QT_MOC_LITERAL(39, 525, 14), // "onShareToGroup"
QT_MOC_LITERAL(40, 540, 14), // "onShareSeafile"
QT_MOC_LITERAL(41, 555, 8), // "onUpdate"
QT_MOC_LITERAL(42, 564, 6), // "onCopy"
QT_MOC_LITERAL(43, 571, 6), // "onMove"
QT_MOC_LITERAL(44, 578, 16), // "onCancelDownload"
QT_MOC_LITERAL(45, 595, 18), // "onSyncSubdirectory"
QT_MOC_LITERAL(46, 614, 22) // "onOpenLocalCacheFolder"

    },
    "FileTableView\0direntClicked\0\0SeafDirent\0"
    "dirent\0direntSaveAs\0QList<const SeafDirent*>\0"
    "dirents\0deleteLocalVersion\0"
    "localVersionSaveAs\0dropFile\0paths\0"
    "direntLock\0direntRename\0direntRemove\0"
    "direntUpdate\0direntShare\0"
    "direntShareToUserOrGroup\0to_group\0"
    "direntShareSeafile\0direntUploadLink\0"
    "direntPaste\0cancelDownload\0syncSubdirectory\0"
    "folder_name\0onAboutToReset\0"
    "onItemDoubleClicked\0QModelIndex\0index\0"
    "onRetryUploadCachedFile\0onDeleteLocalVersion\0"
    "onLocalVersionSaveAs\0onSaveAs\0onLock\0"
    "onRename\0onRemove\0onShare\0onGenUploadLink\0"
    "onShareToUser\0onShareToGroup\0"
    "onShareSeafile\0onUpdate\0onCopy\0onMove\0"
    "onCancelDownload\0onSyncSubdirectory\0"
    "onOpenLocalCacheFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTableView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       5,    1,  202,    2, 0x06 /* Public */,
       8,    1,  205,    2, 0x06 /* Public */,
       9,    1,  208,    2, 0x06 /* Public */,
      10,    1,  211,    2, 0x06 /* Public */,
      12,    1,  214,    2, 0x06 /* Public */,
      13,    1,  217,    2, 0x06 /* Public */,
      14,    1,  220,    2, 0x06 /* Public */,
      14,    1,  223,    2, 0x06 /* Public */,
      15,    1,  226,    2, 0x06 /* Public */,
      16,    1,  229,    2, 0x06 /* Public */,
      17,    2,  232,    2, 0x06 /* Public */,
      19,    1,  237,    2, 0x06 /* Public */,
      20,    1,  240,    2, 0x06 /* Public */,
      21,    0,  243,    2, 0x06 /* Public */,
      22,    1,  244,    2, 0x06 /* Public */,
      23,    1,  247,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      25,    0,  250,    2, 0x08 /* Private */,
      26,    1,  251,    2, 0x08 /* Private */,
      29,    0,  254,    2, 0x08 /* Private */,
      30,    0,  255,    2, 0x08 /* Private */,
      31,    0,  256,    2, 0x08 /* Private */,
      32,    0,  257,    2, 0x08 /* Private */,
      33,    0,  258,    2, 0x08 /* Private */,
      34,    0,  259,    2, 0x08 /* Private */,
      35,    0,  260,    2, 0x08 /* Private */,
      36,    0,  261,    2, 0x08 /* Private */,
      37,    0,  262,    2, 0x08 /* Private */,
      38,    0,  263,    2, 0x08 /* Private */,
      39,    0,  264,    2, 0x08 /* Private */,
      40,    0,  265,    2, 0x08 /* Private */,
      41,    0,  266,    2, 0x08 /* Private */,
      42,    0,  267,    2, 0x08 /* Private */,
      43,    0,  268,    2, 0x08 /* Private */,
      44,    0,  269,    2, 0x08 /* Private */,
      45,    0,  270,    2, 0x08 /* Private */,
      46,    0,  271,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   18,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   24,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTableView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->direntClicked((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 1: _t->direntSaveAs((*reinterpret_cast< const QList<const SeafDirent*>(*)>(_a[1]))); break;
        case 2: _t->deleteLocalVersion((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 3: _t->localVersionSaveAs((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 4: _t->dropFile((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->direntLock((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 6: _t->direntRename((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 7: _t->direntRemove((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 8: _t->direntRemove((*reinterpret_cast< const QList<const SeafDirent*>(*)>(_a[1]))); break;
        case 9: _t->direntUpdate((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 10: _t->direntShare((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 11: _t->direntShareToUserOrGroup((*reinterpret_cast< const SeafDirent(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->direntShareSeafile((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 13: _t->direntUploadLink((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 14: _t->direntPaste(); break;
        case 15: _t->cancelDownload((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 16: _t->syncSubdirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->onAboutToReset(); break;
        case 18: _t->onItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 19: _t->onRetryUploadCachedFile(); break;
        case 20: _t->onDeleteLocalVersion(); break;
        case 21: _t->onLocalVersionSaveAs(); break;
        case 22: _t->onSaveAs(); break;
        case 23: _t->onLock(); break;
        case 24: _t->onRename(); break;
        case 25: _t->onRemove(); break;
        case 26: _t->onShare(); break;
        case 27: _t->onGenUploadLink(); break;
        case 28: _t->onShareToUser(); break;
        case 29: _t->onShareToGroup(); break;
        case 30: _t->onShareSeafile(); break;
        case 31: _t->onUpdate(); break;
        case 32: _t->onCopy(); break;
        case 33: _t->onMove(); break;
        case 34: _t->onCancelDownload(); break;
        case 35: _t->onSyncSubdirectory(); break;
        case 36: _t->onOpenLocalCacheFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SeafDirent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const QList<const SeafDirent*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntSaveAs)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::deleteLocalVersion)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::localVersionSaveAs)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::dropFile)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntLock)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntRename)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntRemove)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const QList<const SeafDirent*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntRemove)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntUpdate)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntShare)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntShareToUserOrGroup)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntShareSeafile)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntUploadLink)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::direntPaste)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const SeafDirent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::cancelDownload)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FileTableView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileTableView::syncSubdirectory)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTableView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTableView::staticMetaObject>(),
    qt_meta_stringdata_FileTableView.data,
    qt_meta_data_FileTableView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTableView.stringdata0))
        return static_cast<void*>(this);
    return QTableView::qt_metacast(_clname);
}

int FileTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void FileTableView::direntClicked(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileTableView::direntSaveAs(const QList<const SeafDirent*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileTableView::deleteLocalVersion(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileTableView::localVersionSaveAs(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileTableView::dropFile(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileTableView::direntLock(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileTableView::direntRename(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void FileTableView::direntRemove(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void FileTableView::direntRemove(const QList<const SeafDirent*> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void FileTableView::direntUpdate(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void FileTableView::direntShare(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void FileTableView::direntShareToUserOrGroup(const SeafDirent & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void FileTableView::direntShareSeafile(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void FileTableView::direntUploadLink(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void FileTableView::direntPaste()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void FileTableView::cancelDownload(const SeafDirent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void FileTableView::syncSubdirectory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
struct qt_meta_stringdata_FileTableModel_t {
    QByteArrayData data[7];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTableModel_t qt_meta_stringdata_FileTableModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FileTableModel"
QT_MOC_LITERAL(1, 15, 18), // "updateDownloadInfo"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "updateFileCacheStatus"
QT_MOC_LITERAL(4, 57, 15), // "updateThumbnail"
QT_MOC_LITERAL(5, 73, 9), // "thumbnail"
QT_MOC_LITERAL(6, 83, 9) // "file_path"

    },
    "FileTableModel\0updateDownloadInfo\0\0"
    "updateFileCacheStatus\0updateThumbnail\0"
    "thumbnail\0file_path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTableModel[] = {

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
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::QString,    5,    6,

       0        // eod
};

void FileTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTableModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateDownloadInfo(); break;
        case 1: _t->updateFileCacheStatus(); break;
        case 2: _t->updateThumbnail((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileTableModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_FileTableModel.data,
    qt_meta_data_FileTableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTableModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int FileTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_FileTableSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileTableSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileTableSortFilterProxyModel_t qt_meta_stringdata_FileTableSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 29) // "FileTableSortFilterProxyModel"

    },
    "FileTableSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileTableSortFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FileTableSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FileTableSortFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FileTableSortFilterProxyModel.data,
    qt_meta_data_FileTableSortFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileTableSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileTableSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileTableSortFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int FileTableSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
