/****************************************************************************
** Meta object code from reading C++ file 'glcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GAS_2019_Delaunay/cg3lib/cg3/viewer/glcanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cg3__viewer__GLCanvas_t {
    QByteArrayData data[5];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cg3__viewer__GLCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cg3__viewer__GLCanvas_t qt_meta_stringdata_cg3__viewer__GLCanvas = {
    {
QT_MOC_LITERAL(0, 0, 21), // "cg3::viewer::GLCanvas"
QT_MOC_LITERAL(1, 22, 12), // "objectPicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "point2DClicked"
QT_MOC_LITERAL(4, 51, 13) // "cg3::Point2Dd"

    },
    "cg3::viewer::GLCanvas\0objectPicked\0\0"
    "point2DClicked\0cg3::Point2Dd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cg3__viewer__GLCanvas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void cg3::viewer::GLCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objectPicked((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->point2DClicked((*reinterpret_cast< cg3::Point2Dd(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GLCanvas::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLCanvas::objectPicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GLCanvas::*)(cg3::Point2Dd );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLCanvas::point2DClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject cg3::viewer::GLCanvas::staticMetaObject = { {
    &QGLViewer::staticMetaObject,
    qt_meta_stringdata_cg3__viewer__GLCanvas.data,
    qt_meta_data_cg3__viewer__GLCanvas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cg3::viewer::GLCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cg3::viewer::GLCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cg3__viewer__GLCanvas.stringdata0))
        return static_cast<void*>(this);
    return QGLViewer::qt_metacast(_clname);
}

int cg3::viewer::GLCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void cg3::viewer::GLCanvas::objectPicked(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void cg3::viewer::GLCanvas::point2DClicked(cg3::Point2Dd _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
