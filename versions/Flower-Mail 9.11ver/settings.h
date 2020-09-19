#ifndef SETTINGS_H
#define SETTINGS_H

#define FONT_SIZE_MIN 1
#define FONT_SIZE_MAX 20
#define FONT_SIZE_DEFAULT 10


#include <QWidget>
#include "personinfo.h"

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

private:
    Ui::Settings *ui;
    Personinfo *perInfo;
    QString font[5] = {"宋体","黑体","楷体","行书","等线"};

private slots:
    void chooseTheme(Ui::Settings *ui);
    void chooseFontColor(Ui::Settings *ui);
    void chooseFontType(Ui::Settings *ui);
    void chooseFontSize(Ui::Settings *ui);
    void toPersonInfo();

private:
    void defaultSet(Ui::Settings *ui);
};

#endif // SETTINGS_H
