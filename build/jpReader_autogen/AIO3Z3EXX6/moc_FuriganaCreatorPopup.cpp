/****************************************************************************
** Meta object code from reading C++ file 'FuriganaCreatorPopup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mywidgets/FuriganaCreatorPopup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FuriganaCreatorPopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FuriganaCreatorPopup_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FuriganaCreatorPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FuriganaCreatorPopup_t qt_meta_stringdata_FuriganaCreatorPopup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FuriganaCreatorPopup"
QT_MOC_LITERAL(1, 21, 18), // "sendOkButtonPushed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "sendClearButtonPushed"
QT_MOC_LITERAL(4, 63, 13), // "setExpression"
QT_MOC_LITERAL(5, 77, 8), // "QString&"
QT_MOC_LITERAL(6, 86, 4), // "expr"
QT_MOC_LITERAL(7, 91, 20) // "handleOkButtonPushed"

    },
    "FuriganaCreatorPopup\0sendOkButtonPushed\0"
    "\0sendClearButtonPushed\0setExpression\0"
    "QString&\0expr\0handleOkButtonPushed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FuriganaCreatorPopup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,
       7,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void FuriganaCreatorPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FuriganaCreatorPopup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendOkButtonPushed(); break;
        case 1: _t->sendClearButtonPushed(); break;
        case 2: _t->setExpression((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->handleOkButtonPushed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FuriganaCreatorPopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FuriganaCreatorPopup::sendOkButtonPushed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FuriganaCreatorPopup::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FuriganaCreatorPopup::sendClearButtonPushed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FuriganaCreatorPopup::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FuriganaCreatorPopup.data,
    qt_meta_data_FuriganaCreatorPopup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FuriganaCreatorPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FuriganaCreatorPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FuriganaCreatorPopup.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FuriganaCreatorPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FuriganaCreatorPopup::sendOkButtonPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FuriganaCreatorPopup::sendClearButtonPushed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
