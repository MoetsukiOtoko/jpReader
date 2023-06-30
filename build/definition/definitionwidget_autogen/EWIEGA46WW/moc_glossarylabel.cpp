/****************************************************************************
** Meta object code from reading C++ file 'glossarylabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../definition/glossarylabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glossarylabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlossaryLabel_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlossaryLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlossaryLabel_t qt_meta_stringdata_GlossaryLabel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GlossaryLabel"
QT_MOC_LITERAL(1, 14, 15), // "contentSearched"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "SharedTermList"
QT_MOC_LITERAL(4, 46, 5), // "terms"
QT_MOC_LITERAL(5, 52, 11), // "SharedKanji"
QT_MOC_LITERAL(6, 64, 5), // "kanji"
QT_MOC_LITERAL(7, 70, 12), // "deselectText"
QT_MOC_LITERAL(8, 83, 10), // "adjustSize"
QT_MOC_LITERAL(9, 94, 12), // "handleSearch"
QT_MOC_LITERAL(10, 107, 8), // "position"
QT_MOC_LITERAL(11, 116, 6) // "length"

    },
    "GlossaryLabel\0contentSearched\0\0"
    "SharedTermList\0terms\0SharedKanji\0kanji\0"
    "deselectText\0adjustSize\0handleSearch\0"
    "position\0length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlossaryLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   39,    2, 0x0a /* Public */,
       8,    0,   40,    2, 0x08 /* Private */,
       9,    4,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    4,    6,   10,   11,

       0        // eod
};

void GlossaryLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlossaryLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contentSearched((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2]))); break;
        case 1: _t->deselectText(); break;
        case 2: _t->adjustSize(); break;
        case 3: _t->handleSearch((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
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
        case 3:
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
            using _t = void (GlossaryLabel::*)(SharedTermList , SharedKanji ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlossaryLabel::contentSearched)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlossaryLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QTextEdit::staticMetaObject>(),
    qt_meta_stringdata_GlossaryLabel.data,
    qt_meta_data_GlossaryLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlossaryLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlossaryLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlossaryLabel.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int GlossaryLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GlossaryLabel::contentSearched(SharedTermList _t1, SharedKanji _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GlossaryLabel *>(this), &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_DictionaryWorker_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DictionaryWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DictionaryWorker_t qt_meta_stringdata_DictionaryWorker = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DictionaryWorker"
QT_MOC_LITERAL(1, 17, 10), // "searchDone"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 14), // "SharedTermList"
QT_MOC_LITERAL(4, 44, 5), // "terms"
QT_MOC_LITERAL(5, 50, 11), // "SharedKanji"
QT_MOC_LITERAL(6, 62, 5), // "kanji"
QT_MOC_LITERAL(7, 68, 8), // "position"
QT_MOC_LITERAL(8, 77, 6) // "length"

    },
    "DictionaryWorker\0searchDone\0\0"
    "SharedTermList\0terms\0SharedKanji\0kanji\0"
    "position\0length"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DictionaryWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    4,    6,    7,    8,

       0        // eod
};

void DictionaryWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DictionaryWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchDone((*reinterpret_cast< SharedTermList(*)>(_a[1])),(*reinterpret_cast< SharedKanji(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DictionaryWorker::*)(SharedTermList , SharedKanji , int , int ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DictionaryWorker::searchDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DictionaryWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DictionaryWorker.data,
    qt_meta_data_DictionaryWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DictionaryWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DictionaryWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DictionaryWorker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int DictionaryWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DictionaryWorker::searchDone(SharedTermList _t1, SharedKanji _t2, int _t3, int _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< DictionaryWorker *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
