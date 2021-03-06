#include "letterdetailwindows.h"
#include "ui_letterdetailwindows.h"

#include <QDebug>

extern QFont fontType;
extern QString fontColorArgb;
extern QString buttonBackCol;

LetterDetailWindows::LetterDetailWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LetterDetailWindows)
{
    ui->setupUi(this);
    setWindowTitle("邮件详情");
    initSet();
    setConnect();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

LetterDetailWindows::~LetterDetailWindows()
{
    delete ui;
}

void LetterDetailWindows::openReplyWindow(){
    qDebug() <<"openReplyWindow"<< endl;
    replyWindow = new WriteLetterWindow;
    emit sendSenderData(ui -> sendSet_lb ->text());  //获取lineEdit的输入并且传递出去
    emit sendThemeData(ui -> titleSet_lb ->text());  //获取lineEdit的输入并且传递出去
    replyWindow -> show();
}

void LetterDetailWindows::openForwardWindow(){
    qDebug() <<"openForwardWindow"<< endl;
    forwardWindow = new WriteLetterWindow;
    emit sendThemeData(ui -> titleSet_lb ->text());
    emit sendContextData(ui -> LetterDetailsContext ->text());
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
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i]->setFont( fontType );
         allText_btn[i]->setStyleSheet( fontColorArgb + buttonBackCol );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setStyleSheet( fontColorArgb );
         allText_lb[i] -> setFont( fontType );

    }
    allText_te = this -> findChildren<QTextEdit*>();
    for(int i = 0 ;i < textEditNum ;i++){
        allText_lb[i] -> setStyleSheet( fontColorArgb );
        allText_lb[i] -> setFont( fontType );
    }

    //数据库得到邮件详情
    ui -> sendSet_lb ->setText(sendPer);
    ui -> receiSet_lb ->setText(receiPer);
    ui -> titleSet_lb ->setText(title);
    ui -> copySet_lb ->setText(copyPer);
}
