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

    const int labelNum = 8;
    const int buttonNum = 7;
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

private:
    void setConnect();
    void defaultSet();
    void changeColor();
    void changeFont();
    void changeBack();

};

#endif // SETTINGS_H
