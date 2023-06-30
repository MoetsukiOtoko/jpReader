/****************************************************************************
** Meta object code from reading C++ file 'ankisettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../gui/widgets/settings/ankisettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ankisettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnkiSettings_t {
    QByteArrayData data[18];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnkiSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnkiSettings_t qt_meta_stringdata_AnkiSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AnkiSettings"
QT_MOC_LITERAL(1, 13, 9), // "initIcons"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "applyChanges"
QT_MOC_LITERAL(4, 37, 15), // "restoreDefaults"
QT_MOC_LITERAL(5, 53, 12), // "restoreSaved"
QT_MOC_LITERAL(6, 66, 19), // "enabledStateChanged"
QT_MOC_LITERAL(7, 86, 5), // "state"
QT_MOC_LITERAL(8, 92, 15), // "connectToClient"
QT_MOC_LITERAL(9, 108, 10), // "showErrors"
QT_MOC_LITERAL(10, 119, 17), // "updateModelFields"
QT_MOC_LITERAL(11, 137, 12), // "CardBuilder*"
QT_MOC_LITERAL(12, 150, 2), // "cb"
QT_MOC_LITERAL(13, 153, 5), // "model"
QT_MOC_LITERAL(14, 159, 13), // "changeProfile"
QT_MOC_LITERAL(15, 173, 4), // "text"
QT_MOC_LITERAL(16, 178, 10), // "addProfile"
QT_MOC_LITERAL(17, 189, 13) // "deleteProfile"

    },
    "AnkiSettings\0initIcons\0\0applyChanges\0"
    "restoreDefaults\0restoreSaved\0"
    "enabledStateChanged\0state\0connectToClient\0"
    "showErrors\0updateModelFields\0CardBuilder*\0"
    "cb\0model\0changeProfile\0text\0addProfile\0"
    "deleteProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnkiSettings[] = {

 // content:
       8,       // revision
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
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       8,    0,   79,    2, 0x28 /* Private | MethodCloned */,
      10,    2,   80,    2, 0x08 /* Private */,
      14,    1,   85,    2, 0x08 /* Private */,
      16,    0,   88,    2, 0x08 /* Private */,
      17,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AnkiSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnkiSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initIcons(); break;
        case 1: _t->applyChanges(); break;
        case 2: _t->restoreDefaults(); break;
        case 3: _t->restoreSaved(); break;
        case 4: _t->enabledStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->connectToClient((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->connectToClient(); break;
        case 7: _t->updateModelFields((*reinterpret_cast< CardBuilder*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->changeProfile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->addProfile(); break;
        case 10: _t->deleteProfile(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnkiSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AnkiSettings.data,
    qt_meta_data_AnkiSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnkiSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnkiSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnkiSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AnkiSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
