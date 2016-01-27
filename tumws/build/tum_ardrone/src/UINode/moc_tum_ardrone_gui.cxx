/****************************************************************************
** Meta object code from reading C++ file 'tum_ardrone_gui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/tum_ardrone/src/UINode/tum_ardrone_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tum_ardrone_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_tum_ardrone_gui[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   17,   16,   16, 0x05,
      87,   75,   16,   16, 0x05,
     116,  111,   16,   16, 0x05,
     144,   16,   16,   16, 0x05,
     170,   16,   16,   16, 0x05,
     202,   16,   16,   16, 0x05,
     240,   16,   16,   16, 0x05,
     270,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     290,   16,   16,   16, 0x0a,
     304,   16,   16,   16, 0x0a,
     321,   16,   16,   16, 0x0a,
     340,   16,   16,   16, 0x0a,
     359,   16,   16,   16, 0x0a,
     374,   16,   16,   16, 0x0a,
     388,   16,   16,   16, 0x0a,
     407,   16,   16,   16, 0x0a,
     422,   16,   16,   16, 0x0a,
     444,  440,   16,   16, 0x0a,
     469,  440,   16,   16, 0x0a,
     493,  440,   16,   16, 0x0a,
     515,   16,   16,   16, 0x0a,
     538,   17,   16,   16, 0x08,
     573,   75,   16,   16, 0x08,
     595,  111,   16,   16, 0x08,
     621,   16,   16,   16, 0x08,
     645,   16,   16,   16, 0x08,
     675,   16,   16,   16, 0x08,
     711,   16,   16,   16, 0x08,
     739,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_tum_ardrone_gui[] = {
    "tum_ardrone_gui\0\0nav,control,pose,joy\0"
    "setCountsSignal(uint,uint,uint,uint)\0"
    "p500,p20000\0setPingsSignal(int,int)\0"
    "cont\0setControlSourceSignal(int)\0"
    "addLogLineSignal(QString)\0"
    "setAutopilotInfoSignal(QString)\0"
    "setStateestimationInfoSignal(QString)\0"
    "setMotorSpeedsSignal(QString)\0"
    "closeWindowSignal()\0LandClicked()\0"
    "TakeoffClicked()\0ToggleCamClicked()\0"
    "EmergencyClicked()\0ClearClicked()\0"
    "SendClicked()\0ClearSendClicked()\0"
    "ResetClicked()\0FlattrimClicked()\0val\0"
    "LoadFileChanged(QString)\0"
    "ToggledUseHovering(int)\0ToggledPingDrone(int)\0"
    "ControlSourceChanged()\0"
    "setCountsSlot(uint,uint,uint,uint)\0"
    "setPingsSlot(int,int)\0setControlSourceSlot(int)\0"
    "addLogLineSlot(QString)\0"
    "setAutopilotInfoSlot(QString)\0"
    "setStateestimationInfoSlot(QString)\0"
    "setMotorSpeedsSlot(QString)\0"
    "closeWindowSlot()\0"
};

void tum_ardrone_gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        tum_ardrone_gui *_t = static_cast<tum_ardrone_gui *>(_o);
        switch (_id) {
        case 0: _t->setCountsSignal((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 1: _t->setPingsSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setControlSourceSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->addLogLineSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setAutopilotInfoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setStateestimationInfoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setMotorSpeedsSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->closeWindowSignal(); break;
        case 8: _t->LandClicked(); break;
        case 9: _t->TakeoffClicked(); break;
        case 10: _t->ToggleCamClicked(); break;
        case 11: _t->EmergencyClicked(); break;
        case 12: _t->ClearClicked(); break;
        case 13: _t->SendClicked(); break;
        case 14: _t->ClearSendClicked(); break;
        case 15: _t->ResetClicked(); break;
        case 16: _t->FlattrimClicked(); break;
        case 17: _t->LoadFileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->ToggledUseHovering((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->ToggledPingDrone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->ControlSourceChanged(); break;
        case 21: _t->setCountsSlot((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 22: _t->setPingsSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->setControlSourceSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->addLogLineSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->setAutopilotInfoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->setStateestimationInfoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->setMotorSpeedsSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->closeWindowSlot(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData tum_ardrone_gui::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject tum_ardrone_gui::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tum_ardrone_gui,
      qt_meta_data_tum_ardrone_gui, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &tum_ardrone_gui::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *tum_ardrone_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *tum_ardrone_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tum_ardrone_gui))
        return static_cast<void*>(const_cast< tum_ardrone_gui*>(this));
    return QWidget::qt_metacast(_clname);
}

int tum_ardrone_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void tum_ardrone_gui::setCountsSignal(unsigned int _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tum_ardrone_gui::setPingsSignal(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tum_ardrone_gui::setControlSourceSignal(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tum_ardrone_gui::addLogLineSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tum_ardrone_gui::setAutopilotInfoSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tum_ardrone_gui::setStateestimationInfoSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void tum_ardrone_gui::setMotorSpeedsSignal(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void tum_ardrone_gui::closeWindowSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}
QT_END_MOC_NAMESPACE
