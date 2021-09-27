#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <ViewControllers/t_number_model_settings_widget.h>
#include <ViewControllers/t_main_operators_settings_widget.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

private slots:
    void colorSlot(int index);
};
#endif // CALCULATOR_H
