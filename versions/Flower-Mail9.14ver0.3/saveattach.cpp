#include "saveattach.h"
#include "ui_saveattach.h"
#include "fileviewwidget.h"

#include<QTextCodec>
#include <QDebug>
#include <QString>

extern QString fontColorArgb;
extern QString buttonBackCol;
extern QFont fontType;

SaveAttach::SaveAttach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveAttach)
{
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
    connect( ui ->openFileViewBtn, SIGNAL( clicked() ), this, SLOT(openFileView()));

}

SaveAttach::~SaveAttach()
{
    delete ui;
}


void SaveAttach::openFileView(){
    qDebug() <<"openFileView"<< endl;
    FileViewWidget *win;
    win = new FileViewWidget;
    win -> show();
}

void SaveAttach::initSet(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i]->setFont( fontType );
         allText_btn[i]->setStyleSheet( fontColorArgb+buttonBackCol );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setStyleSheet( fontColorArgb );
         allText_lb[i] -> setFont( fontType );
    }

    allText_te = this -> findChildren<QTextEdit*>();
    for(int i = 0 ;i < textEditNum ;i++){
         allText_te[i] -> setStyleSheet( fontColorArgb );
         allText_te[i] -> setFont( fontType );
    }
}
