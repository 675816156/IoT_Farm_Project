/****************************************************************************
** Meta object code from reading C++ file 'win_qextserialport.h'
**
** Created: Fri Apr 6 20:34:13 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../win_qextserialport.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'win_qextserialport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Win_QextSerialPort[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Win_QextSerialPort[] = {
    "Win_QextSerialPort\0"
};

const QMetaObject Win_QextSerialPort::staticMetaObject = {
    { &QextSerialBase::staticMetaObject, qt_meta_stringdata_Win_QextSerialPort,
      qt_meta_data_Win_QextSerialPort, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Win_QextSerialPort::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Win_QextSerialPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Win_QextSerialPort::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Win_QextSerialPort))
        return static_cast<void*>(const_cast< Win_QextSerialPort*>(this));
    return QextSerialBase::qt_metacast(_clname);
}

int Win_QextSerialPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QextSerialBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE