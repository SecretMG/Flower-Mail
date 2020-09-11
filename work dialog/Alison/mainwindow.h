#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "register.h"
#include "getbackpwd.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Register *checklogout_register;
    Getbackpwd *checklogout_forgetpwd;


private slots:
    void toRegister();
    void toRemempwd();
    void submitInfo();
    void toMainPage();

    bool isEmpty();

};
#endif // MAINWINDOW_H
