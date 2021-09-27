#include "t_applied_featured_settings_widget.h"
#include "ui_t_applied_featured_settings_widget.h"

TAppliedFeaturedSettingsWidget::TAppliedFeaturedSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TAppliedFeaturedSettingsWidget)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:gray;");

}

TAppliedFeaturedSettingsWidget::~TAppliedFeaturedSettingsWidget()
{
    delete ui;
}

void TAppliedFeaturedSettingsWidget::on_mCmbx_currentIndexChanged(int index)
{
    emit colorSignal(index);
}
