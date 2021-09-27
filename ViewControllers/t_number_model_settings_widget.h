#ifndef T_NUMBER_MODEL_SETTINGS_WIDGET_H
#define T_NUMBER_MODEL_SETTINGS_WIDGET_H

#include <QWidget>

namespace Ui {
class TNumberModelSettingsWidget;
}

class TNumberModelSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TNumberModelSettingsWidget(QWidget *parent = nullptr);
    ~TNumberModelSettingsWidget();

private slots:
    void on_num1Btn_clicked();

    void on_num2Btn_clicked();

    void on_num3Btn_clicked();

    void on_num4Btn_clicked();

    void on_num5Btn_clicked();

    void on_num6Btn_clicked();

    void on_num7Btn_clicked();

    void on_num8Btn_clicked();

    void on_num9Btn_clicked();

    void on_num0Btn_clicked();

    void on_decBtn_clicked();

    void on_posNegBtn_clicked();

private:
    Ui::TNumberModelSettingsWidget *ui;

signals:
    void numberBtn(QString number);
    void numberBtnPosNeg();
    void decBtnSignal(QString decString);
};

#endif // T_NUMBER_MODEL_SETTINGS_WIDGET_H
