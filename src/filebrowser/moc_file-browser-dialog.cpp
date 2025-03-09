/****************************************************************************
** Meta object code from reading C++ file 'file-browser-dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "file-browser-dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file-browser-dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileBrowserDialog_t {
    QByteArrayData data[99];
    char stringdata0[1604];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileBrowserDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileBrowserDialog_t qt_meta_stringdata_FileBrowserDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FileBrowserDialog"
QT_MOC_LITERAL(1, 18, 12), // "aboutToClose"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "init"
QT_MOC_LITERAL(4, 37, 19), // "onGetDirentsSuccess"
QT_MOC_LITERAL(5, 57, 16), // "current_readonly"
QT_MOC_LITERAL(6, 74, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(7, 92, 7), // "dirents"
QT_MOC_LITERAL(8, 100, 18), // "onGetDirentsFailed"
QT_MOC_LITERAL(9, 119, 8), // "ApiError"
QT_MOC_LITERAL(10, 128, 5), // "error"
QT_MOC_LITERAL(11, 134, 20), // "onMkdirButtonClicked"
QT_MOC_LITERAL(12, 155, 12), // "fetchDirents"
QT_MOC_LITERAL(13, 168, 15), // "onDirentClicked"
QT_MOC_LITERAL(14, 184, 10), // "SeafDirent"
QT_MOC_LITERAL(15, 195, 6), // "dirent"
QT_MOC_LITERAL(16, 202, 14), // "onDirentSaveAs"
QT_MOC_LITERAL(17, 217, 24), // "QList<const SeafDirent*>"
QT_MOC_LITERAL(18, 242, 9), // "onRefresh"
QT_MOC_LITERAL(19, 252, 9), // "goForward"
QT_MOC_LITERAL(20, 262, 10), // "goBackward"
QT_MOC_LITERAL(21, 273, 6), // "goHome"
QT_MOC_LITERAL(22, 280, 18), // "chooseFileToUpload"
QT_MOC_LITERAL(23, 299, 23), // "chooseDirectoryToUpload"
QT_MOC_LITERAL(24, 323, 18), // "onDownloadFinished"
QT_MOC_LITERAL(25, 342, 7), // "success"
QT_MOC_LITERAL(26, 350, 14), // "is_file_locked"
QT_MOC_LITERAL(27, 365, 16), // "onUploadFinished"
QT_MOC_LITERAL(28, 382, 17), // "uploadFileOrMkdir"
QT_MOC_LITERAL(29, 400, 18), // "uploadOrUpdateFile"
QT_MOC_LITERAL(30, 419, 4), // "path"
QT_MOC_LITERAL(31, 424, 25), // "uploadOrUpdateMutipleFile"
QT_MOC_LITERAL(32, 450, 5), // "paths"
QT_MOC_LITERAL(33, 456, 16), // "onNavigatorClick"
QT_MOC_LITERAL(34, 473, 2), // "id"
QT_MOC_LITERAL(35, 476, 15), // "onGetDirentLock"
QT_MOC_LITERAL(36, 492, 17), // "onGetDirentRename"
QT_MOC_LITERAL(37, 510, 8), // "new_name"
QT_MOC_LITERAL(38, 519, 17), // "onGetDirentRemove"
QT_MOC_LITERAL(39, 537, 16), // "onGetDirentShare"
QT_MOC_LITERAL(40, 554, 29), // "onGetDirentShareToUserOrGroup"
QT_MOC_LITERAL(41, 584, 8), // "to_group"
QT_MOC_LITERAL(42, 593, 23), // "onGetDirentShareSeafile"
QT_MOC_LITERAL(43, 617, 21), // "onGetDirentUploadLink"
QT_MOC_LITERAL(44, 639, 22), // "onGetUploadLinkSuccess"
QT_MOC_LITERAL(45, 662, 11), // "upload_link"
QT_MOC_LITERAL(46, 674, 21), // "onGetUploadLinkFailed"
QT_MOC_LITERAL(47, 696, 17), // "onGetDirentUpdate"
QT_MOC_LITERAL(48, 714, 17), // "onGetDirentsPaste"
QT_MOC_LITERAL(49, 732, 21), // "onGetSyncSubdirectory"
QT_MOC_LITERAL(50, 754, 11), // "folder_name"
QT_MOC_LITERAL(51, 766, 16), // "onCancelDownload"
QT_MOC_LITERAL(52, 783, 20), // "onDeleteLocalVersion"
QT_MOC_LITERAL(53, 804, 20), // "onLocalVersionSaveAs"
QT_MOC_LITERAL(54, 825, 24), // "onDirectoryCreateSuccess"
QT_MOC_LITERAL(55, 850, 23), // "onDirectoryCreateFailed"
QT_MOC_LITERAL(56, 874, 17), // "onFileLockSuccess"
QT_MOC_LITERAL(57, 892, 4), // "lock"
QT_MOC_LITERAL(58, 897, 16), // "onFileLockFailed"
QT_MOC_LITERAL(59, 914, 21), // "onDirentRenameSuccess"
QT_MOC_LITERAL(60, 936, 20), // "onDirentRenameFailed"
QT_MOC_LITERAL(61, 957, 21), // "onDirentRemoveSuccess"
QT_MOC_LITERAL(62, 979, 20), // "onDirentRemoveFailed"
QT_MOC_LITERAL(63, 1000, 22), // "onDirentsRemoveSuccess"
QT_MOC_LITERAL(64, 1023, 11), // "parent_path"
QT_MOC_LITERAL(65, 1035, 9), // "filenames"
QT_MOC_LITERAL(66, 1045, 21), // "onDirentsRemoveFailed"
QT_MOC_LITERAL(67, 1067, 20), // "onDirentShareSuccess"
QT_MOC_LITERAL(68, 1088, 4), // "link"
QT_MOC_LITERAL(69, 1093, 7), // "repo_id"
QT_MOC_LITERAL(70, 1101, 12), // "repo_in_path"
QT_MOC_LITERAL(71, 1114, 19), // "onDirentShareFailed"
QT_MOC_LITERAL(72, 1134, 20), // "onDirentsCopySuccess"
QT_MOC_LITERAL(73, 1155, 19), // "onDirentsCopyFailed"
QT_MOC_LITERAL(74, 1175, 20), // "onDirentsMoveSuccess"
QT_MOC_LITERAL(75, 1196, 19), // "onDirentsMoveFailed"
QT_MOC_LITERAL(76, 1216, 22), // "onCreateSubrepoSuccess"
QT_MOC_LITERAL(77, 1239, 10), // "ServerRepo"
QT_MOC_LITERAL(78, 1250, 4), // "repo"
QT_MOC_LITERAL(79, 1255, 21), // "onCreateSubrepoFailed"
QT_MOC_LITERAL(80, 1277, 17), // "onFileAutoUpdated"
QT_MOC_LITERAL(81, 1295, 20), // "fixUploadButtonStyle"
QT_MOC_LITERAL(82, 1316, 11), // "highlighted"
QT_MOC_LITERAL(83, 1328, 32), // "fixUploadButtonNonHighlightStyle"
QT_MOC_LITERAL(84, 1361, 29), // "fixUploadButtonHighlightStyle"
QT_MOC_LITERAL(85, 1391, 20), // "onAccountInfoUpdated"
QT_MOC_LITERAL(86, 1412, 8), // "doSearch"
QT_MOC_LITERAL(87, 1421, 7), // "keyword"
QT_MOC_LITERAL(88, 1429, 12), // "doRealSearch"
QT_MOC_LITERAL(89, 1442, 15), // "onSearchSuccess"
QT_MOC_LITERAL(90, 1458, 29), // "std::vector<FileSearchResult>"
QT_MOC_LITERAL(91, 1488, 7), // "results"
QT_MOC_LITERAL(92, 1496, 15), // "is_loading_more"
QT_MOC_LITERAL(93, 1512, 8), // "has_more"
QT_MOC_LITERAL(94, 1521, 14), // "onSearchFailed"
QT_MOC_LITERAL(95, 1536, 21), // "onGetSmartLinkSuccess"
QT_MOC_LITERAL(96, 1558, 10), // "smart_link"
QT_MOC_LITERAL(97, 1569, 13), // "protocol_link"
QT_MOC_LITERAL(98, 1583, 20) // "onGetSmartLinkFailed"

    },
    "FileBrowserDialog\0aboutToClose\0\0init\0"
    "onGetDirentsSuccess\0current_readonly\0"
    "QList<SeafDirent>\0dirents\0onGetDirentsFailed\0"
    "ApiError\0error\0onMkdirButtonClicked\0"
    "fetchDirents\0onDirentClicked\0SeafDirent\0"
    "dirent\0onDirentSaveAs\0QList<const SeafDirent*>\0"
    "onRefresh\0goForward\0goBackward\0goHome\0"
    "chooseFileToUpload\0chooseDirectoryToUpload\0"
    "onDownloadFinished\0success\0is_file_locked\0"
    "onUploadFinished\0uploadFileOrMkdir\0"
    "uploadOrUpdateFile\0path\0"
    "uploadOrUpdateMutipleFile\0paths\0"
    "onNavigatorClick\0id\0onGetDirentLock\0"
    "onGetDirentRename\0new_name\0onGetDirentRemove\0"
    "onGetDirentShare\0onGetDirentShareToUserOrGroup\0"
    "to_group\0onGetDirentShareSeafile\0"
    "onGetDirentUploadLink\0onGetUploadLinkSuccess\0"
    "upload_link\0onGetUploadLinkFailed\0"
    "onGetDirentUpdate\0onGetDirentsPaste\0"
    "onGetSyncSubdirectory\0folder_name\0"
    "onCancelDownload\0onDeleteLocalVersion\0"
    "onLocalVersionSaveAs\0onDirectoryCreateSuccess\0"
    "onDirectoryCreateFailed\0onFileLockSuccess\0"
    "lock\0onFileLockFailed\0onDirentRenameSuccess\0"
    "onDirentRenameFailed\0onDirentRemoveSuccess\0"
    "onDirentRemoveFailed\0onDirentsRemoveSuccess\0"
    "parent_path\0filenames\0onDirentsRemoveFailed\0"
    "onDirentShareSuccess\0link\0repo_id\0"
    "repo_in_path\0onDirentShareFailed\0"
    "onDirentsCopySuccess\0onDirentsCopyFailed\0"
    "onDirentsMoveSuccess\0onDirentsMoveFailed\0"
    "onCreateSubrepoSuccess\0ServerRepo\0"
    "repo\0onCreateSubrepoFailed\0onFileAutoUpdated\0"
    "fixUploadButtonStyle\0highlighted\0"
    "fixUploadButtonNonHighlightStyle\0"
    "fixUploadButtonHighlightStyle\0"
    "onAccountInfoUpdated\0doSearch\0keyword\0"
    "doRealSearch\0onSearchSuccess\0"
    "std::vector<FileSearchResult>\0results\0"
    "is_loading_more\0has_more\0onSearchFailed\0"
    "onGetSmartLinkSuccess\0smart_link\0"
    "protocol_link\0onGetSmartLinkFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileBrowserDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      67,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  349,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  350,    2, 0x08 /* Private */,
       4,    2,  351,    2, 0x08 /* Private */,
       8,    1,  356,    2, 0x08 /* Private */,
      11,    0,  359,    2, 0x08 /* Private */,
      12,    0,  360,    2, 0x08 /* Private */,
      13,    1,  361,    2, 0x08 /* Private */,
      16,    1,  364,    2, 0x08 /* Private */,
      18,    0,  367,    2, 0x08 /* Private */,
      19,    0,  368,    2, 0x08 /* Private */,
      20,    0,  369,    2, 0x08 /* Private */,
      21,    0,  370,    2, 0x08 /* Private */,
      22,    0,  371,    2, 0x08 /* Private */,
      23,    0,  372,    2, 0x08 /* Private */,
      24,    2,  373,    2, 0x08 /* Private */,
      24,    1,  378,    2, 0x28 /* Private | MethodCloned */,
      27,    1,  381,    2, 0x08 /* Private */,
      28,    0,  384,    2, 0x08 /* Private */,
      29,    1,  385,    2, 0x08 /* Private */,
      31,    1,  388,    2, 0x08 /* Private */,
      33,    1,  391,    2, 0x08 /* Private */,
      35,    1,  394,    2, 0x08 /* Private */,
      36,    2,  397,    2, 0x08 /* Private */,
      36,    1,  402,    2, 0x28 /* Private | MethodCloned */,
      38,    1,  405,    2, 0x08 /* Private */,
      38,    1,  408,    2, 0x08 /* Private */,
      39,    1,  411,    2, 0x08 /* Private */,
      40,    2,  414,    2, 0x08 /* Private */,
      42,    1,  419,    2, 0x08 /* Private */,
      43,    1,  422,    2, 0x08 /* Private */,
      44,    1,  425,    2, 0x08 /* Private */,
      46,    1,  428,    2, 0x08 /* Private */,
      47,    1,  431,    2, 0x08 /* Private */,
      48,    0,  434,    2, 0x08 /* Private */,
      49,    1,  435,    2, 0x08 /* Private */,
      51,    1,  438,    2, 0x08 /* Private */,
      52,    1,  441,    2, 0x08 /* Private */,
      53,    1,  444,    2, 0x08 /* Private */,
      54,    1,  447,    2, 0x08 /* Private */,
      55,    1,  450,    2, 0x08 /* Private */,
      56,    2,  453,    2, 0x08 /* Private */,
      58,    1,  458,    2, 0x08 /* Private */,
      59,    2,  461,    2, 0x08 /* Private */,
      60,    1,  466,    2, 0x08 /* Private */,
      61,    1,  469,    2, 0x08 /* Private */,
      62,    1,  472,    2, 0x08 /* Private */,
      63,    2,  475,    2, 0x08 /* Private */,
      66,    1,  480,    2, 0x08 /* Private */,
      67,    3,  483,    2, 0x08 /* Private */,
      71,    1,  490,    2, 0x08 /* Private */,
      72,    0,  493,    2, 0x08 /* Private */,
      73,    1,  494,    2, 0x08 /* Private */,
      74,    0,  497,    2, 0x08 /* Private */,
      75,    1,  498,    2, 0x08 /* Private */,
      76,    1,  501,    2, 0x08 /* Private */,
      79,    1,  504,    2, 0x08 /* Private */,
      80,    2,  507,    2, 0x08 /* Private */,
      81,    1,  512,    2, 0x08 /* Private */,
      83,    0,  515,    2, 0x08 /* Private */,
      84,    0,  516,    2, 0x08 /* Private */,
      85,    0,  517,    2, 0x08 /* Private */,
      86,    1,  518,    2, 0x08 /* Private */,
      88,    0,  521,    2, 0x08 /* Private */,
      89,    3,  522,    2, 0x08 /* Private */,
      94,    1,  529,    2, 0x08 /* Private */,
      95,    2,  532,    2, 0x08 /* Private */,
      98,    1,  537,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   25,   26,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void, QMetaType::Bool,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QStringList,   32,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   37,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,    7,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   41,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   30,   57,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   30,   37,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   64,   65,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   68,   69,   70,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   69,   30,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   87,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90, QMetaType::Bool, QMetaType::Bool,   91,   92,   93,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   96,   97,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void FileBrowserDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileBrowserDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->aboutToClose(); break;
        case 1: _t->init(); break;
        case 2: _t->onGetDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2]))); break;
        case 3: _t->onGetDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 4: _t->onMkdirButtonClicked(); break;
        case 5: _t->fetchDirents(); break;
        case 6: _t->onDirentClicked((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 7: _t->onDirentSaveAs((*reinterpret_cast< const QList<const SeafDirent*>(*)>(_a[1]))); break;
        case 8: _t->onRefresh(); break;
        case 9: _t->goForward(); break;
        case 10: _t->goBackward(); break;
        case 11: _t->goHome(); break;
        case 12: _t->chooseFileToUpload(); break;
        case 13: _t->chooseDirectoryToUpload(); break;
        case 14: _t->onDownloadFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->onDownloadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->onUploadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->uploadFileOrMkdir(); break;
        case 18: _t->uploadOrUpdateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->uploadOrUpdateMutipleFile((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 20: _t->onNavigatorClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->onGetDirentLock((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 22: _t->onGetDirentRename((*reinterpret_cast< const SeafDirent(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->onGetDirentRename((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 24: _t->onGetDirentRemove((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 25: _t->onGetDirentRemove((*reinterpret_cast< const QList<const SeafDirent*>(*)>(_a[1]))); break;
        case 26: _t->onGetDirentShare((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 27: _t->onGetDirentShareToUserOrGroup((*reinterpret_cast< const SeafDirent(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->onGetDirentShareSeafile((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 29: _t->onGetDirentUploadLink((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 30: _t->onGetUploadLinkSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->onGetUploadLinkFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 32: _t->onGetDirentUpdate((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 33: _t->onGetDirentsPaste(); break;
        case 34: _t->onGetSyncSubdirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->onCancelDownload((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 36: _t->onDeleteLocalVersion((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 37: _t->onLocalVersionSaveAs((*reinterpret_cast< const SeafDirent(*)>(_a[1]))); break;
        case 38: _t->onDirectoryCreateSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->onDirectoryCreateFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 40: _t->onFileLockSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->onFileLockFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 42: _t->onDirentRenameSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->onDirentRenameFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 44: _t->onDirentRemoveSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->onDirentRemoveFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 46: _t->onDirentsRemoveSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 47: _t->onDirentsRemoveFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 48: _t->onDirentShareSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 49: _t->onDirentShareFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 50: _t->onDirentsCopySuccess(); break;
        case 51: _t->onDirentsCopyFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 52: _t->onDirentsMoveSuccess(); break;
        case 53: _t->onDirentsMoveFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 54: _t->onCreateSubrepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1]))); break;
        case 55: _t->onCreateSubrepoFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 56: _t->onFileAutoUpdated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 57: _t->fixUploadButtonStyle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->fixUploadButtonNonHighlightStyle(); break;
        case 59: _t->fixUploadButtonHighlightStyle(); break;
        case 60: _t->onAccountInfoUpdated(); break;
        case 61: _t->doSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 62: _t->doRealSearch(); break;
        case 63: _t->onSearchSuccess((*reinterpret_cast< const std::vector<FileSearchResult>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 64: _t->onSearchFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 65: _t->onGetSmartLinkSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 66: _t->onGetSmartLinkFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileBrowserDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileBrowserDialog::aboutToClose)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileBrowserDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FileBrowserDialog.data,
    qt_meta_data_FileBrowserDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileBrowserDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileBrowserDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileBrowserDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FileBrowserDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 67)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 67;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 67)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 67;
    }
    return _id;
}

// SIGNAL 0
void FileBrowserDialog::aboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_DataManagerNotify_t {
    QByteArrayData data[40];
    char stringdata0[620];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataManagerNotify_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataManagerNotify_t qt_meta_stringdata_DataManagerNotify = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DataManagerNotify"
QT_MOC_LITERAL(1, 18, 17), // "getDirentsSuccess"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "current_readonly"
QT_MOC_LITERAL(4, 54, 17), // "QList<SeafDirent>"
QT_MOC_LITERAL(5, 72, 7), // "dirents"
QT_MOC_LITERAL(6, 80, 16), // "getDirentsFailed"
QT_MOC_LITERAL(7, 97, 8), // "ApiError"
QT_MOC_LITERAL(8, 106, 5), // "error"
QT_MOC_LITERAL(9, 112, 22), // "createDirectorySuccess"
QT_MOC_LITERAL(10, 135, 4), // "path"
QT_MOC_LITERAL(11, 140, 15), // "lockFileSuccess"
QT_MOC_LITERAL(12, 156, 4), // "lock"
QT_MOC_LITERAL(13, 161, 19), // "renameDirentSuccess"
QT_MOC_LITERAL(14, 181, 8), // "new_name"
QT_MOC_LITERAL(15, 190, 19), // "removeDirentSuccess"
QT_MOC_LITERAL(16, 210, 20), // "removeDirentsSuccess"
QT_MOC_LITERAL(17, 231, 11), // "parent_path"
QT_MOC_LITERAL(18, 243, 9), // "filenames"
QT_MOC_LITERAL(19, 253, 18), // "shareDirentSuccess"
QT_MOC_LITERAL(20, 272, 4), // "link"
QT_MOC_LITERAL(21, 277, 7), // "repo_id"
QT_MOC_LITERAL(22, 285, 12), // "repo_in_path"
QT_MOC_LITERAL(23, 298, 20), // "createSubrepoSuccess"
QT_MOC_LITERAL(24, 319, 10), // "ServerRepo"
QT_MOC_LITERAL(25, 330, 4), // "repo"
QT_MOC_LITERAL(26, 335, 18), // "copyDirentsSuccess"
QT_MOC_LITERAL(27, 354, 18), // "moveDirentsSuccess"
QT_MOC_LITERAL(28, 373, 19), // "onGetDirentsSuccess"
QT_MOC_LITERAL(29, 393, 18), // "onGetDirentsFailed"
QT_MOC_LITERAL(30, 412, 24), // "onDirectoryCreateSuccess"
QT_MOC_LITERAL(31, 437, 17), // "onFileLockSuccess"
QT_MOC_LITERAL(32, 455, 21), // "onDirentRenameSuccess"
QT_MOC_LITERAL(33, 477, 21), // "onDirentRemoveSuccess"
QT_MOC_LITERAL(34, 499, 22), // "onDirentsRemoveSuccess"
QT_MOC_LITERAL(35, 522, 20), // "onDirentShareSuccess"
QT_MOC_LITERAL(36, 543, 22), // "onCreateSubrepoSuccess"
QT_MOC_LITERAL(37, 566, 20), // "onDirentsCopySuccess"
QT_MOC_LITERAL(38, 587, 11), // "dst_repo_id"
QT_MOC_LITERAL(39, 599, 20) // "onDirentsMoveSuccess"

    },
    "DataManagerNotify\0getDirentsSuccess\0"
    "\0current_readonly\0QList<SeafDirent>\0"
    "dirents\0getDirentsFailed\0ApiError\0"
    "error\0createDirectorySuccess\0path\0"
    "lockFileSuccess\0lock\0renameDirentSuccess\0"
    "new_name\0removeDirentSuccess\0"
    "removeDirentsSuccess\0parent_path\0"
    "filenames\0shareDirentSuccess\0link\0"
    "repo_id\0repo_in_path\0createSubrepoSuccess\0"
    "ServerRepo\0repo\0copyDirentsSuccess\0"
    "moveDirentsSuccess\0onGetDirentsSuccess\0"
    "onGetDirentsFailed\0onDirectoryCreateSuccess\0"
    "onFileLockSuccess\0onDirentRenameSuccess\0"
    "onDirentRemoveSuccess\0onDirentsRemoveSuccess\0"
    "onDirentShareSuccess\0onCreateSubrepoSuccess\0"
    "onDirentsCopySuccess\0dst_repo_id\0"
    "onDirentsMoveSuccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataManagerNotify[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  124,    2, 0x06 /* Public */,
       6,    1,  129,    2, 0x06 /* Public */,
       9,    1,  132,    2, 0x06 /* Public */,
      11,    2,  135,    2, 0x06 /* Public */,
      13,    2,  140,    2, 0x06 /* Public */,
      15,    1,  145,    2, 0x06 /* Public */,
      16,    2,  148,    2, 0x06 /* Public */,
      19,    3,  153,    2, 0x06 /* Public */,
      23,    1,  160,    2, 0x06 /* Public */,
      26,    0,  163,    2, 0x06 /* Public */,
      27,    0,  164,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    3,  165,    2, 0x08 /* Private */,
      29,    2,  172,    2, 0x08 /* Private */,
      30,    2,  177,    2, 0x08 /* Private */,
      31,    3,  182,    2, 0x08 /* Private */,
      32,    3,  189,    2, 0x08 /* Private */,
      33,    2,  196,    2, 0x08 /* Private */,
      34,    3,  201,    2, 0x08 /* Private */,
      35,    3,  208,    2, 0x08 /* Private */,
      36,    2,  215,    2, 0x08 /* Private */,
      37,    1,  220,    2, 0x08 /* Private */,
      39,    1,  223,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   14,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4, QMetaType::QString,    3,    5,   21,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,   10,   12,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   14,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::QString,   17,   18,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   21,   22,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString,   25,   21,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   38,

       0        // eod
};

void DataManagerNotify::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManagerNotify *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2]))); break;
        case 1: _t->getDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1]))); break;
        case 2: _t->createDirectorySuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->lockFileSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->renameDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->removeDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removeDirentsSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 7: _t->shareDirentSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->createSubrepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1]))); break;
        case 9: _t->copyDirentsSuccess(); break;
        case 10: _t->moveDirentsSuccess(); break;
        case 11: _t->onGetDirentsSuccess((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QList<SeafDirent>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->onGetDirentsFailed((*reinterpret_cast< const ApiError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->onDirectoryCreateSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->onFileLockSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 15: _t->onDirentRenameSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: _t->onDirentRemoveSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->onDirentsRemoveSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->onDirentShareSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 19: _t->onCreateSubrepoSuccess((*reinterpret_cast< const ServerRepo(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->onDirentsCopySuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->onDirentsMoveSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataManagerNotify::*)(bool , const QList<SeafDirent> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::getDirentsSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const ApiError & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::getDirentsFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::createDirectorySuccess)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::lockFileSuccess)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::renameDirentSuccess)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::removeDirentSuccess)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::removeDirentsSuccess)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::shareDirentSuccess)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)(const ServerRepo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::createSubrepoSuccess)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::copyDirentsSuccess)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DataManagerNotify::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataManagerNotify::moveDirentsSuccess)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataManagerNotify::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DataManagerNotify.data,
    qt_meta_data_DataManagerNotify,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataManagerNotify::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManagerNotify::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataManagerNotify.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManagerNotify::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void DataManagerNotify::getDirentsSuccess(bool _t1, const QList<SeafDirent> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataManagerNotify::getDirentsFailed(const ApiError & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataManagerNotify::createDirectorySuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataManagerNotify::lockFileSuccess(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataManagerNotify::renameDirentSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DataManagerNotify::removeDirentSuccess(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DataManagerNotify::removeDirentsSuccess(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DataManagerNotify::shareDirentSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DataManagerNotify::createSubrepoSuccess(const ServerRepo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DataManagerNotify::copyDirentsSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void DataManagerNotify::moveDirentsSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
