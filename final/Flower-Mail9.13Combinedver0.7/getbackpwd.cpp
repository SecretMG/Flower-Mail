#include "getbackpwd.h"
#include "ui_getbackpwd.h"
#include "loginwindow.h"

#include <QMessageBox>
#include <QKeyEvent>

Getbackpwd::Getbackpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Getbackpwd)
{
    ui->setupUi(this);
    setWindowTitle("找回密码");
    connect( ui ->yes_btn, SIGNAL(clicked()), this,SLOT( judgeEmpty() ) );
    //new start
    connect( ui ->checkExist_btn, SIGNAL(clicked()), this,SLOT( judgeExist() ) );
    ui ->ques_lb ->setText("这里是没有变化的");
    connect( ui ->cancel_btn, SIGNAL(clicked()), this,SLOT( cancelToMain() ) );
    //new end
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

Getbackpwd::~Getbackpwd()
{
    delete ui;
}

void Getbackpwd::toReset(){
    qDebug() << "in toReset" << endl;
    resetPassword = new Resetpassword();
    resetPassword -> show();
    hide();
}
//new start
void Getbackpwd::judgeEmpty(){
    userAnsGet = ui -> userName_le -> text();
    qDebug()<<"suerName:"<<userNameGet<<endl;
    if( userAnsGet.isEmpty() ){
        QMessageBox::warning(this, tr("警告"),tr("输入为空!"),tr("关闭"));
    }
    else{
        judgeRight();
    }
}
//new start,检查用户名是否存在
void Getbackpwd::judgeExist(){

    bool isExist = true;//获得userNameGet的正确性
    userNameGet = ui ->userName_le ->text();
    if(userNameGet.isEmpty()){
        QMessageBox::warning(this, tr("警告"),tr("输入为空!"),tr("关闭"));
    }
    if (isExist == true){
        QString ques ="初始问题222";//ques获取密保问题
        //userAnsRight取回对应的密保答案，本地判断
        userAnsRight = "这是从数据库拿回来的答案";
        ui -> quesGet_lb ->setText( ques );
    }
    else{
        QMessageBox::warning(this, tr("警告"),tr("用户名不存在!"),tr("返回"));
    }

}

void Getbackpwd::keyPressEvent(QKeyEvent *event){//有错误！先不管了！
    /*qDebug()<<"in KeyPressed,eventkey"<<event->key()<<endl;
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter){
        qDebug()<<"in KeyPressed QEvent::KeyPress"<<endl;
        if( ui -> userName_le -> hasFocus() ){
            if( ui -> checkExist_btn -> hasFocus()){
                if(ui -> ans_le -> hasFocus()){
                    judgeEmpty();
                }
                else{
                    ui -> ans_le -> setFocus();
                }
            }
            else{
                ui -> checkExist_btn -> setFocus();
            }
        }
        else{
            ui -> userName_le -> setFocus();
        }
    }*/
}
//new end
void Getbackpwd::judgeRight(){
    if( userAnsGet == userAnsRight ){
        QMessageBox::warning(this, tr("提示"),tr("密保答案正确！"),tr("关闭"));
        toReset();
    }
    else{
        QMessageBox::warning(this, tr("警告"),tr("密保答案错误！"),tr("关闭"));
    }
}

void Getbackpwd::cancelToMain(){
    LogInWindow *log = new LogInWindow;
    log ->show();
    close();
}
