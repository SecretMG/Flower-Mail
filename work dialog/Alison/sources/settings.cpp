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

extern QPalette userColor;
extern QColor fontColor;
extern QFont fontType;

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{

    ui->setupUi(this);
    defaultSet();//默认设置
    setWindowTitle("设置");
    connect(ui -> choosethemebtn , SIGNAL(clicked()), this, SLOT( chooseTheme()));
    connect(ui -> fontType_btn , SIGNAL(clicked()), this, SLOT( chooseFontType()));
    connect(ui -> size_slider , SIGNAL(slidermoved(int)), this,SLOT( chooseFontSize()));
    connect(ui -> choosecol_btn , SIGNAL(clicked()), this, SLOT( chooseFontColor()));
    connect(ui -> save_btn , SIGNAL(clicked()), this, SLOT( toMainWindow()));
    connect(ui -> cancel_btn , SIGNAL(clicked()), this, SLOT( cancelToMainWindow()));

}

Settings::~Settings(){
    delete ui;
}

void Settings::chooseTheme(){

}

void Settings::chooseFontColor(){
    fontColor = QColorDialog::getColor(fontColor, this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    qDebug() << "choose font color" << fontColor << endl;

    changeColor();

}

void Settings::chooseFontType(){
    fontType = QFontDialog::getFont( isfontType , this);
    changeFont();
}

void Settings::chooseFontSize(){
    QSize fontSize;
    fontSize = ui ->size_slider -> size();
    qDebug() << "QSize:" << fontSize << endl;
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
    allText_lb = this -> findChildren<QLabel*>();
    allText_btn = this -> findChildren<QPushButton*>();


    //进度条设置
    ui -> size_slider -> setMaximum(FONT_SIZE_MAX);
    ui -> size_slider -> setMinimum(FONT_SIZE_MIN);
    ui -> size_slider -> setValue(FONT_SIZE_DEFAULT);
    ui -> size_slider -> setSingleStep(FONT_SINGLE_STEP);
    lastFont = fontType;
    lastColor = fontColor;
    changeColor();
    changeFont();
}

void Settings::changeColor(){
    qDebug() << "change!! font color" << fontColor << endl;

    userColor.setColor( QPalette::WindowText,fontColor );
    userColor.setColor( QPalette::ButtonText,fontColor );
    userColor.setColor( QPalette::Text,fontColor );

    for(int i = 0;i < labelNum; i++){
        allText_lb[i] -> setPalette( userColor );
    }
    for(int i = 0; i < buttonNum; i++){
        allText_btn[i] -> setPalette( userColor );
    }
}

void Settings::changeFont(){
    for(int i = 0 ;i< labelNum ; i++){
        allText_lb[i]->setFont( fontType );
    }
    for(int i = 0; i < buttonNum; i++){
        allText_btn[i]->setFont( fontType );
    }

    /*ui ->color_lb ->adjustSize();
    ui ->font_label -> adjustSize();
    ui ->size_lb -> adjustSize();
    ui ->textsettings_lb ->adjustSize();*/
}


