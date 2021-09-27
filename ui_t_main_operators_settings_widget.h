/********************************************************************************
** Form generated from reading UI file 't_main_operators_settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_MAIN_OPERATORS_SETTINGS_WIDGET_H
#define UI_T_MAIN_OPERATORS_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TMainOperatorsSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *centBtn;
    QPushButton *addBtn;
    QPushButton *rootBtn;
    QPushButton *cBtn;
    QPushButton *multiplyBtn;
    QPushButton *subtractBtn;
    QPushButton *ceBtn;
    QPushButton *clearAllBtn;
    QPushButton *inverseBtn;
    QPushButton *divisionBtn;
    QPushButton *squareOfNumberBtn;
    QPushButton *equalBtn;

    void setupUi(QWidget *TMainOperatorsSettingsWidget)
    {
        if (TMainOperatorsSettingsWidget->objectName().isEmpty())
            TMainOperatorsSettingsWidget->setObjectName(QString::fromUtf8("TMainOperatorsSettingsWidget"));
        TMainOperatorsSettingsWidget->resize(255, 236);
        gridLayout = new QGridLayout(TMainOperatorsSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        centBtn = new QPushButton(TMainOperatorsSettingsWidget);
        centBtn->setObjectName(QString::fromUtf8("centBtn"));
        centBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(centBtn, 0, 1, 1, 1);

        addBtn = new QPushButton(TMainOperatorsSettingsWidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(addBtn, 0, 0, 1, 1);

        rootBtn = new QPushButton(TMainOperatorsSettingsWidget);
        rootBtn->setObjectName(QString::fromUtf8("rootBtn"));
        rootBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(rootBtn, 1, 1, 1, 1);

        cBtn = new QPushButton(TMainOperatorsSettingsWidget);
        cBtn->setObjectName(QString::fromUtf8("cBtn"));
        cBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(cBtn, 2, 2, 1, 1);

        multiplyBtn = new QPushButton(TMainOperatorsSettingsWidget);
        multiplyBtn->setObjectName(QString::fromUtf8("multiplyBtn"));
        multiplyBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(multiplyBtn, 2, 0, 1, 1);

        subtractBtn = new QPushButton(TMainOperatorsSettingsWidget);
        subtractBtn->setObjectName(QString::fromUtf8("subtractBtn"));
        subtractBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(subtractBtn, 1, 0, 1, 1);

        ceBtn = new QPushButton(TMainOperatorsSettingsWidget);
        ceBtn->setObjectName(QString::fromUtf8("ceBtn"));
        ceBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(ceBtn, 1, 2, 1, 1);

        clearAllBtn = new QPushButton(TMainOperatorsSettingsWidget);
        clearAllBtn->setObjectName(QString::fromUtf8("clearAllBtn"));
        clearAllBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(clearAllBtn, 0, 2, 1, 1);

        inverseBtn = new QPushButton(TMainOperatorsSettingsWidget);
        inverseBtn->setObjectName(QString::fromUtf8("inverseBtn"));
        inverseBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(inverseBtn, 2, 1, 1, 1);

        divisionBtn = new QPushButton(TMainOperatorsSettingsWidget);
        divisionBtn->setObjectName(QString::fromUtf8("divisionBtn"));
        divisionBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(divisionBtn, 3, 0, 1, 1);

        squareOfNumberBtn = new QPushButton(TMainOperatorsSettingsWidget);
        squareOfNumberBtn->setObjectName(QString::fromUtf8("squareOfNumberBtn"));
        squareOfNumberBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(squareOfNumberBtn, 3, 1, 1, 1);

        equalBtn = new QPushButton(TMainOperatorsSettingsWidget);
        equalBtn->setObjectName(QString::fromUtf8("equalBtn"));
        equalBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(equalBtn, 3, 2, 1, 1);


        retranslateUi(TMainOperatorsSettingsWidget);

        QMetaObject::connectSlotsByName(TMainOperatorsSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TMainOperatorsSettingsWidget)
    {
        TMainOperatorsSettingsWidget->setWindowTitle(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Form", nullptr));
        centBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "%", nullptr));
        addBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "+", nullptr));
#if QT_CONFIG(shortcut)
        addBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        rootBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Root", nullptr));
        cBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "c", nullptr));
        multiplyBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "*", nullptr));
#if QT_CONFIG(shortcut)
        multiplyBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        subtractBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "-", nullptr));
#if QT_CONFIG(shortcut)
        subtractBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        ceBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "ce", nullptr));
        clearAllBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Clear all", nullptr));
#if QT_CONFIG(shortcut)
        clearAllBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        inverseBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Inverse", nullptr));
        divisionBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "/", nullptr));
#if QT_CONFIG(shortcut)
        divisionBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        squareOfNumberBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "X2", nullptr));
        equalBtn->setText(QCoreApplication::translate("TMainOperatorsSettingsWidget", "=", nullptr));
#if QT_CONFIG(shortcut)
        equalBtn->setShortcut(QCoreApplication::translate("TMainOperatorsSettingsWidget", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class TMainOperatorsSettingsWidget: public Ui_TMainOperatorsSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_MAIN_OPERATORS_SETTINGS_WIDGET_H
