/********************************************************************************
** Form generated from reading UI file 't_applied_featured_settings_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_APPLIED_FEATURED_SETTINGS_WIDGET_H
#define UI_T_APPLIED_FEATURED_SETTINGS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TAppliedFeaturedSettingsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *mCmbx;
    QPushButton *posMBtn;
    QPushButton *negMBtn;
    QPushButton *msBtn;
    QPushButton *mrBtn;
    QPushButton *mcBtn;

    void setupUi(QWidget *TAppliedFeaturedSettingsWidget)
    {
        if (TAppliedFeaturedSettingsWidget->objectName().isEmpty())
            TAppliedFeaturedSettingsWidget->setObjectName(QString::fromUtf8("TAppliedFeaturedSettingsWidget"));
        TAppliedFeaturedSettingsWidget->resize(502, 56);
        TAppliedFeaturedSettingsWidget->setMinimumSize(QSize(0, 56));
        horizontalLayout = new QHBoxLayout(TAppliedFeaturedSettingsWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mCmbx = new QComboBox(TAppliedFeaturedSettingsWidget);
        mCmbx->addItem(QString());
        mCmbx->addItem(QString());
        mCmbx->addItem(QString());
        mCmbx->addItem(QString());
        mCmbx->setObjectName(QString::fromUtf8("mCmbx"));
        mCmbx->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(mCmbx);

        posMBtn = new QPushButton(TAppliedFeaturedSettingsWidget);
        posMBtn->setObjectName(QString::fromUtf8("posMBtn"));
        posMBtn->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(posMBtn);

        negMBtn = new QPushButton(TAppliedFeaturedSettingsWidget);
        negMBtn->setObjectName(QString::fromUtf8("negMBtn"));
        negMBtn->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(negMBtn);

        msBtn = new QPushButton(TAppliedFeaturedSettingsWidget);
        msBtn->setObjectName(QString::fromUtf8("msBtn"));
        msBtn->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(msBtn);

        mrBtn = new QPushButton(TAppliedFeaturedSettingsWidget);
        mrBtn->setObjectName(QString::fromUtf8("mrBtn"));
        mrBtn->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(mrBtn);

        mcBtn = new QPushButton(TAppliedFeaturedSettingsWidget);
        mcBtn->setObjectName(QString::fromUtf8("mcBtn"));
        mcBtn->setMinimumSize(QSize(0, 38));

        horizontalLayout->addWidget(mcBtn);


        retranslateUi(TAppliedFeaturedSettingsWidget);

        QMetaObject::connectSlotsByName(TAppliedFeaturedSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *TAppliedFeaturedSettingsWidget)
    {
        TAppliedFeaturedSettingsWidget->setWindowTitle(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "Form", nullptr));
        mCmbx->setItemText(0, QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "New nothing", nullptr));
        mCmbx->setItemText(1, QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "For beauty", nullptr));
        mCmbx->setItemText(2, QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "For love", nullptr));
        mCmbx->setItemText(3, QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "For honor", nullptr));

        posMBtn->setText(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "M+", nullptr));
        negMBtn->setText(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "M-", nullptr));
        msBtn->setText(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "MS", nullptr));
        mrBtn->setText(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "MR", nullptr));
        mcBtn->setText(QCoreApplication::translate("TAppliedFeaturedSettingsWidget", "MC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TAppliedFeaturedSettingsWidget: public Ui_TAppliedFeaturedSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_APPLIED_FEATURED_SETTINGS_WIDGET_H
