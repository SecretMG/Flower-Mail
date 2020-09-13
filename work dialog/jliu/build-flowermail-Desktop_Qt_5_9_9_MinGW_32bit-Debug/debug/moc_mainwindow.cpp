/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Flower-Mail9.13Combined/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "openWriteLetter"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "openSearchResult"
QT_MOC_LITERAL(4, 45, 12), // "openSettings"
QT_MOC_LITERAL(5, 58, 15), // "openChecklogout"
QT_MOC_LITERAL(6, 74, 11), // "timerUpdate"
QT_MOC_LITERAL(7, 86, 10), // "timerBuild"
QT_MOC_LITERAL(8, 97, 14), // "rithtClickMenu"
QT_MOC_LITERAL(9, 112, 3), // "pos"
QT_MOC_LITERAL(10, 116, 16), // "menuChooseAction"
QT_MOC_LITERAL(11, 133, 8), // "QAction*"
QT_MOC_LITERAL(12, 142, 3), // "act"
QT_MOC_LITERAL(13, 146, 10), // "openDetail"
QT_MOC_LITERAL(14, 157, 6), // "index2"
QT_MOC_LITERAL(15, 164, 6), // "toSafe"
QT_MOC_LITERAL(16, 171, 6) // "toHelp"

    },
    "MainWindow\0openWriteLetter\0\0"
    "openSearchResult\0openSettings\0"
    "openChecklogout\0timerUpdate\0timerBuild\0"
    "rithtClickMenu\0pos\0menuChooseAction\0"
    "QAction*\0act\0openDetail\0index2\0toSafe\0"
    "toHelp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openWriteLetter(); break;
        case 1: _t->openSearchResult(); break;
        case 2: _t->openSettings(); break;
        case 3: _t->openChecklogout(); break;
        case 4: _t->timerUpdate(); break;
        case 5: _t->timerBuild(); break;
        case 6: _t->rithtClickMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 7: _t->menuChooseAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->openDetail((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 9: _t->toSafe(); break;
        case 10: _t->toHelp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
