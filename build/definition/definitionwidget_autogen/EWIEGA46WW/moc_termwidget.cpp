/****************************************************************************
** Meta object code from reading C++ file 'termwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../definition/termwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'termwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TermWidget_t {
    QByteArrayData data[23];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TermWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TermWidget_t qt_meta_stringdata_TermWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TermWidget"
QT_MOC_LITERAL(1, 11, 13), // "kanjiSearched"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 27), // "QSharedPointer<const Kanji>"
QT_MOC_LITERAL(4, 54, 5), // "kanji"
QT_MOC_LITERAL(5, 60, 15), // "contentSearched"
QT_MOC_LITERAL(6, 76, 14), // "SharedTermList"
QT_MOC_LITERAL(7, 91, 5), // "terms"
QT_MOC_LITERAL(8, 97, 11), // "SharedKanji"
QT_MOC_LITERAL(9, 109, 18), // "audioSourcesLoaded"
QT_MOC_LITERAL(10, 128, 12), // "safeToDelete"
QT_MOC_LITERAL(11, 141, 18), // "searchImmersionKit"
QT_MOC_LITERAL(12, 160, 11), // "kanaClicked"
QT_MOC_LITERAL(13, 172, 7), // "addNote"
QT_MOC_LITERAL(14, 180, 11), // "AudioSource"
QT_MOC_LITERAL(15, 192, 3), // "src"
QT_MOC_LITERAL(16, 196, 10), // "searchAnki"
QT_MOC_LITERAL(17, 207, 9), // "playAudio"
QT_MOC_LITERAL(18, 217, 24), // "showPlayableAudioSources"
QT_MOC_LITERAL(19, 242, 3), // "pos"
QT_MOC_LITERAL(20, 246, 23), // "showAddableAudioSources"
QT_MOC_LITERAL(21, 270, 11), // "searchKanji"
QT_MOC_LITERAL(22, 282, 2) // "ch"

    },
    "TermWidget\0kanjiSearched\0\0"
    "QSharedPointer<const Kanji>\0kanji\0"
    "contentSearched\0SharedTermList\0terms\0"
    "SharedKanji\0audioSourcesLoaded\0"
    "safeToDelete\0searchImmersionKit\0"
    "kanaClicked\0addNote\0AudioSource\0src\0"
    "searchAnki\0playAudio\0showPlayableAudioSources\0"
    "pos\0showAddableAudioSources\0searchKanji\0"
    "ch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TermWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    2,   87,    2, 0x06 /* Public */,
       9,    0,   92,    2, 0x06 /* Public */,
      10,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      21,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void, QMetaType::QPoint,   19,
    QMetaType::Void, QMetaType::QString,   22,

       0        // eod
};

void TermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TermWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->kanjiSearched((*reinterpret_cast< QSharedPointer<const Kanji>(*)>(_a[1]))); break;
        case 1: _t->contentSearched((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2]))); break;
        case 2: _t->audioSourcesLoaded(); break;
        case 3: _t->safeToDelete(); break;
        case 4: _t->searchImmersionKit(); break;
        case 5: _t->kanaClicked(); break;
        case 6: _t->addNote(); break;
        case 7: _t->addNote((*reinterpret_cast< const AudioSource(*)>(_a[1]))); break;
        case 8: _t->searchAnki(); break;
        case 9: _t->playAudio(); break;
        case 10: _t->playAudio((*reinterpret_cast< const AudioSource(*)>(_a[1]))); break;
        case 11: _t->showPlayableAudioSources((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->showAddableAudioSources((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->searchKanji((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedKanji >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedTermList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TermWidget::*)(QSharedPointer<const Kanji> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TermWidget::kanjiSearched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TermWidget::*)(SharedTermList , SharedKanji );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TermWidget::contentSearched)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TermWidget::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TermWidget::audioSourcesLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TermWidget::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TermWidget::safeToDelete)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TermWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TermWidget.data,
    qt_meta_data_TermWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TermWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TermWidget::kanjiSearched(QSharedPointer<const Kanji> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TermWidget::contentSearched(SharedTermList _t1, SharedKanji _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TermWidget::audioSourcesLoaded()const
{
    QMetaObject::activate(const_cast< TermWidget *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TermWidget::safeToDelete()const
{
    QMetaObject::activate(const_cast< TermWidget *>(this), &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
