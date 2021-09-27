/****************************************************************************
** Meta object code from reading C++ file 't_number_model_settings_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ViewControllers/t_number_model_settings_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 't_number_model_settings_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TNumberModelSettingsWidget_t {
    QByteArrayData data[19];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TNumberModelSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TNumberModelSettingsWidget_t qt_meta_stringdata_TNumberModelSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "TNumberModelSettingsWidget"
QT_MOC_LITERAL(1, 27, 9), // "numberBtn"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 6), // "number"
QT_MOC_LITERAL(4, 45, 15), // "numberBtnPosNeg"
QT_MOC_LITERAL(5, 61, 12), // "decBtnSignal"
QT_MOC_LITERAL(6, 74, 9), // "decString"
QT_MOC_LITERAL(7, 84, 18), // "on_num1Btn_clicked"
QT_MOC_LITERAL(8, 103, 18), // "on_num2Btn_clicked"
QT_MOC_LITERAL(9, 122, 18), // "on_num3Btn_clicked"
QT_MOC_LITERAL(10, 141, 18), // "on_num4Btn_clicked"
QT_MOC_LITERAL(11, 160, 18), // "on_num5Btn_clicked"
QT_MOC_LITERAL(12, 179, 18), // "on_num6Btn_clicked"
QT_MOC_LITERAL(13, 198, 18), // "on_num7Btn_clicked"
QT_MOC_LITERAL(14, 217, 18), // "on_num8Btn_clicked"
QT_MOC_LITERAL(15, 236, 18), // "on_num9Btn_clicked"
QT_MOC_LITERAL(16, 255, 18), // "on_num0Btn_clicked"
QT_MOC_LITERAL(17, 274, 17), // "on_decBtn_clicked"
QT_MOC_LITERAL(18, 292, 20) // "on_posNegBtn_clicked"

    },
    "TNumberModelSettingsWidget\0numberBtn\0"
    "\0number\0numberBtnPosNeg\0decBtnSignal\0"
    "decString\0on_num1Btn_clicked\0"
    "on_num2Btn_clicked\0on_num3Btn_clicked\0"
    "on_num4Btn_clicked\0on_num5Btn_clicked\0"
    "on_num6Btn_clicked\0on_num7Btn_clicked\0"
    "on_num8Btn_clicked\0on_num9Btn_clicked\0"
    "on_num0Btn_clicked\0on_decBtn_clicked\0"
    "on_posNegBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TNumberModelSettingsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    0,   92,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   96,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    0,   99,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    0,  104,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TNumberModelSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TNumberModelSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberBtn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->numberBtnPosNeg(); break;
        case 2: _t->decBtnSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_num1Btn_clicked(); break;
        case 4: _t->on_num2Btn_clicked(); break;
        case 5: _t->on_num3Btn_clicked(); break;
        case 6: _t->on_num4Btn_clicked(); break;
        case 7: _t->on_num5Btn_clicked(); break;
        case 8: _t->on_num6Btn_clicked(); break;
        case 9: _t->on_num7Btn_clicked(); break;
        case 10: _t->on_num8Btn_clicked(); break;
        case 11: _t->on_num9Btn_clicked(); break;
        case 12: _t->on_num0Btn_clicked(); break;
        case 13: _t->on_decBtn_clicked(); break;
        case 14: _t->on_posNegBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TNumberModelSettingsWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TNumberModelSettingsWidget::numberBtn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TNumberModelSettingsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TNumberModelSettingsWidget::numberBtnPosNeg)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TNumberModelSettingsWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TNumberModelSettingsWidget::decBtnSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TNumberModelSettingsWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TNumberModelSettingsWidget.data,
    qt_meta_data_TNumberModelSettingsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TNumberModelSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TNumberModelSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TNumberModelSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TNumberModelSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void TNumberModelSettingsWidget::numberBtn(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TNumberModelSettingsWidget::numberBtnPosNeg()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TNumberModelSettingsWidget::decBtnSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
