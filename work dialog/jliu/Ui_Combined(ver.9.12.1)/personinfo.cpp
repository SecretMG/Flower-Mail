#include "personinfo.h"
#include "ui_personinfo.h"
#include "checklogout.h"
#include <QDebug>

Personinfo::Personinfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Personinfo)
{
    ui->setupUi(this);
    setWindowTitle("个人中心");
    connect(ui->logout_btn,SIGNAL(clicked()),this,SLOT(Open_logout_warn()));

}

Personinfo::~Personinfo()
{
    delete ui;
}

void Personinfo::Open_logout_warn(){
    qDebug()<<"in Open_logout_warn"<<endl;
    checklogout=new Checklogout();
    checklogout->show();
}
