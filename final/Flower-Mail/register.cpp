#include "register.h"
#include "ui_register.h"
#include <QDebug>
#include <QMessageBox>
#include "mainwindow.h"
QString newPwd;
QString checkPwd;
QString userNameNew;

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    setWindowTitle("新用户注册");
    connect( ui -> submit_btn, SIGNAL(clicked()), this,SLOT( judgeEmpty() ));
}

Register::~Register()
{
    parentWidget()->show();
    delete ui;
}

void Register::toMainPage( ) {
    //这里要跳转到主界面
    mainWindow = new MainWindow;
    mainWindow -> show();
    qDebug() << "in toMainPage" << endl;
}

void Register::judgeEmpty(){

    bool isInputEmpty_reg = true;
    bool isInputSame_reg = false;

    newPwd = ui ->pwd_le -> text();
    checkPwd = ui ->checkpwd_le ->text();
    userNameNew = ui ->username_le -> text();


    isInputEmpty_reg = judgeInputEmpty();
    isInputSame_reg = judgeInputSame();
    qDebug()<< "first:" << newPwd << "next:" << checkPwd << endl;
    qDebug()<< "Empty?" << isInputEmpty_reg << "Same?" << isInputSame_reg << endl;

    if( isInputEmpty_reg == false && isInputSame_reg == true ){
        //到主页
        mainWindow = new MainWindow;
        mainWindow -> show();
        printf("toMain\n");
        close();
    }
    else{
        if(isInputEmpty_reg == true){
            qDebug() << "In Resetpasswor:: Empty" <<endl;
            QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);

        }
        else{
            if( isInputSame_reg == false ){
                //
                qDebug() << "In Resetpasswor:: NotSame" <<endl;
                QMessageBox::warning(this, tr("警告"),tr("密码输入不一致！"),QMessageBox::Yes);
                ui->pwd_le->clear();
                ui->checkpwd_le->clear();
            }
        }
    }
}

bool Register::judgeInputEmpty(){
    if( newPwd.isEmpty() || checkPwd.isEmpty() ||userNameNew.isEmpty() ){
        return true;
    }
    else{
        return false;
    }
}

bool Register::judgeInputSame(){
    if( newPwd == checkPwd ){
        return true;
    }
    else{
        return false;
    }
}
