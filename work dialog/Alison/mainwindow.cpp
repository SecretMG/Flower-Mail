#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "getbackpwd.h"
#include <QMessageBox>

#include <QDebug>


QString passWord;
QString userName;
bool contentRight = false;//密码和用户名是否匹配

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui -> setupUi( this );
    ui -> name_le->setClearButtonEnabled(true);
    ui -> pwd_le->setClearButtonEnabled(true);
    connect( ui -> register_btn, SIGNAL(clicked()), this,SLOT( toRegister() ) );
    connect( ui -> forgetpwd_btn, SIGNAL(clicked()), this,SLOT( toRemempwd() ) );
    connect( ui -> login_btn, SIGNAL(clicked()), this,SLOT( submitInfo() ) );

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toRegister( ) {
    qDebug() << "in toRegister" << endl;
    checklogout_register = new Register();
    checklogout_register -> show();
}

void MainWindow::toRemempwd( ) {
    qDebug() << "in toRemempwd" << endl;
    checklogout_forgetpwd = new Getbackpwd();
    checklogout_forgetpwd -> show();
}

void MainWindow::submitInfo( ) {//获取输入内容
    //获取用户名

    bool inputEmpty = true;

     userName = ui -> name_le -> text();
     passWord = ui -> pwd_le -> text();
     qDebug() << "userName Get:" << userName;
     qDebug() << "Password Get:" << passWord;

     inputEmpty = isEmpty();//判断输入是否为空
     qDebug() << "after judge: inputEmpty = " << inputEmpty;
     if( inputEmpty ){
         qDebug() << "In judge_main: inputEmpty = " << inputEmpty;
         QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);
     }
     else{
         //连接数据库判断是否正确
         if( contentRight == true ){
             toMainPage();
             close();
         }
         else{
             //弹出警告窗口
            QMessageBox::warning(this, tr("警告"),tr("用户名或密码输入错误！"),QMessageBox::Yes);
             ui -> name_le->clear();
             ui -> pwd_le->clear();
         }

     }


}

bool MainWindow::isEmpty(){//判断输入框是否为空
    qDebug()<< "isEmpty?" << endl;
    if ( userName.isEmpty() || passWord.isEmpty() ){
        return true;
    }
    else
        return false;
}

void MainWindow::toMainPage( ) {
    //这里要跳转到主界面
    qDebug() << "in toMainPage" << endl;
}





