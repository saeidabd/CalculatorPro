/********************************************************************************
** Form generated from reading UI file 't_number_model_settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_NUMBER_MODEL_SETTINGS_WIDGET_H
#define UI_T_NUMBER_MODEL_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TNumberModelSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *decBtn;
    QPushButton *num1Btn;
    QPushButton *num8Btn;
    QPushButton *num0Btn;
    QPushButton *posNegBtn;
    QPushButton *num3Btn;
    QPushButton *num7Btn;
    QPushButton *num9Btn;
    QPushButton *num2Btn;
    QPushButton *num4Btn;
    QPushButton *num5Btn;
    QPushButton *num6Btn;

    void setupUi(QWidget *TNumberModelSettingsWidget)
    {
        if (TNumberModelSettingsWidget->objectName().isEmpty())
            TNumberModelSettingsWidget->setObjectName(QString::fromUtf8("TNumberModelSettingsWidget"));
        TNumberModelSettingsWidget->resize(225, 236);
        gridLayout = new QGridLayout(TNumberModelSettingsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        decBtn = new QPushButton(TNumberModelSettingsWidget);
        decBtn->setObjectName(QString::fromUtf8("decBtn"));
        decBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(decBtn, 5, 2, 1, 1);

        num1Btn = new QPushButton(TNumberModelSettingsWidget);
        num1Btn->setObjectName(QString::fromUtf8("num1Btn"));
        num1Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num1Btn, 4, 0, 1, 1);

        num8Btn = new QPushButton(TNumberModelSettingsWidget);
        num8Btn->setObjectName(QString::fromUtf8("num8Btn"));
        num8Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num8Btn, 2, 1, 1, 1);

        num0Btn = new QPushButton(TNumberModelSettingsWidget);
        num0Btn->setObjectName(QString::fromUtf8("num0Btn"));
        num0Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num0Btn, 5, 1, 1, 1);

        posNegBtn = new QPushButton(TNumberModelSettingsWidget);
        posNegBtn->setObjectName(QString::fromUtf8("posNegBtn"));
        posNegBtn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(posNegBtn, 5, 0, 1, 1);

        num3Btn = new QPushButton(TNumberModelSettingsWidget);
        num3Btn->setObjectName(QString::fromUtf8("num3Btn"));
        num3Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num3Btn, 4, 2, 1, 1);

        num7Btn = new QPushButton(TNumberModelSettingsWidget);
        num7Btn->setObjectName(QString::fromUtf8("num7Btn"));
        num7Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num7Btn, 2, 0, 1, 1);

        num9Btn = new QPushButton(TNumberModelSettingsWidget);
        num9Btn->setObjectName(QString::fromUtf8("num9Btn"));
        num9Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num9Btn, 2, 2, 1, 1);

        num2Btn = new QPushButton(TNumberModelSettingsWidget);
        num2Btn->setObjectName(QString::fromUtf8("num2Btn"));
        num2Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num2Btn, 4, 1, 1, 1);

        num4Btn = new QPushButton(TNumberModelSettingsWidget);
        num4Btn->setObjectName(QString::fromUtf8("num4Btn"));
        num4Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num4Btn, 3, 0, 1, 1);

        num5Btn = new QPushButton(TNumberModelSettingsWidget);
        num5Btn->setObjectName(QString::fromUtf8("num5Btn"));
        num5Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num5Btn, 3, 1, 1, 1);

        num6Btn = new QPushButton(TNumberModelSettingsWidget);
        num6Btn->setObjectName(QString::fromUtf8("num6Btn"));
        num6Btn->setMinimumSize(QSize(65, 50));

        gridLayout->addWidget(num6Btn, 3, 2, 1, 1);

        QWidget::setTabOrder(num7Btn, num8Btn);
        QWidget::setTabOrder(num8Btn, num9Btn);
        QWidget::setTabOrder(num9Btn, posNegBtn);
        QWidget::setTabOrder(posNegBtn, num0Btn);
        QWidget::setTabOrder(num0Btn, decBtn);

        retranslateUi(TNumberModelSettingsWidget);

        QMetaObject::connectSlotsByName(TNumberModelSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TNumberModelSettingsWidget)
    {
        TNumberModelSettingsWidget->setWindowTitle(QCoreApplication::translate("TNumberModelSettingsWidget", "Form", nullptr));
        decBtn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", ".", nullptr));
#if QT_CONFIG(shortcut)
        decBtn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        num1Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "1", nullptr));
#if QT_CONFIG(shortcut)
        num1Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        num8Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "8", nullptr));
#if QT_CONFIG(shortcut)
        num8Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        num0Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "0", nullptr));
#if QT_CONFIG(shortcut)
        num0Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        posNegBtn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "+/-", nullptr));
#if QT_CONFIG(shortcut)
        posNegBtn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        num3Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "3", nullptr));
#if QT_CONFIG(shortcut)
        num3Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        num7Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "7", nullptr));
#if QT_CONFIG(shortcut)
        num7Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        num9Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "9", nullptr));
#if QT_CONFIG(shortcut)
        num9Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        num2Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "2", nullptr));
#if QT_CONFIG(shortcut)
        num2Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        num4Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "4", nullptr));
#if QT_CONFIG(shortcut)
        num4Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        num5Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "5", nullptr));
#if QT_CONFIG(shortcut)
        num5Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        num6Btn->setText(QCoreApplication::translate("TNumberModelSettingsWidget", "6", nullptr));
#if QT_CONFIG(shortcut)
        num6Btn->setShortcut(QCoreApplication::translate("TNumberModelSettingsWidget", "6", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class TNumberModelSettingsWidget: public Ui_TNumberModelSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_NUMBER_MODEL_SETTINGS_WIDGET_H
