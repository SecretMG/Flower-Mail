#include "resetpassword.h"
#include "ui_resetpassword.h"
#include "mainwindow.h"
#include <QMessageBox>

Resetpassword::Resetpassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Resetpassword)
{
    ui->setupUi(this);
    setWindowTitle("重置密码");
}

Resetpassword::~Resetpassword()
{
    delete ui;
}

bool Resetpassword::judgeInputEmpty(){
    if( newPassword.isEmpty() || checkPassword.isEmpty() ){
        return true;
    }
    else{
        return false;
    }
}

bool Resetpassword::judgeInputSame(){
    if( newPassword == checkPassword ){
        return true;
    }
    else{
        return false;
    }
}

void Resetpassword::judgeEmpty(){
    bool isInputEmpty = true;
    bool isInputSame = false;


    newPassword = ui ->newpwd_le -> text();
    checkPassword = ui -> checkpwb_le ->text();

    isInputEmpty = judgeInputEmpty();
    isInputSame = judgeInputSame();
    qDebug()<< "first:" << newPassword << "next:" << checkPassword << endl;
    qDebug()<< "Empty?" << isInputEmpty << "Same?" << isInputSame << endl;

    if( isInputEmpty == false && isInputSame == true ){
        QMessageBox::warning(this, tr("提示"),tr("密码重置成功"),tr("关闭"));
        toMainWindow();
    }
    else{
        if(isInputEmpty == true){
            qDebug() << "In Resetpasswor:: Empty" <<endl;
            QMessageBox::warning(this, tr("警告"),tr("密码输入为空！"),tr("关闭"));

        }
        else{
            if( isInputSame == false ){
                //
                qDebug() << "In Resetpasswor:: NotSame" <<endl;
                QMessageBox::warning(this, tr("警告"),tr("密码输入不一致！"),tr("关闭"));
                ui->newpwd_le->clear();
                ui->checkpwb_le->clear();
            }
        }
    }

}

void Resetpassword::toMainWindow(){
    printf("toMainWindow\n");
    MainWindow *mainWindow;
    mainWindow = new MainWindow;
    QMessageBox::warning(this, tr(""),tr("登陆成功!"),tr("确定"));
    mainWindow -> show();
    close();
}
