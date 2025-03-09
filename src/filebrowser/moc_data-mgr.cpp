/****************************************************************************
** Meta object code from reading C++ file 'data-mgr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "data-mgr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data-mgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataManager_t {
    QByteArrayData data[79];
    char stringdata0[1514];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataManager_t qt_meta_stringdata_DataManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DataManager"
QT_MOC_LITERAL(1, 12, 14), // "aboutToDestroy"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 17), // "getDirentsSuccess"
QT_MOC_LITERAL(4, 46, 16), // "current_readonly"
QT_MOC_LITERAL(5, 63, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(6, 81, 7), // "dirents"
QT_MOC_LITERAL(7, 89, 7), // "repo_id"
QT_MOC_LITERAL(8, 97, 16), // "getDirentsFailed"
QT_MOC_LITERAL(9, 114, 8), // "ApiError"
QT_MOC_LITERAL(10, 123, 5), // "error"
QT_MOC_LITERAL(11, 129, 22), // "createDirectorySuccess"
QT_MOC_LITERAL(12, 152, 4), // "path"
QT_MOC_LITERAL(13, 157, 21), // "createDirectoryFailed"
QT_MOC_LITERAL(14, 179, 15), // "lockFileSuccess"
QT_MOC_LITERAL(15, 195, 4), // "lock"
QT_MOC_LITERAL(16, 200, 14), // "lockFileFailed"
QT_MOC_LITERAL(17, 215, 19), // "renameDirentSuccess"
QT_MOC_LITERAL(18, 235, 8), // "new_name"
QT_MOC_LITERAL(19, 244, 18), // "renameDirentFailed"
QT_MOC_LITERAL(20, 263, 19), // "removeDirentSuccess"
QT_MOC_LITERAL(21, 283, 18), // "removeDirentFailed"
QT_MOC_LITERAL(22, 302, 20), // "removeDirentsSuccess"
QT_MOC_LITERAL(23, 323, 11), // "parent_path"
QT_MOC_LITERAL(24, 335, 9), // "filenames"
QT_MOC_LITERAL(25, 345, 19), // "removeDirentsFailed"
QT_MOC_LITERAL(26, 365, 21), // "sigShareDirentSuccess"
QT_MOC_LITERAL(27, 387, 4), // "link"
QT_MOC_LITERAL(28, 392, 9), // "repo_path"
QT_MOC_LITERAL(29, 402, 17), // "shareDirentFailed"
QT_MOC_LITERAL(30, 420, 18), // "copyDirentsSuccess"
QT_MOC_LITERAL(31, 439, 11), // "dst_repo_id"
QT_MOC_LITERAL(32, 451, 17), // "copyDirentsFailed"
QT_MOC_LITERAL(33, 469, 18), // "moveDirentsSuccess"
QT_MOC_LITERAL(34, 488, 17), // "moveDirentsFailed"
QT_MOC_LITERAL(35, 506, 20), // "createSubrepoSuccess"
QT_MOC_LITERAL(36, 527, 10), // "ServerRepo"
QT_MOC_LITERAL(37, 538, 4), // "repo"
QT_MOC_LITERAL(38, 543, 19), // "createSubrepoFailed"
QT_MOC_LITERAL(39, 563, 19), // "onGetDirentsSuccess"
QT_MOC_LITERAL(40, 583, 20), // "onFileUploadFinished"
QT_MOC_LITERAL(41, 604, 7), // "success"
QT_MOC_LITERAL(42, 612, 22), // "onFileDownloadFinished"
QT_MOC_LITERAL(43, 635, 15), // "onGetRepoFailed"
QT_MOC_LITERAL(44, 651, 16), // "onGetRepoSuccess"
QT_MOC_LITERAL(45, 668, 7), // "file_id"
QT_MOC_LITERAL(46, 676, 10), // "local_path"
QT_MOC_LITERAL(47, 687, 24), // "onCreateDirectorySuccess"
QT_MOC_LITERAL(48, 712, 17), // "onLockFileSuccess"
QT_MOC_LITERAL(49, 730, 21), // "onRenameDirentSuccess"
QT_MOC_LITERAL(50, 752, 21), // "onRemoveDirentSuccess"
QT_MOC_LITERAL(51, 774, 22), // "onRemoveDirentsSuccess"
QT_MOC_LITERAL(52, 797, 20), // "onCopyDirentsSuccess"
QT_MOC_LITERAL(53, 818, 19), // "onCopyDirentsFailed"
QT_MOC_LITERAL(54, 838, 20), // "onMoveDirentsSuccess"
QT_MOC_LITERAL(55, 859, 19), // "onMoveDirentsFailed"
QT_MOC_LITERAL(56, 879, 22), // "onCreateSubrepoSuccess"
QT_MOC_LITERAL(57, 902, 10), // "new_repoid"
QT_MOC_LITERAL(58, 913, 29), // "onCreateSubrepoRefreshSuccess"
QT_MOC_LITERAL(59, 943, 8), // "new_repo"
QT_MOC_LITERAL(60, 952, 16), // "onAccountChanged"
QT_MOC_LITERAL(61, 969, 22), // "slotShareDirectSuccess"
QT_MOC_LITERAL(62, 992, 32), // "slotAsyncCopyMutipleItemsSuccess"
QT_MOC_LITERAL(63, 1025, 7), // "task_id"
QT_MOC_LITERAL(64, 1033, 31), // "slotAsyncCopyMutipleItemsFailed"
QT_MOC_LITERAL(65, 1065, 19), // "asyncCopyOneItemApi"
QT_MOC_LITERAL(66, 1085, 27), // "slotAsyncCopyOneItemSuccess"
QT_MOC_LITERAL(67, 1113, 26), // "slotAsyncCopyOneItemFailed"
QT_MOC_LITERAL(68, 1140, 31), // "slotQueryAsyncCopyOperaProgress"
QT_MOC_LITERAL(69, 1172, 42), // "slotQueryAsyncCopyOperationPr..."
QT_MOC_LITERAL(70, 1215, 41), // "slotQueryAsyncCopyOperationPr..."
QT_MOC_LITERAL(71, 1257, 32), // "slotAsyncMoveMutipleItemsSuccess"
QT_MOC_LITERAL(72, 1290, 31), // "slotAsyncMoveMutipleItemsFailed"
QT_MOC_LITERAL(73, 1322, 19), // "asyncMoveOneItemApi"
QT_MOC_LITERAL(74, 1342, 27), // "slotAsyncMoveOneItemSuccess"
QT_MOC_LITERAL(75, 1370, 26), // "slotAsyncMoveOneItemFailed"
QT_MOC_LITERAL(76, 1397, 31), // "slotQueryAsyncMoveOperaProgress"
QT_MOC_LITERAL(77, 1429, 42), // "slotQueryAsyncMoveOperationPr..."
QT_MOC_LITERAL(78, 1472, 41) // "slotQueryAsyncMoveOperationPr..."

    },
    "DataManager\0aboutToDestroy\0\0"
    "getDirentsSuccess\0current_readonly\0"
    "QList<SeafDirent>\0dirents\0repo_id\0"
    "getDirentsFailed\0ApiError\0error\0"
    "createDirectorySuccess\0path\0"
    "createDirectoryFailed\0lockFileSuccess\0"
    "lock\0lockFileFailed\0renameDirentSuccess\0"
    "new_name\0renameDirentFailed\0"
    "removeDirentSuccess\0removeDirentFailed\0"
    "removeDirentsSuccess\0parent_path\0"
    "filenames\0removeDirentsFailed\0"
    "sigShareDirentSuccess\0link\0repo_path\0"
    "shareDirentFailed\0copyDirentsSuccess\0"
    "dst_repo_id\0copyDirentsFailed\0"
    "moveDirentsSuccess\0moveDirentsFailed\0"
    "createSubrepoSuccess\0ServerRepo\0repo\0"
    "createSubrepoFailed\0onGetDirentsSuccess\0"
    "onFileUploadFinished\0success\0"
    "onFileDownloadFinished\0onGetRepoFailed\0"
    "onGetRepoSuccess\0file_id\0local_path\0"
    "onCreateDirectorySuccess\0onLockFileSuccess\0"
    "onRenameDirentSuccess\0onRemoveDirentSuccess\0"
    "onRemoveDirentsSuccess\0onCopyDirentsSuccess\0"
    "onCopyDirentsFailed\0onMoveDirentsSuccess\0"
    "onMoveDirentsFailed\0onCreateSubrepoSuccess\0"
    "new_repoid\0onCreateSubrepoRefreshSuccess\0"
    "new_repo\0onAccountChanged\0"
    "slotShareDirectSuccess\0"
    "slotAsyncCopyMutipleItemsSuccess\0"
    "task_id\0slotAsyncCopyMutipleItemsFailed\0"
    "asyncCopyOneItemApi\0slotAsyncCopyOneItemSuccess\0"
    "slotAsyncCopyOneItemFailed\0"
    "slotQueryAsyncCopyOperaProgress\0"
    "slotQueryAsyncCopyOperationProgressSuccess\0"
    "slotQueryAsyncCopyOperationProgressFailed\0"
    "slotAsyncMoveMutipleItemsSuccess\0"
    "slotAsyncMoveMutipleItemsFailed\0"
    "asyncMoveOneItemApi\0slotAsyncMoveOneItemSuccess\0"
    "slotAsyncMoveOneItemFailed\0"
    "slotQueryAsyncMoveOperaProgress\0"
    "slotQueryAsyncMoveOperationProgressSuccess\0"
    "slotQueryAsyncMoveOperationProgressFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x06 /* Public */,
       3,    3,  290,    2, 0x06 /* Public */,
       8,    2,  297,    2, 0x06 /* Public */,
      11,    2,  302,    2, 0x06 /* Public */,
      13,    1,  307,    2, 0x06 /* Public */,
      14,    3,  310,    2, 0x06 /* Public */,
      16,    1,  317,    2, 0x06 /* Public */,
      17,    3,  320,    2, 0x06 /* Public */,
      19,    1,  327,    2, 0x06 /* Public */,
      20,    2,  330,    2, 0x06 /* Public */,
      21,    1,  335,    2, 0x06 /* Public */,
      22,    3,  338,    2, 0x06 /* Public */,
      25,    1,  345,    2, 0x06 /* Public */,
      26,    3,  348,    2, 0x06 /* Public */,
      29,    1,  355,    2, 0x06 /* Public */,
      30,    1,  358,    2, 0x06 /* Public */,
      32,    1,  361,    2, 0x06 /* Public */,
      33,    1,  364,    2, 0x06 /* Public */,
      34,    1,  367,    2, 0x06 /* Public */,
      35,    2,  370,    2, 0x06 /* Public */,
      38,    1,  375,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    3,  378,    2, 0x08 /* Private */,
      40,    1,  385,    2, 0x08 /* Private */,
      42,    1,  388,    2, 0x08 /* Private */,
      43,    1,  391,    2, 0x08 /* Private */,
      44,    5,  394,    2, 0x08 /* Private */,
      47,    1,  405,    2, 0x08 /* Private */,
      48,    1,  408,    2, 0x08 /* Private */,
      49,    1,  411,    2, 0x08 /* Private */,
      50,    1,  414,    2, 0x08 /* Private */,
      51,    1,  417,    2, 0x08 /* Private */,
      52,    1,  420,    2, 0x08 /* Private */,
      53,    1,  423,    2, 0x08 /* Private */,
      54,    1,  426,    2, 0x08 /* Private */,
      55,    1,  429,    2, 0x08 /* Private */,
      56,    1,  432,    2, 0x08 /* Private */,
      58,    1,  435,    2, 0x08 /* Private */,
      60,    0,  438,    2, 0x08 /* Private */,
      61,    1,  439,    2, 0x08 /* Private */,
      62,    1,  442,    2, 0x0a /* Public */,
      64,    1,  445,    2, 0x0a /* Public */,
      65,    0,  448,    2, 0x0a /* Public */,
      66,    1,  449,    2, 0x0a /* Public */,
      67,    1,  452,    2, 0x0a /* Public */,
      68,    0,  455,    2, 0x0a /* Public */,
      69,    0,  456,    2, 0x0a /* Public */,
      70,    1,  457,    2, 0x0a /* Public */,
      71,    1,  460,    2, 0x0a /* Public */,
      72,    1,  463,    2, 0x0a /* Public */,
      73,    0,  466,    2, 0x0a /* Public */,
      74,    1,  467,    2, 0x0a /* Public */,
      75,    1,  470,    2, 0x0a /* Public */,
      76,    0,  473,    2, 0x0a /* Public */,
      77,    0,  474,    2, 0x0a /* Public */,
      78,    1,  475,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5, QMetaType::QString,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   12,   15,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   18,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   23,   24,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   27,    7,   28,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   37,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5, QMetaType::QString,    4,    6,    7,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::Bool,   41,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   37,    7,   12,   45,   46,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void, 0x80000000 | 36,   59,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void DataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToDestroy(); break;
        case 1: _t->getDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->getDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->createDirectorySuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->createDirectoryFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 5: _t->lockFileSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->lockFileFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 7: _t->renameDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->renameDirentFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 9: _t->removeDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->removeDirentFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 11: _t->removeDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->removeDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 13: _t->sigShareDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->shareDirentFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 15: _t->copyDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->copyDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 17: _t->moveDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->moveDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 19: _t->createSubrepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->createSubrepoFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 21: _t->onGetDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 22: _t->onFileUploadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->onFileDownloadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->onGetRepoFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 25: _t->onGetRepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 26: _t->onCreateDirectorySuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->onLockFileSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->onRenameDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->onRemoveDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->onRemoveDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->onCopyDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->onCopyDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 33: _t->onMoveDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->onMoveDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 35: _t->onCreateSubrepoSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->onCreateSubrepoRefreshSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1]))); break;
        case 37: _t->onAccountChanged(); break;
        case 38: _t->slotShareDirectSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->slotAsyncCopyMutipleItemsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->slotAsyncCopyMutipleItemsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 41: _t->asyncCopyOneItemApi(); break;
        case 42: _t->slotAsyncCopyOneItemSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->slotAsyncCopyOneItemFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 44: _t->slotQueryAsyncCopyOperaProgress(); break;
        case 45: _t->slotQueryAsyncCopyOperationProgressSuccess(); break;
        case 46: _t->slotQueryAsyncCopyOperationProgressFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 47: _t->slotAsyncMoveMutipleItemsSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->slotAsyncMoveMutipleItemsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 49: _t->asyncMoveOneItemApi(); break;
        case 50: _t->slotAsyncMoveOneItemSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->slotAsyncMoveOneItemFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 52: _t->slotQueryAsyncMoveOperaProgress(); break;
        case 53: _t->slotQueryAsyncMoveOperationProgressSuccess(); break;
        case 54: _t->slotQueryAsyncMoveOperationProgressFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
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
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<SeafDirent> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::aboutToDestroy)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(bool , const QList<SeafDirent> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::getDirentsSuccess)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::getDirentsFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::createDirectorySuccess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::createDirectoryFailed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::lockFileSuccess)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::lockFileFailed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::renameDirentSuccess)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::renameDirentFailed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::removeDirentSuccess)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::removeDirentFailed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::removeDirentsSuccess)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::removeDirentsFailed)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::sigShareDirentSuccess)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::shareDirentFailed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::copyDirentsSuccess)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::copyDirentsFailed)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::moveDirentsSuccess)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::moveDirentsFailed)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ServerRepo & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::createSubrepoSuccess)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (DataManager::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManager::createSubrepoFailed)) {
                *result = 20;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataManager.data,
    qt_meta_data_DataManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void DataManager::aboutToDestroy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataManager::getDirentsSuccess(bool _t1, const QList<SeafDirent> & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataManager::getDirentsFailed(const ApiError & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataManager::createDirectorySuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataManager::createDirectoryFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataManager::lockFileSuccess(const QString & _t1, bool _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataManager::lockFileFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataManager::renameDirentSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataManager::renameDirentFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DataManager::removeDirentSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DataManager::removeDirentFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DataManager::removeDirentsSuccess(const QString & _t1, const QStringList & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DataManager::removeDirentsFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DataManager::sigShareDirentSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DataManager::shareDirentFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DataManager::copyDirentsSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DataManager::copyDirentsFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DataManager::moveDirentsSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DataManager::moveDirentsFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void DataManager::createSubrepoSuccess(const ServerRepo & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void DataManager::createSubrepoFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
