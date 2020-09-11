#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "register.h"
#include "getbackpwd.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LogInWindow; }
QT_END_NAMESPACE

class LogInWindow : public QWidget
{
    Q_OBJECT

public:
    LogInWindow(QWidget *parent = nullptr);
    ~LogInWindow();

private:
    Ui::LogInWindow *ui;
    Register *regist;
    Getbackpwd *forgetPwd;


private slots:
    void connectSig();

    void toRegister();
    void toRemempwd();
    void submitInfo();
    void toMainPage();

    bool isEmpty();
    void isRemem( Ui::LogInWindow *ui);
    void isAuto( Ui::LogInWindow *ui);

};
#endif // LOGINWINDOW_H

