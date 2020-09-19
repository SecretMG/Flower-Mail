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

extern QString userNameRight;
extern QString userQuesRight;
extern QString userAnsRight;
extern QString userPasswordRight;//在登录比对用户名正确后拿出来的内容
extern bool loginState ;

//需要记录用户and密码，自动登录and记住密码

LogInWindow::LogInWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LogInWindow)
{
    init();//一切界面初始化都在这里
    connectSig();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
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
        //读文件
        isRemem();
    }

}

void LogInWindow::connectSig(){
    connect( ui -> register_btn, SIGNAL(clicked()), this,SLOT( toRegister() ) );
    connect( ui -> forgetpwd_btn, SIGNAL(clicked()), this,SLOT( toRemempwd() ) );
    connect( ui -> login_btn, SIGNAL(clicked()), this,SLOT( submitInfo() ) );
    connect( ui -> name_le, SIGNAL(textChanged(QString)), this,SLOT( textChangeTip(QString) ) );
}

void LogInWindow::submitInfo() {
    qDebug()<<"In submit info"<<endl;
    bool inputEmpty = true;

    userName = ui -> name_le -> text();
    passWord = ui -> pwd_le -> text();
    isAutoLogin = ui ->autologin_cb ->isChecked();
    isRememPwd = ui ->remempwd_btn ->isChecked();

    inputEmpty = isEmpty();
    if(inputEmpty){
        QMessageBox::warning(this, tr("警告"),tr("输入为空！"),tr("关闭"));
    }
    else{
        //new start
        bool isRight = judgeRight();
        if( isRight ){
            toMainPage();
        }
        else{
            QMessageBox::warning(this, tr("警告"),tr("用户名或密码输入错误！"),tr("关闭"));
        }
        //new end
     }
}

void LogInWindow::toRegister() {
    regist = new Register();
    regist -> show();
    //new start
    close();
    //new end;
}

void LogInWindow::toRemempwd() {
    qDebug() << "in toRemempwd" << endl;
    forgetPwd = new Getbackpwd();
    forgetPwd -> show();
    //new start
    close();
    //new end;
}
//new start
void LogInWindow::toMainPage() {
    //这里要跳转到主界面
    qDebug() << "in toMainPage" << endl;
    mainWindow = new MainWindow;
    QMessageBox::warning(this, tr(""),tr("登陆成功!"),tr("确定"));
    mainWindow -> show();
    loginState = true;
    //写一个文件存放这些内容
    writeFile();
    close();
}

void LogInWindow::isRemem(){
    //得到记录后填入框中
    ui -> remempwd_btn ->setChecked(true);
    QString inputUserName = userName;
    QString inputPwd = passWord;
    qDebug()<<"password"<<passWord<<endl;
    ui -> name_le ->setText(inputUserName);
    ui ->pwd_le ->setText(inputPwd);
}

void LogInWindow::isAuto(){
    ui ->autologin_cb->setChecked(true);
    isRemem();
    //去主页面
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

void LogInWindow::on_login_btn_clicked()
{
    QTcpSocket *client;

    QString IP = "192.168.43.11";
    int port = 8765;

    client = new QTcpSocket();

    //取消已有的连接
    client->abort();

    //连接服务器
    client->connectToHost(IP, port);

    //等待连接成功
    if(!client->waitForConnected(30000))
    {
        qDebug() << "Connection failed!";
        return;
    }
    qDebug() << "Connect successfully!";

    qDebug() << "Send: " << "send something";

    //获取文本框内容并以ASCII码形式发送
    userName = ui -> name_le -> text();
    passWord = ui -> pwd_le -> text();

    QJsonObject simp_ayjson;
    simp_ayjson.insert("OPERATION", 1);
    simp_ayjson.insert("USERNAME", userName);
    simp_ayjson.insert("PASSWORD", passWord);
    QJsonDocument document;
    document.setObject(simp_ayjson);
    QByteArray simpbyte_array = document.toJson(QJsonDocument::Compact);

    //client->write(userName.toLatin1());
    //client->write(passWord.toLatin1());
    client->write(simpbyte_array);

    client->flush();
}
//new start
bool LogInWindow::judgeRight(){
    //数据库：找到用户名等
    //这里是找到userName,如果存在则把所有信息存在QString中
    //先判断用户名是否存在，存在则得到所有信息，在本地比对
    if( userNameRight.isEmpty() ){//不存在用户名
        return false;
    }else{//存在用户名
        if( userPasswordRight == passWord ){
            return true;
        }
        else{
            return false;
        }
    }


    return false;
}
//new end
void LogInWindow::readFile(){
    int count = 0;
    QFile file("H:\\"+userName+"Data.txt" );
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug() << "Open failed." << endl;
        }
    QTextStream txtInput( &file );
    QString lineStr;
    while(!txtInput.atEnd()){
        lineStr = txtInput.readLine();
        switch (count){
        case 0:isRememPwd = toBool(lineStr);break;
        case 1:isAutoLogin = toBool(lineStr);break;
        case 2:{
            if(isRememPwd == true){
                userName = lineStr;
                lineStr = txtInput.readLine();
                qDebug() << "in case 2"<<lineStr << endl;
                passWord = lineStr;
            }
            break;
        }
       }
       count++;
    }
    file.close();

}

bool LogInWindow::toBool(QString state){
    if(state.compare("false")){
        return true;
    }
    else{
        return false;
    }
}

QString LogInWindow::toString(bool state){
    if(state == false){
        return "false";
    }
    else{
        return "true";
    }
}

void LogInWindow::writeFile(){
    QFile file( "H:\\"+ userName +"Data.txt" );
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Open failed." << endl;
    }

    QTextStream txtOutput(&file);
    txtOutput << toString(isRememPwd) << endl;
    txtOutput << toString(isAutoLogin) << endl;
    txtOutput << userName << endl;
    txtOutput << passWord << endl;

    file.close();

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
