#include "getbackpwd.h"
#include "ui_getbackpwd.h"
#include <QMessageBox>
QString userNameGet;

Getbackpwd::Getbackpwd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Getbackpwd)
{
    ui->setupUi(this);
    setWindowTitle("找回密码");
    connect( ui ->yes_btn, SIGNAL(clicked()), this,SLOT( judgeEmpty() ) );


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

void Getbackpwd::judgeEmpty(){
    userNameGet = ui -> mail_le -> text();
    if( userNameGet.isEmpty() ){
        QMessageBox::warning(this, tr("警告"),tr("输入为空"),tr("关闭"));
    }
    else{
        if ( judgeExist() == true)
        toReset();
    }
}

bool Getbackpwd::judgeExist(){
    //数据库:判断userGet用户名是否存在,userNameNew
    bool isExist = true;

    if (isExist == true){

        return true;
    }
    else{
        ui ->mail_le->setToolTip(tr("用户名不存在"));
        return false;
    }
}
