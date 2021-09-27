#ifndef T_MAIN_OPERATORS_SETTINGS_WIDGET_H
#define T_MAIN_OPERATORS_SETTINGS_WIDGET_H

#include <QWidget>
#include <../Computations/t_main_operators_calc.h>

namespace Ui {
class TMainOperatorsSettingsWidget;
}

class TMainOperatorsSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TMainOperatorsSettingsWidget(QWidget *parent = nullptr);
    ~TMainOperatorsSettingsWidget();

private slots:
    void on_addBtn_clicked();

    void on_subtractBtn_clicked();

    void on_multiplyBtn_clicked();

    void on_divisionBtn_clicked();

    void on_centBtn_clicked();

    void on_rootBtn_clicked();

    void on_inverseBtn_clicked();

    void on_squareOfNumberBtn_clicked();

    void on_cBtn_clicked();

    void on_clearAllBtn_clicked();

    void on_equalBtn_clicked();

    void on_ceBtn_clicked();

signals:
    void showMainOperators(QString oper);
    void cEmit();
    void equalSignal();
    void rootSignal();
    void inverseSignal();
    void centSignal();
    void squareSignal();

private:
    Ui::TMainOperatorsSettingsWidget *ui;
    TMainOperatorsCalc _operatorsCalc;

};

#endif // T_MAIN_OPERATORS_SETTINGS_WIDGET_H
