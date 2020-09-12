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

    bool *isfontType;
    const int labelNum = 6;
    const int buttonNum = 5;
    QColor lastColor;
    QFont lastFont;

private slots:
    void chooseTheme();
    void chooseFontColor();
    void chooseFontType();
    void chooseFontSize();
    void toMainWindow();
    void cancelToMainWindow();

private:
    void defaultSet();
    void changeColor();
    void changeFont();

};

#endif // SETTINGS_H
