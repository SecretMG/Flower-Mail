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

    lastFont = fontType;
    lastColor = fontColor;
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
    this -> setStyleSheet(backGroundColor);

}

void Settings::setConnect(){
    connect(ui -> choosethemebtn , SIGNAL(clicked()), this, SLOT( chooseTheme()));
    connect(ui -> fontType_btn , SIGNAL(clicked()), this, SLOT( chooseFontType()));
    connect(ui -> choosecol_btn , SIGNAL(clicked()), this, SLOT( chooseFontColor()));
    connect(ui -> buttonCol_btn , SIGNAL(clicked()), this, SLOT( chooseButtonColor()));
    connect(ui -> save_btn , SIGNAL(clicked()), this, SLOT( toMainWindow()));
    connect(ui -> cancel_btn , SIGNAL(clicked()), this, SLOT( cancelToMainWindow()));
    connect(ui -> background_btn , SIGNAL(clicked()), this, SLOT( chooseBackColor()));
}



