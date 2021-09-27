/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "../ViewControllers/t_applied_featured_settings_widget.h"
#include "../ViewControllers/t_dsiplay_model_settings_widget.h"
#include "../ViewControllers/t_main_operators_settings_widget.h"
#include "../ViewControllers/t_number_model_settings_widget.h"
#include "../ViewControllers/t_setting_model_settings_widget.h"

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    TSettingModelSettingsWidget *settings;
    TDsiplayModelSettingsWidget *display;
    TAppliedFeaturedSettingsWidget *appliedFeatured;
    QHBoxLayout *horizontalLayout;
    TNumberModelSettingsWidget *numbers;
    TMainOperatorsSettingsWidget *mainOperators;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(520, 501);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        settings = new TSettingModelSettingsWidget(centralwidget);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setMinimumSize(QSize(0, 51));
        settings->setMaximumSize(QSize(16777215, 1600000));

        gridLayout->addWidget(settings, 0, 0, 1, 1);

        display = new TDsiplayModelSettingsWidget(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setMinimumSize(QSize(0, 90));

        gridLayout->addWidget(display, 1, 0, 1, 1);

        appliedFeatured = new TAppliedFeaturedSettingsWidget(centralwidget);
        appliedFeatured->setObjectName(QString::fromUtf8("appliedFeatured"));
        appliedFeatured->setMinimumSize(QSize(0, 56));

        gridLayout->addWidget(appliedFeatured, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 6, -1, -1);
        numbers = new TNumberModelSettingsWidget(centralwidget);
        numbers->setObjectName(QString::fromUtf8("numbers"));
        numbers->setMinimumSize(QSize(237, 236));

        horizontalLayout->addWidget(numbers);

        mainOperators = new TMainOperatorsSettingsWidget(centralwidget);
        mainOperators->setObjectName(QString::fromUtf8("mainOperators"));
        mainOperators->setMinimumSize(QSize(237, 236));

        horizontalLayout->addWidget(mainOperators);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 520, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "CalculatorPro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
