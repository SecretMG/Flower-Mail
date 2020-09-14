#include "addattachwindows.h"
#include "ui_addattachwindows.h"

#include <QPalette>
#include <QPushButton>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

AddAttachWindows::AddAttachWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAttachWindows)
{
    setWindowTitle("上传附件");
    setWindowTitle("附件上传");
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

AddAttachWindows::~AddAttachWindows()
{
    delete ui;
}

void AddAttachWindows::initSet(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i] -> setStyleSheet( fontColorArgb );
         allText_btn[i] -> setFont( fontType );
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
