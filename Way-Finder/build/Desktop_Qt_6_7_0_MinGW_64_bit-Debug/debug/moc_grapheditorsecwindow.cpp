/****************************************************************************
** Meta object code from reading C++ file 'grapheditorsecwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../grapheditorsecwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'grapheditorsecwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGraphEditorSecWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSGraphEditorSecWindowENDCLASS = QtMocHelpers::stringData(
    "GraphEditorSecWindow",
    "deleteEdge",
    "",
    "addEdgeButton",
    "editButton",
    "editEdge",
    "sortCostAscending",
    "sortCostDescending",
    "selectCity1",
    "selectCity2",
    "backToMainPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGraphEditorSecWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject GraphEditorSecWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGraphEditorSecWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGraphEditorSecWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGraphEditorSecWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GraphEditorSecWindow, std::true_type>,
        // method 'deleteEdge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addEdgeButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editEdge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortCostAscending'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sortCostDescending'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCity1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectCity2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backToMainPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GraphEditorSecWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphEditorSecWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->deleteEdge(); break;
        case 1: _t->addEdgeButton(); break;
        case 2: _t->editButton(); break;
        case 3: _t->editEdge(); break;
        case 4: _t->sortCostAscending(); break;
        case 5: _t->sortCostDescending(); break;
        case 6: _t->selectCity1(); break;
        case 7: _t->selectCity2(); break;
        case 8: _t->backToMainPage(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GraphEditorSecWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphEditorSecWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGraphEditorSecWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphEditorSecWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
