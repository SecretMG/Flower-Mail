#ifndef SAFESETTINGS_H
#define SAFESETTINGS_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

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
    QList<QLineEdit*> allText_le;
    const int buttonNum = 2;
    const int labelNum = 2;
    const int lineEditNum = 2;

private:
    void setConnect();
    void initSet();

private slots:
    void toMainPage();
    void cancelToMainPage();

};

#endif // SAFESETTINGS_H
