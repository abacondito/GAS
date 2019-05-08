/****************************************************************************
** Meta object code from reading C++ file 'delaunaymanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GAS_2019_Delaunay/managers/delaunaymanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delaunaymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelaunayManager_t {
    QByteArrayData data[13];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelaunayManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelaunayManager_t qt_meta_stringdata_DelaunayManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DelaunayManager"
QT_MOC_LITERAL(1, 16, 31), // "on_loadPointsPushButton_clicked"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 32), // "on_clearPointsPushButton_clicked"
QT_MOC_LITERAL(4, 82, 14), // "point2DClicked"
QT_MOC_LITERAL(5, 97, 13), // "cg3::Point2Dd"
QT_MOC_LITERAL(6, 111, 1), // "p"
QT_MOC_LITERAL(7, 113, 37), // "on_enablePickingCheckBox_stat..."
QT_MOC_LITERAL(8, 151, 4), // "arg1"
QT_MOC_LITERAL(9, 156, 31), // "on_resetScenePushButton_clicked"
QT_MOC_LITERAL(10, 188, 39), // "on_generatePointsFilePushButt..."
QT_MOC_LITERAL(11, 228, 39), // "on_checkTriangulationPushButt..."
QT_MOC_LITERAL(12, 268, 44) // "on_showBoundingTriangleCheckB..."

    },
    "DelaunayManager\0on_loadPointsPushButton_clicked\0"
    "\0on_clearPointsPushButton_clicked\0"
    "point2DClicked\0cg3::Point2Dd\0p\0"
    "on_enablePickingCheckBox_stateChanged\0"
    "arg1\0on_resetScenePushButton_clicked\0"
    "on_generatePointsFilePushButton_clicked\0"
    "on_checkTriangulationPushButton_clicked\0"
    "on_showBoundingTriangleCheckBox_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelaunayManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void DelaunayManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelaunayManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loadPointsPushButton_clicked(); break;
        case 1: _t->on_clearPointsPushButton_clicked(); break;
        case 2: _t->point2DClicked((*reinterpret_cast< const cg3::Point2Dd(*)>(_a[1]))); break;
        case 3: _t->on_enablePickingCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_resetScenePushButton_clicked(); break;
        case 5: _t->on_generatePointsFilePushButton_clicked(); break;
        case 6: _t->on_checkTriangulationPushButton_clicked(); break;
        case 7: _t->on_showBoundingTriangleCheckBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DelaunayManager::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_DelaunayManager.data,
    qt_meta_data_DelaunayManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelaunayManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelaunayManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelaunayManager.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int DelaunayManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
