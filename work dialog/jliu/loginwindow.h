#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "register.h"
#include "getbackpwd.h"
#include "mainwindow.h"

#include <QWidget>
#include <QtNetwork>
#include <QMessageBox>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

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
    bool isAutoLogin = false;
    bool isRememPwd = false;
    QString userName;
    QString passWord;


private slots:
    void toRegister();
    void toRemempwd();
    void submitInfo();
    void toMainPage();

    void textChangeTip(QString textGet);
    void keyPressEvent(QKeyEvent *event);

    void on_login_btn_clicked();
private:
    void init();
    void connectSig();
    bool isEmpty();
    void isRemem();
    void isAuto();


};
#endif // LOGINWINDOW_H

