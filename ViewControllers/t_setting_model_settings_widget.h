#ifndef T_SETTING_MODEL_SETTINGS_WIDGET_H
#define T_SETTING_MODEL_SETTINGS_WIDGET_H

#include <QWidget>

namespace Ui {
class TSettingModelSettingsWidget;
}

class TSettingModelSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TSettingModelSettingsWidget(QWidget *parent = nullptr);
    ~TSettingModelSettingsWidget();

private:
    Ui::TSettingModelSettingsWidget *ui;
};

#endif // T_SETTING_MODEL_SETTINGS_WIDGET_H
