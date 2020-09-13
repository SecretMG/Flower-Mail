/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../jliu/Ui_Combined(ver.9.12.1)/loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LogInWindow_t {
    QByteArrayData data[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogInWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogInWindow_t qt_meta_stringdata_LogInWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LogInWindow"
QT_MOC_LITERAL(1, 12, 10), // "connectSig"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "toRegister"
QT_MOC_LITERAL(4, 35, 10), // "toRemempwd"
QT_MOC_LITERAL(5, 46, 10), // "submitInfo"
QT_MOC_LITERAL(6, 57, 10), // "toMainPage"
QT_MOC_LITERAL(7, 68, 7), // "isEmpty"
QT_MOC_LITERAL(8, 76, 7), // "isRemem"
QT_MOC_LITERAL(9, 84, 16), // "Ui::LogInWindow*"
QT_MOC_LITERAL(10, 101, 2), // "ui"
QT_MOC_LITERAL(11, 104, 6) // "isAuto"

    },
    "LogInWindow\0connectSig\0\0toRegister\0"
    "toRemempwd\0submitInfo\0toMainPage\0"
    "isEmpty\0isRemem\0Ui::LogInWindow*\0ui\0"
    "isAuto"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogInWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void LogInWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogInWindow *_t = static_cast<LogInWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectSig(); break;
        case 1: _t->toRegister(); break;
        case 2: _t->toRemempwd(); break;
        case 3: _t->submitInfo(); break;
        case 4: _t->toMainPage(); break;
        case 5: { bool _r = _t->isEmpty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->isRemem((*reinterpret_cast< Ui::LogInWindow*(*)>(_a[1]))); break;
        case 7: _t->isAuto((*reinterpret_cast< Ui::LogInWindow*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject LogInWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LogInWindow.data,
      qt_meta_data_LogInWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LogInWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogInWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogInWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LogInWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
