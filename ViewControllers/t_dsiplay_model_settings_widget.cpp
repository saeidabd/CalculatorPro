#include "t_dsiplay_model_settings_widget.h"
#include "ui_t_dsiplay_model_settings_widget.h"


TDsiplayModelSettingsWidget::TDsiplayModelSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TDsiplayModelSettingsWidget)
{
    ui->setupUi(this);
}

TDsiplayModelSettingsWidget::~TDsiplayModelSettingsWidget()
{
    delete ui;
}

double TDsiplayModelSettingsWidget::calc(QString displayText)
{
//    EOperatoType operatorType; CHECK
    return _operatorsCalc.calc(displayText);
}

void TDsiplayModelSettingsWidget::updateDisplayTextString()
{
    _displayTextString = ui->displayTextEdit->toPlainText();
}

bool TDsiplayModelSettingsWidget::checkValidation()
{
    bool valid = true;
    if (_displayTextString.contains("+") || _displayTextString.contains("/") ||
            _displayTextString.contains("*") || (_displayTextString.contains("-") && _displayTextString.at(0) != "-")){
            ui->displayTextEdit->setText("Invalid input!");
            valid = false;
    }
    return valid;
}

void TDsiplayModelSettingsWidget::showingNumbers(QString number)
{
    if (_equalToFlag == true || _displayTextString == "0") {
        ui->displayTextEdit->clear();
    }
    _equalToFlag = false;
    updateDisplayTextString();
    _displayTextString += number;
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::posNegNumbers()
{
    updateDisplayTextString();
    if (_displayTextString == "0")
        return;
    if (_displayTextString[0] == "-")
        _displayTextString.remove(0, 1);
    else{
        _displayTextString = "-" + _displayTextString;
    }
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::decBtnSetter(QString decString)
{
    updateDisplayTextString();
    if (_displayTextString.contains("."))
        return;
    ui->displayTextEdit->setText(_displayTextString.append(decString));
}

void TDsiplayModelSettingsWidget::mainOperatorShow(QString oper)
{
    _equalToFlag =false;
    updateDisplayTextString();

    if (_displayTextString.contains("+") || _displayTextString.contains("/") ||
            _displayTextString.contains("*") || (_displayTextString.contains("-") && _displayTextString.at(0) != "-") ){
        _displayTextString = QString::number(calc(_displayTextString));
        _displayTextString += oper;
        ui->displayTextEdit->setText(_displayTextString);

        return;
    }
    _displayTextString += oper;
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::cSlot()
{
    ui->displayTextEdit->clear();
    _equalToFlag =false;
}

void TDsiplayModelSettingsWidget::equalSlot()
{
    updateDisplayTextString();
    _displayTextString = QString::number(calc(_displayTextString));
    ui->displayTextEdit->setText(_displayTextString);
    _equalToFlag = true;
}

void TDsiplayModelSettingsWidget::rootSlot()
{
    QStringList numList;
    updateDisplayTextString();
    _equalToFlag = true;
    if (_displayTextString.contains("+") || _displayTextString.contains("/") ||
            _displayTextString.contains("*") || (_displayTextString.contains("-"))){
            ui->displayTextEdit->setText("Invalid input!");
            return;
    }

    double num = _displayTextString.toDouble();
    double root = _operatorsCalc.root(num);
    _displayTextString = QString::number(root);
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::inverseSlot()
{
    QStringList numList;
    updateDisplayTextString();
    _equalToFlag = true;
    if (!checkValidation())
            return;

    double num = _displayTextString.toDouble();
    double root = _operatorsCalc.inverse(num);
    _displayTextString = QString::number(root);
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::centSlot()
{
    QStringList numList;
    updateDisplayTextString();
    _equalToFlag = true;
    if (!checkValidation())
            return;

    double num = _displayTextString.toDouble();
    double root = _operatorsCalc.cent(num);
    _displayTextString = QString::number(root);
    ui->displayTextEdit->setText(_displayTextString);
}

void TDsiplayModelSettingsWidget::squareSlot()
{
    QStringList numList;
    updateDisplayTextString();
    _equalToFlag = true;
    if (!checkValidation())
            return;

    double num = _displayTextString.toDouble();
    double root = _operatorsCalc.square(num);
    _displayTextString = QString::number(root);
    ui->displayTextEdit->setText(_displayTextString);
}
