#ifndef T_APPLIED_FEATURED_SETTINGS_WIDGET_H
#define T_APPLIED_FEATURED_SETTINGS_WIDGET_H

#include <QWidget>

namespace Ui {
class TAppliedFeaturedSettingsWidget;
}

class TAppliedFeaturedSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TAppliedFeaturedSettingsWidget(QWidget *parent = nullptr);
    ~TAppliedFeaturedSettingsWidget();

private slots:
    void on_mCmbx_currentIndexChanged(int index);

signals:
    void colorSignal(int index);
private:
    Ui::TAppliedFeaturedSettingsWidget *ui;
};

#endif // T_APPLIED_FEATURED_SETTINGS_WIDGET_H
