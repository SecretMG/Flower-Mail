#include "tosafesettings.h"
#include "ui_tosafesettings.h"

#include <QMessageBox>
#include <QDebug>

ToSafeSettings::ToSafeSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToSafeSettings)
{
    ui->setupUi(this);
    init();
    connect( ui ->next_btn, SIGNAL(clicked()), this, SLOT( judgePass() ));
}

ToSafeSettings::~ToSafeSettings()
{
    delete ui;
}

void ToSafeSettings::judgePass(Ui::ToSafeSettings *ui){
    getAns = ui->ans_le->text();
    if ( getAns.isEmpty() ){
        QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);
    }
    else{
        //isMatched = isMatch(setQues,getAns);
        if ( isMatched == true ){
            toSafeSet();
        }
        else{
            QMessageBox::warning(this, tr("警告"),tr("输入不匹配！"),QMessageBox::Yes);
        }
    }

}

void ToSafeSettings::init(){
    setQues = "Default Ques";
    //连接数据库:将密保问题拉取并放到setQues中
    ui->ques_lb->setText(setQues);
    isMatched = true;
}

bool ToSafeSettings::isMatch(QString ques,QString ans){
    //数据库比对，进行密保问题和答案
    return true;
}

void ToSafeSettings::toSafeSet(){
    qDebug() <<"openPersoninfo"<< endl;
    safeSet = new SafeSettings;
    safeSet -> show();

}

