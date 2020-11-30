/****************************************************************************
** Meta object code from reading C++ file 'serveurwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ServeurTCPMultiClient/serveurwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serveurwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ServeurWidget_t {
    QByteArrayData data[9];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServeurWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServeurWidget_t qt_meta_stringdata_ServeurWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ServeurWidget"
QT_MOC_LITERAL(1, 14, 27), // "onQTcpServeur_newConnection"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 22), // "onQTcpSocket_readyRead"
QT_MOC_LITERAL(4, 66, 25), // "onQTcpSocket_disconnected"
QT_MOC_LITERAL(5, 92, 37), // "on_pushButtonLancementServeur..."
QT_MOC_LITERAL(6, 130, 26), // "on_spinBoxPort_textChanged"
QT_MOC_LITERAL(7, 157, 4), // "arg1"
QT_MOC_LITERAL(8, 162, 35) // "onQProcess_readyReadStandardO..."

    },
    "ServeurWidget\0onQTcpServeur_newConnection\0"
    "\0onQTcpSocket_readyRead\0"
    "onQTcpSocket_disconnected\0"
    "on_pushButtonLancementServeur_clicked\0"
    "on_spinBoxPort_textChanged\0arg1\0"
    "onQProcess_readyReadStandardOutpout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServeurWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void ServeurWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServeurWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onQTcpServeur_newConnection(); break;
        case 1: _t->onQTcpSocket_readyRead(); break;
        case 2: _t->onQTcpSocket_disconnected(); break;
        case 3: _t->on_pushButtonLancementServeur_clicked(); break;
        case 4: _t->on_spinBoxPort_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onQProcess_readyReadStandardOutpout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ServeurWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ServeurWidget.data,
    qt_meta_data_ServeurWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ServeurWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServeurWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServeurWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ServeurWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
