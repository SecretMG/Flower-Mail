#ifndef SETTINGS_H
#define SETTINGS_H

#define FONT_SIZE_MIN 1
#define FONT_SIZE_MAX 20
#define FONT_SIZE_DEFAULT 10

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>
#include <QColor>
#include <QFont>

class MainWindow;

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
    MainWindow *mainWin;

    QList<QLabel*> allText_lb;
    QList<QPushButton*> allText_btn;

    const int labelNum = 9;
    const int buttonNum = 6;
    QColor lastColor;
    QFont lastFont;

private slots:
    void chooseTheme();
    void chooseFontColor();
    void chooseFontType();
    void toMainWindow();
    void cancelToMainWindow();
    void chooseButtonColor();
    void chooseBackColor();

    void on_theme_cb_currentIndexChanged(int index);

private:
    void setConnect();
    void defaultSet();
    void changeColor();
    void changeFont();
    void changeBack();
    void changeBackColor();
    void setTheme(int index);

};

#endif // SETTINGS_H
