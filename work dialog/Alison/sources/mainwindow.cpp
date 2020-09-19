#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "writeletterwindow.h" //写信件
#include "settings.h" //主题设置
#include "personinfo.h"    //个人中心
#include "checklogout.h"  //登出提醒

#include <QDialog>
#include <QDebug>
#include <QPalette>

extern QPalette userColor;
extern QFont fontType;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setTheme();
    setConnect();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openWriteLetter(){
    qDebug() <<"openWriteLetter"<< endl;
    writeletterW = new WriteLetterWindow;
    writeletterW -> show();
}

void MainWindow::openSearchResult(){
    qDebug() <<"openSearchResult"<< endl;
    searchResult = new SearchResultWindow;
    searchResult -> show();
}

void MainWindow::openSettings(){
    qDebug() <<"openSettings"<< endl;
    Settings *settings;
    settings = new Settings;
    settings -> show();
    this -> close();
}

void MainWindow::openPersoninfo(){
    qDebug() <<"openPersoninfo"<< endl;
    personInfo = new Personinfo;
    personInfo -> show();
}

void MainWindow::openChecklogout(){
    qDebug() <<"openChecklogout"<< endl;
    checkLogout = new Checklogout;
    checkLogout -> show();
}

void MainWindow::setConnect(){
    connect( ui -> WriteEmail, SIGNAL(clicked()), this, SLOT( openWriteLetter()) );
    connect( ui -> SearchButton, SIGNAL(clicked()), this, SLOT( openSearchResult()) );
    connect( ui -> SettingB, SIGNAL(clicked()), this, SLOT( openSettings()) );
    connect( ui -> PersonalCenter, SIGNAL(clicked()), this, SLOT( openPersoninfo()) );
    connect( ui -> Logout, SIGNAL(clicked()), this, SLOT( openChecklogout()) );
}

void MainWindow::setTheme(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i=0;i<10;i++){
         allText_btn[i]->setPalette( userColor );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < 2 ;i++){
         allText_lb[i] -> setPalette( userColor );
         allText_lb[i] -> setFont( fontType );
    }

    ui ->label -> adjustSize();
    ui ->label_2 -> adjustSize();
}
