#include "settings.h"
#include "ui_settings.h"
#include <QDebug>
#include <QSize>

#define FONT_SIZE_MIN 1
#define FONT_SIZE_MAX 20
#define FONT_SIZE_DEFAULT 10
#define FONT_SINGLE_STEP 1

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    defaultSet(ui);//默认设置
    setWindowTitle("设置");
    connect(ui -> choosethemebtn , SIGNAL(clicked()), this, SLOT( chooseTheme(Ui::Settings *ui)));
    connect(ui -> font_cb , SIGNAL(clicked()), this, SLOT( chooseFontType(Ui::Settings *ui)));
    connect(ui -> size_slider , SIGNAL(slidermoved(int)), this,SLOT( chooseFontSize(Ui::Settings *ui)));
    connect(ui -> choosecol_btn , SIGNAL(clicked()), this, SLOT( chooseFontColor(Ui::Settings *ui)));


}

Settings::~Settings(){
    delete ui;
}

void Settings::chooseTheme(Ui::Settings *ui){

}

void Settings::chooseFontColor(Ui::Settings *ui){
    ;
}

void Settings::chooseFontType(Ui::Settings *ui){
    QString fontName = ui -> font_cb -> currentText();
    qDebug() << "fontName:" << fontName << endl;
   //直接连接数据库操作
}

void Settings::chooseFontSize(Ui::Settings *ui){
    QSize fontSize;
    fontSize = ui ->size_slider -> size();
    qDebug() << "QSize:" << fontSize << endl;
}


void Settings::toPersonInfo(){
    ;
}

void Settings::defaultSet (Ui::Settings *ui){
    //字体初始设置
    for(int i=0; i<5; i++){
        ui -> font_cb -> addItem( font[i] );
    }
    ui -> font_cb -> setCurrentText( font[0] );

    //进度条设置
    ui -> size_slider -> setMaximum(FONT_SIZE_MAX);
    ui -> size_slider -> setMinimum(FONT_SIZE_MIN);
    ui -> size_slider -> setValue(FONT_SIZE_DEFAULT);
    ui -> size_slider -> setSingleStep(FONT_SINGLE_STEP);

}


