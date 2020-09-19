#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>

#include "writeletterwindow.h" //写信件
#include "settings.h" //主题设置
#include "personinfo.h"    //个人中心
#include "checklogout.h"  //登出提醒


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( ui -> WriteEmail, SIGNAL(clicked()), this, SLOT( openWriteLetter()) );
    connect( ui -> SearchButton, SIGNAL(clicked()), this, SLOT( openSearchResult()) );

    connect( ui -> SettingB, SIGNAL(clicked()), this, SLOT( openSettings()) );
    connect( ui -> PersonalCenter, SIGNAL(clicked()), this, SLOT( openPersoninfo()) );
    connect( ui -> Logout, SIGNAL(clicked()), this, SLOT( openChecklogout()) );

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
    settings = new Settings;
    settings -> show();
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
