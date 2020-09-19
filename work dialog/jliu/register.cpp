#include "register.h"
#include "ui_register.h"
#include "loginwindow.h"

#include "mysql.h"
#include <QDebug>
#include <QMessageBox>
#include <QToolTip>
#include <QKeyEvent>
#include <QRegExpValidator>

extern QPalette userColor;
extern QFont fontType;

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    initSetRegister();
    setConnect();
}

Register::~Register()
{
    parentWidget()->show();
    delete ui;
}

void Register::initSetRegister(){
    ui->setupUi(this);
    setWindowTitle("新用户注册");
    ui -> username_le ->setPlaceholderText(tr("请输入数字，英文字母或英文符号(分号除外)"));
    QRegExpValidator *pRevalidotor = new QRegExpValidator(QRegExp("[a-zA-Z0-9!-/:-?]{25}"), this);
    ui-> username_le ->setValidator(pRevalidotor);

}

void Register::judgeEmpty(){

    bool isInputEmpty_reg = true;
    bool isInputSame_reg = false;
    bool isInputExist = false;

    newPwd = ui ->pwd_le -> text();
    checkPwd = ui ->checkpwd_le ->text();
    userNameNew = ui ->username_le -> text();
    userQues =ui -> ques_le ->text();
    userAns=ui-> ans_le ->text();


    isInputEmpty_reg = judgeInputEmpty();
    isInputSame_reg = judgeInputSame();

    if( isInputEmpty_reg == false && isInputSame_reg == true ){
        if( userNameNew.contains(";")){
            QMessageBox::warning(this, tr("警告"),tr("用户名内不能有分号！"),tr("关闭"));
            return;
        }
        isInputExist = judgeInputExist(userNameNew);
        if( isInputExist == true ){
            QMessageBox::warning(this, tr("警告"),tr("用户名已存在！"),tr("关闭"));
        }
        else{
            toMainPage();
        }

    }
    else{
        if(isInputEmpty_reg == true){
            QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);
        }
        else{
            if( isInputSame_reg == false ){
                QMessageBox::warning(this, tr("警告"),tr("密码输入不一致！"),QMessageBox::Yes);
                ui->pwd_le->clear();
                ui->checkpwd_le->clear();
            }
        }
    }
}

bool Register::judgeInputExist(QString name){
    //数据库:判断userGet用户名是否存在,userNameNew
    bool isExist = false;//= false;
    name.isEmpty();
    if (isExist == true){
        ui ->username_le->setToolTip(tr("用户名已存在"));
        return true;
    }
    else{
        return false;
    }
}

bool Register::judgeInputEmpty(){
    if( newPwd.isEmpty() || checkPwd.isEmpty() ||userNameNew.isEmpty() ||userQues.isEmpty() ||userAns.isEmpty()){
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

void Register::toMainPage(){
    QMessageBox::warning(this, tr("提示"),tr("注册成功！"),tr("好的"));
    mainWindow = new MainWindow;
    mainWindow -> show();
    this -> close();
}

void Register::keyPressEvent(QKeyEvent *event){
    qDebug()<<"in KeyPressed,eventkey"<<event->key()<<endl;
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter){
        qDebug()<<"in KeyPressed QEvent::KeyPress"<<endl;
        if( ui ->username_le -> hasFocus() ){
            ui -> pwd_le -> setFocus();
        }
        else{
            if( ui ->pwd_le -> hasFocus() ){
                ui -> checkpwd_le -> setFocus();
            }
            else{
                if( ui -> checkpwd_le -> hasFocus() ){
                    ui ->ques_le ->setFocus();
                }
                else{
                    if( ui -> ques_le -> hasFocus()){
                        ui->ans_le->setFocus();
                    }
                    else{
                        if( ui ->ans_le ->hasFocus()){
                            judgeEmpty();
                        }
                    }
                }
            }
        }

    }
}

void Register::setConnect(){
    connect( ui -> submit_btn, SIGNAL(clicked()), this,SLOT( judgeEmpty() ));
    connect( ui -> cancel_btn, SIGNAL(clicked()), this,SLOT( cancelToMain()));
}

void Register::cancelToMain(){
    LogInWindow *logInWindow = new LogInWindow;
    logInWindow -> show();
    this -> close();
}


