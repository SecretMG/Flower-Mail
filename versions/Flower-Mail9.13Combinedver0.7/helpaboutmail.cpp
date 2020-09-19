#include "helpaboutmail.h"
#include "ui_helpaboutmail.h"

extern QFont fontType;
extern QString fontColorArgb;

HelpAboutMail::HelpAboutMail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutMail)
{
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);

}

HelpAboutMail::~HelpAboutMail()
{
    delete ui;
}

void HelpAboutMail::initSet(){
    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setStyleSheet( fontColorArgb );
        allText_lb[i]->setFont( fontType );
    }
}
