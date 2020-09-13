#include "letterdetailwindows.h"
#include "ui_letterdetailwindows.h"

#include <QDebug>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

LetterDetailWindows::LetterDetailWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LetterDetailWindows)
{
    ui->setupUi(this);
    initSet();
    setConnect();
}

LetterDetailWindows::~LetterDetailWindows()
{
    delete ui;
}

void LetterDetailWindows::openReplyWindow(){
    qDebug() <<"openReplyWindow"<< endl;
    replyWindow = new WriteLetterWindow;
    replyWindow -> show();
}

void LetterDetailWindows::openForwardWindow(){
    qDebug() <<"openForwardWindow"<< endl;
    forwardWindow = new WriteLetterWindow;
    forwardWindow -> show();
}

void LetterDetailWindows::openSaveAttach(){
    qDebug() <<"openSaveAttach"<< endl;
    saveAttach = new SaveAttach;
    saveAttach -> show();
}

void LetterDetailWindows::setConnect(){
    connect( ui -> ReplyB, SIGNAL(clicked()), this, SLOT( openReplyWindow()));
    connect( ui -> ForwardB, SIGNAL(clicked()), this, SLOT( openForwardWindow()));
    connect( ui -> SaveAttachB, SIGNAL(clicked()), this, SLOT( openSaveAttach()));
}

void LetterDetailWindows::initSet(){
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

    allText_te = this -> findChildren<QTextEdit*>();
    for(int i = 0 ;i < textEditNum ;i++){
         allText_te[i] -> setPalette( userColor );//这里要改成mailColor
    }
}
