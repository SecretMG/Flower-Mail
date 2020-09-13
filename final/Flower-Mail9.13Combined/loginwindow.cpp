#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "getbackpwd.h"
#include "mainwindow.h"
#include "mysql.h"

#include <QMessageBox>
#include <QDebug>
#include <QRegExpValidator>
#include <QToolTip>
#include <QKeyEvent>
#include <QPalette>

//需要记录用户and密码，自动登录and记住密码

LogInWindow::LogInWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInWindow)
{


    init();//一切界面初始化都在这里
    connectSig();
    setAutoFillBackground(true);//必须有这条语句
    QPalette palette = this -> palette();
    palette.setColor(QPalette::Window,QColor(250,250,200));
    palette.setColor(QPalette::WindowText,QColor(100,100,100));
    palette.setBrush(QPalette::Button,QColor(250,250,200));
    palette.setColor(QPalette::Disabled, QPalette::Base,QColor(250,250,210));

    this -> setPalette(palette);
     //setPalette (QPalette::Button, QColor(240,250,200));
}


LogInWindow::~LogInWindow()
{
    delete ui;
}

void LogInWindow::init(){
    ui -> setupUi( this );
    setWindowTitle("登录");
    //设置输入
    ui -> name_le->setClearButtonEnabled(true);
    ui -> pwd_le->setClearButtonEnabled(true);
    QRegExpValidator *pRevalidotor = new QRegExpValidator(QRegExp("[a-zA-Z0-9!-/:-?]{25}"), this);
    ui-> name_le ->setValidator(pRevalidotor);
    ui-> pwd_le ->setValidator(pRevalidotor);

    ui -> name_le ->setPlaceholderText(tr("请输入数字，英文字母或英文符号(分号除外)"));
    ui -> pwd_le ->setPlaceholderText(tr("请输入密码"));
    ui -> name_le -> setFocus();

    //设置checkbox状态
    if( isAutoLogin == true){
        isAuto();
        //自动填入信息并登录
    }
    if( isRememPwd == true){

    }

}

void LogInWindow::connectSig(){
    connect( ui -> register_btn, SIGNAL(clicked()), this,SLOT( toRegister() ) );
    connect( ui -> forgetpwd_btn, SIGNAL(clicked()), this,SLOT( toRemempwd() ) );
    connect( ui -> login_btn, SIGNAL(clicked()), this,SLOT( submitInfo() ) );
    connect( ui -> name_le, SIGNAL(textChanged(QString)), this,SLOT( textChangeTip(QString) ) );
}


void LogInWindow::submitInfo() {
    //获取输入内容
    //获取用户名
    qDebug()<<"In submit info"<<endl;
     bool inputEmpty = true;

     userName = ui -> name_le -> text();
     passWord = ui -> pwd_le -> text();
     isAutoLogin = ui ->autologin_cb ->isChecked();
     isRememPwd = ui ->remempwd_btn ->isChecked();
     qDebug() << "isAutoLogin Get:" << isAutoLogin;
     qDebug() << "isRememPwd Get:" << isRememPwd;

     inputEmpty = isEmpty();
     qDebug() << "after judge: inputEmpty = " << inputEmpty;
     if(inputEmpty){
         qDebug() << "In judge_main: inputEmpty = " << inputEmpty;
         QMessageBox::warning(this, tr("警告"),tr("输入为空！"),tr("关闭"));
     }
     else{
         // TODO:是否连接到server
         MySql mySql = MySql();
         mySql.useUsersTable(); // 没有数据表则创建数据表
         bool userExit = mySql.checkUserExit(userName, passWord);
         //测试用！！！！
         if( userExit == true ){
             qDebug()<<"userName:"<<userName<<endl;
             if (userName.contains(";") ){
                 QMessageBox::warning(this, tr("警告"),tr("用户名内不能有分号!"),tr("关闭"));
             }
             else{
                 toMainPage();
                 close();
             }
         }
         else{
             QMessageBox::warning(this, tr("警告"),tr("用户名或密码输入错误！"),tr("关闭"));
             ui -> name_le->clear();
             ui -> pwd_le->clear();
         }
     }
}

void LogInWindow::toRegister() {
    qDebug() << "in toRegister" << endl;
    regist = new Register();
    regist -> show();
}

void LogInWindow::toRemempwd() {
    qDebug() << "in toRemempwd" << endl;
    forgetPwd = new Getbackpwd();
    forgetPwd -> show();
}

void LogInWindow::toMainPage() {
    //这里要跳转到主界面
    qDebug() << "in toMainPage" << endl;
    mainWindow = new MainWindow;
    QMessageBox::warning(this, tr(""),tr("登陆成功!"),tr("确定"));
    mainWindow -> show();
    this -> close();
}


void LogInWindow::isRemem(){
    //得到记录后填入框中
    QString inputUserName;
    QString inputPwd;
    ui -> name_le ->setText(inputUserName);
    ui ->pwd_le ->setText(inputPwd);
}

void LogInWindow::isAuto(){
    isRemem();
    //去主页面
}

bool LogInWindow::isEmpty(){//判断输入框是否为空
    qDebug()<< "isEmpty?" << endl;
    if ( userName.isEmpty() || passWord.isEmpty() ){
        if(userName.isEmpty()){
            ui ->name_le -> setFocus();
        }
        return true;
    }
    else
        return false;
}

void LogInWindow::textChangeTip(QString textGet){
    bool isHave;

    isHave = textGet.contains(';');
    if( isHave == true ){
        ui -> name_le -> setToolTip(tr("请勿输入分号！"));
        //问题：延迟太长了
    }


}

void LogInWindow::keyPressEvent(QKeyEvent *event){
    qDebug()<<"in KeyPressed,eventkey"<<event->key()<<endl;
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter){
        qDebug()<<"in KeyPressed QEvent::KeyPress"<<endl;
        if( ui -> pwd_le -> hasFocus() ){
            submitInfo();
        }
        else{
            ui ->pwd_le -> setFocus();
        }

    }
}




