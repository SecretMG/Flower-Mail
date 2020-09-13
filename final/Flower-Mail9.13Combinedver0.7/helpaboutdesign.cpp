#include "helpaboutdesign.h"
#include "ui_helpaboutdesign.h"

extern QFont fontType;
extern QString fontColorArgb;

HelpAboutDesign::HelpAboutDesign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutDesign)
{
    ui->setupUi(this);
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

HelpAboutDesign::~HelpAboutDesign()
{
    delete ui;
}

void HelpAboutDesign::initSet(){
    allText_lb = this->findChildren<QLabel*>();
    for(int i = 0;i < labelNum;i++){
        allText_lb[i]->setStyleSheet( fontColorArgb );
        allText_lb[i]->setFont( fontType );
    }
}
