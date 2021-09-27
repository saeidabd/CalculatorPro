#include "t_main_operators_settings_widget.h"
#include "ui_t_main_operators_settings_widget.h"

TMainOperatorsSettingsWidget::TMainOperatorsSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TMainOperatorsSettingsWidget)
{
    ui->setupUi(this);
}

TMainOperatorsSettingsWidget::~TMainOperatorsSettingsWidget()
{
    delete ui;
}

void TMainOperatorsSettingsWidget::on_addBtn_clicked()
{
    emit showMainOperators(ui->addBtn->text());
}

void TMainOperatorsSettingsWidget::on_subtractBtn_clicked()
{
    emit showMainOperators(ui->subtractBtn->text());
}

void TMainOperatorsSettingsWidget::on_multiplyBtn_clicked()
{
    emit showMainOperators(ui->multiplyBtn->text());
}

void TMainOperatorsSettingsWidget::on_divisionBtn_clicked()
{
    emit showMainOperators(ui->divisionBtn->text());
}

void TMainOperatorsSettingsWidget::on_centBtn_clicked()
{
    emit centSignal();
}

void TMainOperatorsSettingsWidget::on_rootBtn_clicked()
{
    emit rootSignal();
}

void TMainOperatorsSettingsWidget::on_inverseBtn_clicked()
{
    emit inverseSignal();
}

void TMainOperatorsSettingsWidget::on_squareOfNumberBtn_clicked()
{
   emit squareSignal();
}

void TMainOperatorsSettingsWidget::on_cBtn_clicked()
{
    emit cEmit();
}

void TMainOperatorsSettingsWidget::on_clearAllBtn_clicked()
{
    emit cEmit();
}

void TMainOperatorsSettingsWidget::on_equalBtn_clicked()
{
    emit equalSignal();
}

void TMainOperatorsSettingsWidget::on_ceBtn_clicked()
{
    emit cEmit();
}
