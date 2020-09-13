#include "helpaboutsafe.h"
#include "ui_helpaboutsafe.h"

#include <QPalette>

extern QFont fontType;
extern QString fontColorArgb;

HelpAboutSafe::HelpAboutSafe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutSafe)
{
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

HelpAboutSafe::~HelpAboutSafe()
{
    delete ui;
}

void HelpAboutSafe::initSet(){
    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setStyleSheet( fontColorArgb );
        allText_lb[i]->setFont( fontType );
    }//批量操作成功！！
}
