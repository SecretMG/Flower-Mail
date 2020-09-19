#include "helpmainpage.h"
#include "ui_helpmainpage.h"

#include <QStackedWidget>

extern QFont fontType;
extern QString fontColorArgb;

HelpMainPage::HelpMainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpMainPage)
{
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

HelpMainPage::~HelpMainPage()
{
    delete ui;
}

void HelpMainPage::initSet(){

    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setStyleSheet( fontColorArgb );
        allText_lb[i]->setFont( fontType );
    }//批量操作成功！！
}






