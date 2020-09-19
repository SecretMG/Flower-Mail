#include "help.h"
#include "ui_help.h"
#include "helpaboutmail.h"
#include "helpmainpage.h"

Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    initConnect();
    initNewWin();//实例化窗口

}

Help::~Help()
{
    delete ui;
}

void Help::initConnect(){
    connect( ui ->main_btn, SIGNAL(clicked()), this, SLOT( toMain()) );
    connect( ui ->mail_btn, SIGNAL(clicked()), this, SLOT( toMail()) );
    connect( ui ->safe_btn, SIGNAL(clicked()), this, SLOT( toSafe()) );
    connect( ui ->design_btn, SIGNAL(clicked()), this, SLOT( toDesign()) );
}

void Help::initNewWin(){
    helpMail = new HelpAboutMail(this);
    helpMain = new HelpMainPage(this);
    helpSafe = new HelpAboutSafe(this);
    helpDesign = new HelpAboutDesign(this);
    ui ->stackedWidget->addWidget(helpMail);
    ui ->stackedWidget->addWidget(helpMain);
    ui ->stackedWidget->addWidget(helpSafe);
    ui ->stackedWidget->addWidget(helpDesign);
    ui ->stackedWidget->setCurrentWidget(helpMail);
}

void Help::toMain(){
    ui ->stackedWidget->setCurrentWidget(helpMain);
}

void Help::toMail(){
    ui ->stackedWidget->setCurrentWidget(helpMail);
}

void Help::toSafe(){
    ui ->stackedWidget->setCurrentWidget(helpSafe);
}

void Help::toDesign(){
    ui ->stackedWidget->setCurrentWidget(helpDesign);
}
