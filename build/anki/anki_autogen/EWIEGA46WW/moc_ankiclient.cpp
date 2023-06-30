/****************************************************************************
** Meta object code from reading C++ file 'ankiclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../anki/ankiclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ankiclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnkiReply_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnkiReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnkiReply_t qt_meta_stringdata_AnkiReply = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AnkiReply"
QT_MOC_LITERAL(1, 10, 12), // "finishedBool"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "value"
QT_MOC_LITERAL(4, 30, 5), // "error"
QT_MOC_LITERAL(5, 36, 18), // "finishedStringList"
QT_MOC_LITERAL(6, 55, 16), // "finishedBoolList"
QT_MOC_LITERAL(7, 72, 11), // "QList<bool>"
QT_MOC_LITERAL(8, 84, 11), // "finishedInt"
QT_MOC_LITERAL(9, 96, 15), // "finishedIntList"
QT_MOC_LITERAL(10, 112, 10) // "QList<int>"

    },
    "AnkiReply\0finishedBool\0\0value\0error\0"
    "finishedStringList\0finishedBoolList\0"
    "QList<bool>\0finishedInt\0finishedIntList\0"
    "QList<int>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnkiReply[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
       8,    2,   54,    2, 0x06 /* Public */,
       9,    2,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,    3,    4,

       0        // eod
};

void AnkiReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnkiReply *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedBool((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->finishedStringList((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->finishedBoolList((*reinterpret_cast< const QList<bool>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->finishedInt((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->finishedIntList((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<bool> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnkiReply::*)(const bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiReply::finishedBool)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnkiReply::*)(const QStringList & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiReply::finishedStringList)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnkiReply::*)(const QList<bool> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiReply::finishedBoolList)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AnkiReply::*)(const int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiReply::finishedInt)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AnkiReply::*)(const QList<int> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiReply::finishedIntList)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnkiReply::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AnkiReply.data,
    qt_meta_data_AnkiReply,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnkiReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnkiReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnkiReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AnkiReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AnkiReply::finishedBool(const bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnkiReply::finishedStringList(const QStringList & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AnkiReply::finishedBoolList(const QList<bool> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AnkiReply::finishedInt(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AnkiReply::finishedIntList(const QList<int> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_AnkiClient_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnkiClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnkiClient_t qt_meta_stringdata_AnkiClient = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AnkiClient"
QT_MOC_LITERAL(1, 11, 15), // "requestAddMedia"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 30), // "QList<QPair<QString,QString> >"
QT_MOC_LITERAL(4, 59, 7), // "fileMap"
QT_MOC_LITERAL(5, 67, 14), // "sendIntRequest"
QT_MOC_LITERAL(6, 82, 6), // "action"
QT_MOC_LITERAL(7, 89, 6), // "params"
QT_MOC_LITERAL(8, 96, 10), // "AnkiReply*"
QT_MOC_LITERAL(9, 107, 9), // "ankiReply"
QT_MOC_LITERAL(10, 117, 19), // "sendBoolListRequest"
QT_MOC_LITERAL(11, 137, 8), // "addMedia"
QT_MOC_LITERAL(12, 146, 17), // "receiveIntRequest"
QT_MOC_LITERAL(13, 164, 22) // "receiveBoolListRequest"

    },
    "AnkiClient\0requestAddMedia\0\0"
    "QList<QPair<QString,QString> >\0fileMap\0"
    "sendIntRequest\0action\0params\0AnkiReply*\0"
    "ankiReply\0sendBoolListRequest\0addMedia\0"
    "receiveIntRequest\0receiveBoolListRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnkiClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    3,   47,    2, 0x06 /* Public */,
      10,    3,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   61,    2, 0x0a /* Public */,
      12,    3,   64,    2, 0x08 /* Private */,
      13,    3,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject, 0x80000000 | 8,    6,    7,    9,

 // slots: parameters
    0x80000000 | 8, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QJsonObject, 0x80000000 | 8,    6,    7,    9,

       0        // eod
};

void AnkiClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnkiClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestAddMedia((*reinterpret_cast< const QList<QPair<QString,QString> >(*)>(_a[1]))); break;
        case 1: _t->sendIntRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])),(*reinterpret_cast< AnkiReply*(*)>(_a[3]))); break;
        case 2: _t->sendBoolListRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])),(*reinterpret_cast< AnkiReply*(*)>(_a[3]))); break;
        case 3: { AnkiReply* _r = _t->addMedia((*reinterpret_cast< const QList<QPair<QString,QString> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AnkiReply**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->receiveIntRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])),(*reinterpret_cast< AnkiReply*(*)>(_a[3]))); break;
        case 5: _t->receiveBoolListRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])),(*reinterpret_cast< AnkiReply*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnkiReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnkiReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnkiReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnkiReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AnkiClient::*)(const QList<QPair<QString,QString>> & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiClient::requestAddMedia)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AnkiClient::*)(const QString & , const QJsonObject & , AnkiReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiClient::sendIntRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AnkiClient::*)(const QString & , const QJsonObject & , AnkiReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnkiClient::sendBoolListRequest)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AnkiClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AnkiClient.data,
    qt_meta_data_AnkiClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AnkiClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnkiClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AnkiClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AnkiClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AnkiClient::requestAddMedia(const QList<QPair<QString,QString>> & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AnkiClient *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnkiClient::sendIntRequest(const QString & _t1, const QJsonObject & _t2, AnkiReply * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AnkiClient::sendBoolListRequest(const QString & _t1, const QJsonObject & _t2, AnkiReply * _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
