/****************************************************************************
** Meta object code from reading C++ file 'DialogoDeshacer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "DialogoDeshacer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogoDeshacer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogoDeshacer_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogoDeshacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogoDeshacer_t qt_meta_stringdata_DialogoDeshacer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DialogoDeshacer"
QT_MOC_LITERAL(1, 16, 8), // "findNext"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "str"
QT_MOC_LITERAL(4, 30, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(5, 50, 2), // "cs"
QT_MOC_LITERAL(6, 53, 12), // "findPrevious"
QT_MOC_LITERAL(7, 66, 17), // "slotBotonDeshacer"
QT_MOC_LITERAL(8, 84, 16) // "slotBotonRehacer"

    },
    "DialogoDeshacer\0findNext\0\0str\0"
    "Qt::CaseSensitivity\0cs\0findPrevious\0"
    "slotBotonDeshacer\0slotBotonRehacer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogoDeshacer[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,
       6,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogoDeshacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogoDeshacer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 1: _t->findPrevious((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 2: _t->slotBotonDeshacer(); break;
        case 3: _t->slotBotonRehacer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogoDeshacer::*)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogoDeshacer::findNext)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogoDeshacer::*)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogoDeshacer::findPrevious)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogoDeshacer::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DialogoDeshacer.data,
    qt_meta_data_DialogoDeshacer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogoDeshacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogoDeshacer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogoDeshacer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DialogoDeshacer"))
        return static_cast< Ui::DialogoDeshacer*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogoDeshacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void DialogoDeshacer::findNext(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogoDeshacer::findPrevious(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE