#include "t_setting_model_settings_widget.h"
#include "ui_t_setting_model_settings_widget.h"

TSettingModelSettingsWidget::TSettingModelSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TSettingModelSettingsWidget)
{
    ui->setupUi(this);
}

TSettingModelSettingsWidget::~TSettingModelSettingsWidget()
{
    delete ui;
}
