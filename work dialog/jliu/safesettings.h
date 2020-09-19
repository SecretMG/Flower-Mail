#ifndef SAFESETTINGS_H
#define SAFESETTINGS_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class SafeSettings;
}

class SafeSettings : public QWidget
{
    Q_OBJECT

public:
    explicit SafeSettings(QWidget *parent = nullptr);
    ~SafeSettings();

private:
    Ui::SafeSettings *ui;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    const int buttonNum = 1;
    const int labelNum = 3;

private:
    void setConnect();
    void initSet();

};

#endif // SAFESETTINGS_H
