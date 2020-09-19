#include "helpaboutsafe.h"
#include "ui_helpaboutsafe.h"

#include <QPalette>

HelpAboutSafe::HelpAboutSafe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutSafe)
{
    ui->setupUi(this);
    QList<QLabel*> allText_lb = this->findChildren<QLabel*>();
    for(int i=0;i<6;i++){
        allText_lb[i]->setPalette(setWhiteTheme());
    }//批量操作成功！！
}

HelpAboutSafe::~HelpAboutSafe()
{
    delete ui;
}
