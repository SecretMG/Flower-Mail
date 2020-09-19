#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include "register.h"
#include "getbackpwd.h"
#include "mainwindow.h"

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
    MainWindow *mainWindow;
    QString passWord;
    QString userName;
    bool isAutoLogin;//启动的时候连接数据库
    bool isRememPwd;


private slots:
    void toRegister();
    void toRemempwd();
    void submitInfo();
    void toMainPage();
    void textChangeTip(QString textGet);
    void keyPressEvent(QKeyEvent * event);

private:
    void init();
    void connectSig();

    bool isEmpty();
    void isRemem();
    void isAuto();

};
#endif // LOGINWINDOW_H

