#include "settings.h"
#include "ui_settings.h"
#include "mainwindow.h"

#include <QDebug>
#include <QSize>
#include <QColorDialog>
#include <QFontDialog>

#define FONT_SIZE_MIN 1
#define FONT_SIZE_MAX 20
#define FONT_SIZE_DEFAULT 10
#define FONT_SINGLE_STEP 1

extern QColor fontColor;
extern QFont fontType;
extern QColor buttonColor;
extern QString buttonBackCol;
extern QString fontColorArgb;
extern QColor backColor;
extern QString backGroundColor;

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{  
    defaultSet();//默认设置
    setConnect();
}

Settings::~Settings(){
    delete ui;
}

void Settings::chooseTheme(){

}

void Settings::chooseFontColor(){
    fontColor = QColorDialog::getColor(fontColor, this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    fontColorArgb = QString("color:rgba(%1, %2, %3, %4);")
            .arg(fontColor.red())
            .arg(fontColor.green())
            .arg(fontColor.blue())
            .arg(fontColor.alpha());
    changeColor();

}

void Settings::chooseFontType(){
    bool *isfontType = new bool();
    fontType = QFontDialog::getFont( isfontType , this);
    changeFont();
    delete isfontType;
}

void Settings::toMainWindow(){
    mainWin = new MainWindow();
    mainWin->show();
    this->close();
}

void Settings::cancelToMainWindow(){
    fontColor = lastColor;
    fontType = lastFont;
    changeColor();
    changeFont();
    mainWin = new MainWindow();
    mainWin->show();
    this->close();
}

void Settings::defaultSet (){
    ui->setupUi(this);
    setWindowTitle("设置");
    allText_lb = this -> findChildren<QLabel*>();
    allText_btn = this -> findChildren<QPushButton*>();

    //设置comboBox的选项

    lastFont = fontType;
    lastColor = fontColor;

    ui -> theme_cb -> addItem("经典灰");
    ui -> theme_cb -> addItem("林间绿意");
    ui -> theme_cb -> addItem("夜幕主题");
    ui -> theme_cb -> addItem("少女迷梦");
    ui -> theme_cb -> addItem("圣诞快乐");
    ui -> theme_cb -> addItem("大漠橘子");
    ui -> theme_cb -> addItem("薄荷蓝");
    ui -> theme_cb -> addItem("彩蛋-🌴椰汁");

    changeColor();
    changeFont();

}

void Settings::changeColor(){
    for(int i = 0;i < labelNum; i++){
        allText_lb[i] -> setStyleSheet( fontColorArgb );
    }
    for(int i = 0; i < buttonNum; i++){
        allText_btn[i] -> setStyleSheet( fontColorArgb+buttonBackCol );
    }
}

void Settings::changeFont(){
    for(int i = 0 ;i< labelNum ; i++){
        allText_lb[i]->setFont( fontType );

    }
    for(int i = 0; i < buttonNum; i++){
        allText_btn[i]->setFont( fontType );
        allText_btn[i]->setStyleSheet( fontColorArgb+buttonBackCol );
    }

}

void Settings::chooseButtonColor(){
    buttonColor = QColorDialog::getColor(fontColor, this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    buttonBackCol = QString("background-color:rgba(%1, %2, %3, %4);")
            .arg(buttonColor.red())
            .arg(buttonColor.green())
            .arg(buttonColor.blue())
            .arg(buttonColor.alpha());
    changeColor();
}

void Settings::chooseBackColor(){
    backColor = QColorDialog::getColor(backGroundColor, this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    backGroundColor = QString("background-color:rgba(%1, %2, %3, %4);")
            .arg(backColor.red())
            .arg(backColor.green())
            .arg(backColor.blue())
            .arg(backColor.alpha());
    changeBackColor();
}

void  Settings::changeBackColor(){
    this -> setStyleSheet(backGroundColor);
}

void Settings::setConnect(){
    //connect(ui ->  , SIGNAL(clicked()), this, SLOT( chooseTheme()));
    connect(ui -> fontType_btn , SIGNAL(clicked()), this, SLOT( chooseFontType()));
    connect(ui -> choosecol_btn , SIGNAL(clicked()), this, SLOT( chooseFontColor()));
    connect(ui -> buttonCol_btn , SIGNAL(clicked()), this, SLOT( chooseButtonColor()));
    connect(ui -> save_btn , SIGNAL(clicked()), this, SLOT( toMainWindow()));
    connect(ui -> cancel_btn , SIGNAL(clicked()), this, SLOT( cancelToMainWindow()));
    connect(ui -> background_btn , SIGNAL(clicked()), this, SLOT( chooseBackColor()));
}

void Settings::on_theme_cb_currentIndexChanged(int index){
    setTheme(index);
}

void Settings::setTheme(int index){
    switch(index){
    case 0:{       
        backGroundColor = QString("background-color:rgba(214,214,214,255);");
        buttonBackCol = QString("background-color:rgba(204,204,204,255);");
        fontColorArgb =QString("color:rgba(0,0,0,255);");
        break;
    }
    case 1:{       
        backGroundColor = QString("background-color:rgba(160,191,124,255);");
        buttonBackCol = QString("background-color:rgba(101,147,74,255);");
        fontColorArgb = QString("color:rgba(64,116,52,255);");
        break;
    }
    case 2:{
        backGroundColor = QString("background-color:rgba(0,0,33,255);");
        buttonBackCol = QString("background-color:rgba(59,67,108,255);");
        fontColorArgb = QString("color:rgba(152,171,255,255);");
        break;
    }
    case 3:{
        backGroundColor = QString("background-color:rgba(250,230,249,255);");
        buttonBackCol = QString("background-color:rgba(250,220,255,255);");
        fontColorArgb = QString("color:rgba(40,0,0,255);");
        break;
    }
    case 4:{
        backGroundColor = QString("background-color:rgba(0,85,0,255);");
        buttonBackCol = QString("background-color:rgba(85,0,0,255);");
        fontColorArgb = QString("color:rgba(255,255,0,255);");
        break;
    }
    case 5:{
        backGroundColor = QString("background-color:rgba(250,249,222,255);");
        buttonBackCol = QString("background-color:rgba(255,170,0,255);");
        fontColorArgb = QString("color:rgba(109,0,0,255);");
        break;
    }
    case 6:{
        backGroundColor = QString("background-color:rgba(173,224,232,255);");
        buttonBackCol = QString("background-color:rgba(156,234,234,255);");
        fontColorArgb = QString("color:rgba(0,0,80,255);");
        break;
    }
    case 7:{
        backGroundColor = QString("background-color:rgba(0,0,0,255);");
        buttonBackCol = QString("background-color:rgba(14,56,244,255);");
        fontColorArgb = QString("color:rgba(255,0,0,255);");
        break;
    }
    case 8:{
        break;
    }
    case 9:{
        break;
    }
    case 10:{
        break;
    }
    }
    changeBackColor();
    changeColor();
}
