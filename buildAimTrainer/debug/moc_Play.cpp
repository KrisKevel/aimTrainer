/****************************************************************************
** Meta object code from reading C++ file 'Play.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../AimTrainer/Play.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Play.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Play_t {
    QByteArrayData data[13];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Play_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Play_t qt_meta_stringdata_Play = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Play"
QT_MOC_LITERAL(1, 5, 4), // "menu"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 5), // "start"
QT_MOC_LITERAL(4, 17, 6), // "change"
QT_MOC_LITERAL(5, 24, 4), // "easy"
QT_MOC_LITERAL(6, 29, 6), // "medium"
QT_MOC_LITERAL(7, 36, 4), // "hard"
QT_MOC_LITERAL(8, 41, 6), // "addDot"
QT_MOC_LITERAL(9, 48, 9), // "removeDot"
QT_MOC_LITERAL(10, 58, 12), // "startTheGame"
QT_MOC_LITERAL(11, 71, 11), // "updateLabel"
QT_MOC_LITERAL(12, 83, 9) // "highScore"

    },
    "Play\0menu\0\0start\0change\0easy\0medium\0"
    "hard\0addDot\0removeDot\0startTheGame\0"
    "updateLabel\0highScore"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Play[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    0,   77,    2, 0x09 /* Protected */,
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    0,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Play::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Play *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menu(); break;
        case 1: _t->start(); break;
        case 2: _t->change(); break;
        case 3: _t->easy(); break;
        case 4: _t->medium(); break;
        case 5: _t->hard(); break;
        case 6: _t->addDot(); break;
        case 7: _t->removeDot(); break;
        case 8: _t->startTheGame(); break;
        case 9: _t->updateLabel(); break;
        case 10: _t->highScore(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::menu)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::start)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::change)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::easy)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::medium)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Play::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Play::hard)) {
                *result = 5;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Play::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Play.data,
    qt_meta_data_Play,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Play::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Play::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Play.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Play::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Play::menu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Play::start()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Play::change()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Play::easy()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Play::medium()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Play::hard()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
