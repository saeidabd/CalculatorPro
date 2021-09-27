/********************************************************************************
** Form generated from reading UI file 't_dsiplay_model_settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_DSIPLAY_MODEL_SETTINGS_WIDGET_H
#define UI_T_DSIPLAY_MODEL_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TDsiplayModelSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *displayTextEdit;

    void setupUi(QWidget *TDsiplayModelSettingsWidget)
    {
        if (TDsiplayModelSettingsWidget->objectName().isEmpty())
            TDsiplayModelSettingsWidget->setObjectName(QString::fromUtf8("TDsiplayModelSettingsWidget"));
        TDsiplayModelSettingsWidget->resize(502, 89);
        gridLayout = new QGridLayout(TDsiplayModelSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        displayTextEdit = new QTextEdit(TDsiplayModelSettingsWidget);
        displayTextEdit->setObjectName(QString::fromUtf8("displayTextEdit"));
        displayTextEdit->setReadOnly(true);

        gridLayout->addWidget(displayTextEdit, 0, 0, 1, 1);


        retranslateUi(TDsiplayModelSettingsWidget);

        QMetaObject::connectSlotsByName(TDsiplayModelSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TDsiplayModelSettingsWidget)
    {
        TDsiplayModelSettingsWidget->setWindowTitle(QCoreApplication::translate("TDsiplayModelSettingsWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDsiplayModelSettingsWidget: public Ui_TDsiplayModelSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_DSIPLAY_MODEL_SETTINGS_WIDGET_H
