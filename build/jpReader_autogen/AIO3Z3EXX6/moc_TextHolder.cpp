/****************************************************************************
** Meta object code from reading C++ file 'TextHolder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mywidgets/TextHolder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextHolder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextHolder_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextHolder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextHolder_t qt_meta_stringdata_TextHolder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TextHolder"
QT_MOC_LITERAL(1, 11, 25), // "sendNewSavedAreaRequested"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 13), // "subscriptText"
QT_MOC_LITERAL(4, 52, 6), // "script"
QT_MOC_LITERAL(5, 59, 15), // "superscriptText"
QT_MOC_LITERAL(6, 75, 24), // "displayAddFuriganaWindow"
QT_MOC_LITERAL(7, 100, 11), // "addFurigana"
QT_MOC_LITERAL(8, 112, 16), // "setSavedFurigana"
QT_MOC_LITERAL(9, 129, 17) // "handleThemeChange"

    },
    "TextHolder\0sendNewSavedAreaRequested\0"
    "\0subscriptText\0script\0superscriptText\0"
    "displayAddFuriganaWindow\0addFurigana\0"
    "setSavedFurigana\0handleThemeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextHolder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       5,    1,   53,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TextHolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextHolder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNewSavedAreaRequested(); break;
        case 1: _t->subscriptText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->superscriptText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->displayAddFuriganaWindow(); break;
        case 4: _t->addFurigana(); break;
        case 5: _t->setSavedFurigana(); break;
        case 6: _t->handleThemeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextHolder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextHolder::sendNewSavedAreaRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextHolder::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_TextHolder.data,
    qt_meta_data_TextHolder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextHolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextHolder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextHolder.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int TextHolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TextHolder::sendNewSavedAreaRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
