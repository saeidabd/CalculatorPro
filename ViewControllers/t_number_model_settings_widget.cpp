#include "t_number_model_settings_widget.h"
#include "ui_t_number_model_settings_widget.h"

TNumberModelSettingsWidget::TNumberModelSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TNumberModelSettingsWidget)
{
    ui->setupUi(this);
//     ui->decBtn->setShortcut(QKeySequence("ctrl+k")); //it can be used for shortcut key!
}

TNumberModelSettingsWidget::~TNumberModelSettingsWidget()
{
    delete ui;
}

void TNumberModelSettingsWidget::on_num1Btn_clicked()
{
    emit numberBtn(ui->num1Btn->text());
}

void TNumberModelSettingsWidget::on_num2Btn_clicked()
{
    emit numberBtn(ui->num2Btn->text());
}

void TNumberModelSettingsWidget::on_num3Btn_clicked()
{
    emit numberBtn(ui->num3Btn->text());
}

void TNumberModelSettingsWidget::on_num4Btn_clicked()
{
    emit numberBtn(ui->num4Btn->text());
}

void TNumberModelSettingsWidget::on_num5Btn_clicked()
{
    emit numberBtn(ui->num5Btn->text());
}

void TNumberModelSettingsWidget::on_num6Btn_clicked()
{
    emit numberBtn(ui->num6Btn->text());
}

void TNumberModelSettingsWidget::on_num7Btn_clicked()
{
    emit numberBtn(ui->num7Btn->text());
}

void TNumberModelSettingsWidget::on_num8Btn_clicked()
{
    emit numberBtn(ui->num8Btn->text());
}

void TNumberModelSettingsWidget::on_num9Btn_clicked()
{
    emit numberBtn(ui->num9Btn->text());
}

void TNumberModelSettingsWidget::on_num0Btn_clicked()
{
    emit numberBtn(ui->num0Btn->text());
}

void TNumberModelSettingsWidget::on_decBtn_clicked()
{
    emit decBtnSignal(ui->decBtn->text());
}

void TNumberModelSettingsWidget::on_posNegBtn_clicked()
{
    emit numberBtnPosNeg();
}
