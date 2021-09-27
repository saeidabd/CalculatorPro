/********************************************************************************
** Form generated from reading UI file 't_setting_model_settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_SETTING_MODEL_SETTINGS_WIDGET_H
#define UI_T_SETTING_MODEL_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TSettingModelSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *settingsBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QWidget *TSettingModelSettingsWidget)
    {
        if (TSettingModelSettingsWidget->objectName().isEmpty())
            TSettingModelSettingsWidget->setObjectName(QString::fromUtf8("TSettingModelSettingsWidget"));
        TSettingModelSettingsWidget->resize(368, 48);
        gridLayout = new QGridLayout(TSettingModelSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        settingsBtn = new QToolButton(TSettingModelSettingsWidget);
        settingsBtn->setObjectName(QString::fromUtf8("settingsBtn"));
        settingsBtn->setMinimumSize(QSize(40, 30));

        gridLayout->addWidget(settingsBtn, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label = new QLabel(TSettingModelSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(TSettingModelSettingsWidget);

        QMetaObject::connectSlotsByName(TSettingModelSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TSettingModelSettingsWidget)
    {
        TSettingModelSettingsWidget->setWindowTitle(QCoreApplication::translate("TSettingModelSettingsWidget", "Form", nullptr));
        settingsBtn->setText(QCoreApplication::translate("TSettingModelSettingsWidget", "Settings", nullptr));
        label->setText(QCoreApplication::translate("TSettingModelSettingsWidget", "Standard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TSettingModelSettingsWidget: public Ui_TSettingModelSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_SETTING_MODEL_SETTINGS_WIDGET_H
