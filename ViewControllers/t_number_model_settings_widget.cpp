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
    emit numberBtn("1");
}

void TNumberModelSettingsWidget::on_num2Btn_clicked()
{
    emit numberBtn("2");
}

void TNumberModelSettingsWidget::on_num3Btn_clicked()
{
    emit numberBtn("3");
}

void TNumberModelSettingsWidget::on_num4Btn_clicked()
{
    emit numberBtn("4");
}

void TNumberModelSettingsWidget::on_num5Btn_clicked()
{
    emit numberBtn("5");
}

void TNumberModelSettingsWidget::on_num6Btn_clicked()
{
    emit numberBtn("6");
}

void TNumberModelSettingsWidget::on_num7Btn_clicked()
{
    emit numberBtn("7");
}

void TNumberModelSettingsWidget::on_num8Btn_clicked()
{
    emit numberBtn("8");
}

void TNumberModelSettingsWidget::on_num9Btn_clicked()
{
    emit numberBtn("9");
}

void TNumberModelSettingsWidget::on_num0Btn_clicked()
{
    emit numberBtn("0");
}

void TNumberModelSettingsWidget::on_decBtn_clicked()
{
    emit decBtnSignal(".");
}

void TNumberModelSettingsWidget::on_posNegBtn_clicked()
{
    emit numberBtnPosNeg();
}
