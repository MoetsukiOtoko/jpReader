/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mainwindow_t {
    QByteArrayData data[16];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainwindow_t qt_meta_stringdata_mainwindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "mainwindow"
QT_MOC_LITERAL(1, 11, 8), // "setTerms"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "SharedTermList"
QT_MOC_LITERAL(4, 36, 5), // "terms"
QT_MOC_LITERAL(5, 42, 11), // "SharedKanji"
QT_MOC_LITERAL(6, 54, 5), // "kanji"
QT_MOC_LITERAL(7, 60, 32), // "handleSelectedTextAudioRequested"
QT_MOC_LITERAL(8, 93, 19), // "handleHideRequested"
QT_MOC_LITERAL(9, 113, 31), // "handleFFXIVNextCaptureRequested"
QT_MOC_LITERAL(10, 145, 30), // "handleTranslationButtonPressed"
QT_MOC_LITERAL(11, 176, 23), // "handleVisibilityToggled"
QT_MOC_LITERAL(12, 200, 19), // "handleCaptureScreen"
QT_MOC_LITERAL(13, 220, 18), // "handleSetSavedArea"
QT_MOC_LITERAL(14, 239, 21), // "handleCaptureLastArea"
QT_MOC_LITERAL(15, 261, 17) // "handleThemeChange"

    },
    "mainwindow\0setTerms\0\0SharedTermList\0"
    "terms\0SharedKanji\0kanji\0"
    "handleSelectedTextAudioRequested\0"
    "handleHideRequested\0handleFFXIVNextCaptureRequested\0"
    "handleTranslationButtonPressed\0"
    "handleVisibilityToggled\0handleCaptureScreen\0"
    "handleSetSavedArea\0handleCaptureLastArea\0"
    "handleThemeChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x0a /* Public */,
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,
      12,    0,   74,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,
      14,    0,   76,    2, 0x0a /* Public */,
      15,    0,   77,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
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

void mainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setTerms((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2]))); break;
        case 1: _t->handleSelectedTextAudioRequested(); break;
        case 2: _t->handleHideRequested(); break;
        case 3: _t->handleFFXIVNextCaptureRequested(); break;
        case 4: _t->handleTranslationButtonPressed(); break;
        case 5: _t->handleVisibilityToggled(); break;
        case 6: _t->handleCaptureScreen(); break;
        case 7: _t->handleSetSavedArea(); break;
        case 8: _t->handleCaptureLastArea(); break;
        case 9: _t->handleThemeChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedKanji >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedTermList >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mainwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_mainwindow.data,
    qt_meta_data_mainwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mainwindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
