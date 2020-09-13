#include "safesettings.h"
#include "ui_safesettings.h"

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

SafeSettings::SafeSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SafeSettings)
{
    ui->setupUi(this);
    initSet();
    setConnect();
}

SafeSettings::~SafeSettings()
{
    delete ui;
}

void SafeSettings::initSet(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum;i++){
         allText_btn[i]->setPalette( userColor );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setPalette( userColor );
         allText_lb[i] -> setFont( fontType );
    }
}

void SafeSettings::setConnect(){

}
