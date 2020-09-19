#include "letterdetailwindows.h"
#include "ui_letterdetailwindows.h"

#include <QDebug>

LetterDetailWindows::LetterDetailWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LetterDetailWindows)
{
    ui->setupUi(this);
    connect( ui -> ReplyB, SIGNAL(clicked()), this, SLOT( openReplyWindow()));
    connect( ui -> ForwardB, SIGNAL(clicked()), this, SLOT( openForwardWindow()));
    connect( ui -> SaveAttachB, SIGNAL(clicked()), this, SLOT( openSaveAttach()));
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
