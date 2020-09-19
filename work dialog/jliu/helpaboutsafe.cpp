#include "helpaboutsafe.h"
#include "ui_helpaboutsafe.h"

#include <QPalette>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

HelpAboutSafe::HelpAboutSafe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutSafe)
{
    ui->setupUi(this);
    initSet();
}

HelpAboutSafe::~HelpAboutSafe()
{
    delete ui;
}

void HelpAboutSafe::initSet(){
    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setPalette(userColor);
        allText_lb[i]->setFont(fontType);
    }//批量操作成功！！
}
