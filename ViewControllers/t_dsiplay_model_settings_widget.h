#ifndef T_DSIPLAY_MODEL_SETTINGS_WIDGET_H
#define T_DSIPLAY_MODEL_SETTINGS_WIDGET_H

#include <QWidget>
#include <../Computations/t_main_operators_calc.h>

enum EOperatoType{
    otAdd,
    otSub,
    otMul,
    otDiv
};

namespace Ui {
class TDsiplayModelSettingsWidget;
}

class TDsiplayModelSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TDsiplayModelSettingsWidget(QWidget *parent = nullptr);
    ~TDsiplayModelSettingsWidget();

private:
    double calc(QString displayText);
    void updateDisplayTextString();
    bool checkValidation();
    Ui::TDsiplayModelSettingsWidget *ui;
    QString _displayTextString;
    TMainOperatorsCalc _operatorsCalc;
    bool _equalToFlag = false;

private slots:
    void showingNumbers(QString number);
    void posNegNumbers();
    void decBtnSetter(QString decString);
    void mainOperatorShow(QString oper);
    void cSlot();
    void equalSlot();
    void rootSlot();
    void inverseSlot();
    void centSlot();
    void squareSlot();
};

#endif // T_DSIPLAY_MODEL_SETTINGS_WIDGET_H
