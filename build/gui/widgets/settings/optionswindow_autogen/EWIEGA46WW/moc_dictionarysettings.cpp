/****************************************************************************
** Meta object code from reading C++ file 'dictionarysettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../gui/widgets/settings/dictionarysettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dictionarysettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DictionarySettings_t {
    QByteArrayData data[15];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DictionarySettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DictionarySettings_t qt_meta_stringdata_DictionarySettings = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DictionarySettings"
QT_MOC_LITERAL(1, 19, 17), // "restoreSavedReady"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "dicts"
QT_MOC_LITERAL(4, 44, 8), // "disabled"
QT_MOC_LITERAL(5, 53, 9), // "initIcons"
QT_MOC_LITERAL(6, 63, 12), // "restoreSaved"
QT_MOC_LITERAL(7, 76, 18), // "restoreSavedHelper"
QT_MOC_LITERAL(8, 95, 13), // "applySettings"
QT_MOC_LITERAL(9, 109, 6), // "moveUp"
QT_MOC_LITERAL(10, 116, 8), // "moveDown"
QT_MOC_LITERAL(11, 125, 13), // "addDictionary"
QT_MOC_LITERAL(12, 139, 16), // "deleteDictionary"
QT_MOC_LITERAL(13, 156, 17), // "setButtonsEnabled"
QT_MOC_LITERAL(14, 174, 5) // "value"

    },
    "DictionarySettings\0restoreSavedReady\0"
    "\0dicts\0disabled\0initIcons\0restoreSaved\0"
    "restoreSavedHelper\0applySettings\0"
    "moveUp\0moveDown\0addDictionary\0"
    "deleteDictionary\0setButtonsEnabled\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DictionarySettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   69,    2, 0x08 /* Private */,
       6,    0,   70,    2, 0x08 /* Private */,
       7,    2,   71,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

       0        // eod
};

void DictionarySettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DictionarySettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->restoreSavedReady((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->initIcons(); break;
        case 2: _t->restoreSaved(); break;
        case 3: _t->restoreSavedHelper((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: _t->applySettings(); break;
        case 5: _t->moveUp(); break;
        case 6: _t->moveDown(); break;
        case 7: _t->addDictionary(); break;
        case 8: _t->deleteDictionary(); break;
        case 9: _t->setButtonsEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DictionarySettings::*)(const QStringList & , const QStringList & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DictionarySettings::restoreSavedReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DictionarySettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DictionarySettings.data,
    qt_meta_data_DictionarySettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DictionarySettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DictionarySettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DictionarySettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DictionarySettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DictionarySettings::restoreSavedReady(const QStringList & _t1, const QStringList & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< DictionarySettings *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
