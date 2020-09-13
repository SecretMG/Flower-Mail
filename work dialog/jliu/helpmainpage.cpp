#include "helpmainpage.h"
#include "ui_helpmainpage.h"

#include <QStackedWidget>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

HelpMainPage::HelpMainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpMainPage)
{
    ui->setupUi(this);
    initSet();
}

HelpMainPage::~HelpMainPage()
{
    delete ui;
}

void HelpMainPage::initSet(){

    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setPalette(userColor);
        allText_lb[i]->setFont(fontType);
    }//批量操作成功！！
}






