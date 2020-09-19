#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "getbackpwd.h"
#include "mainwindow.h"
#include "mysql.h"

#include <QMessageBox>
#include <QDebug>

//需要记录用户and密码，自动登录and记住密码
QString passWord;
QString userName;
bool isAutoLogin;//启动的时候连接数据库
bool isRememPwd;

LogInWindow::LogInWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInWindow)
{

    //这里给checkbox赋值
    if( isAutoLogin == true){
        isAuto( ui);
    }
    if( isRememPwd == true){

    }
    ui -> setupUi( this );
    setWindowTitle("登录");
    ui -> name_le->setClearButtonEnabled(true);
    ui -> pwd_le->setClearButtonEnabled(true);
    connectSig();
}


LogInWindow::~LogInWindow()
{
    delete ui;
}

void LogInWindow::toRegister( ) {
    qDebug() << "in toRegister" << endl;
    regist = new Register();
    regist -> show();
}

void LogInWindow::toRemempwd( ) {
    qDebug() << "in toRemempwd" << endl;
    forgetPwd = new Getbackpwd();
    forgetPwd -> show();
}

void LogInWindow::submitInfo( ) {//获取输入内容
    //获取用户名

    bool inputEmpty = true;

     userName = ui -> name_le -> text();
     passWord = ui -> pwd_le -> text();
     isAutoLogin = ui ->autologin_cb ->isChecked();
     isRememPwd = ui ->remempwd_btn ->isChecked();
     qDebug() << "isAutoLogin Get:" << isAutoLogin;
     qDebug() << "isRememPwd Get:" << isRememPwd;

     inputEmpty = isEmpty();//判断输入是否为空
     qDebug() << "after judge: inputEmpty = " << inputEmpty;
     if(inputEmpty){
         qDebug() << "In judge_main: inputEmpty = " << inputEmpty;
         QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);
     }
     else{
         // TODO:是否连接到server
         MySql mySql = MySql();
         mySql.useUsersTable(); // 没有数据表则创建数据表
         bool userExit = mySql.checkUserExit(userName, passWord);
         if( userExit == true ){
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

bool LogInWindow::isEmpty(){//判断输入框是否为空
    qDebug()<< "isEmpty?" << endl;
    if ( userName.isEmpty() || passWord.isEmpty() ){
        return true;
    }
    else
        return false;
}

void LogInWindow::toMainPage() {
    //这里要跳转到主界面
    qDebug() << "in toMainPage" << endl;
    mainWindow = new MainWindow;
    mainWindow -> show();
}

void LogInWindow::isRemem(Ui::LogInWindow *ui){
    //得到记录后填入框中
    QString inputUserName;
    QString inputPwd;
    ui -> name_le ->setText(inputUserName);
    ui ->pwd_le ->setText(inputPwd);
}

void LogInWindow::isAuto(Ui::LogInWindow *ui){
    isRemem(ui);
    //去主页面
}

void LogInWindow::connectSig(){
    connect( ui -> register_btn, SIGNAL(clicked()), this,SLOT( toRegister() ) );
    connect( ui -> forgetpwd_btn, SIGNAL(clicked()), this,SLOT( toRemempwd() ) );
    connect( ui -> login_btn, SIGNAL(clicked()), this,SLOT( submitInfo() ) );
}




