#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "mainwindow.h"

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private:
    Ui::Register *ui;
    MainWindow *mainWindow;

private slots:
    void toMainPage();
    void judgeEmpty();

private:
    bool judgeInputEmpty();
    bool judgeInputSame();
};

#endif // REGISTER_H
