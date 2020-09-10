#include "writeletterwindow.h"
#include "ui_writeletterwindow.h"
#include "wordtype.h"
#include "wordsize.h"
#include "wordcolor.h"
#include "contecterlistwindow.h"
#include "addattachwindows.h"

#include <QDebug>

WriteLetterWindow::WriteLetterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WriteLetterWindow)
{
    ui->setupUi(this);
    connect( ui -> Wtype, SIGNAL(clicked()), this, SLOT( openWordType()) );
    connect( ui -> Wsize, SIGNAL(clicked()), this, SLOT( openWordSize()) );
    connect( ui -> Wcolor, SIGNAL(clicked()), this, SLOT( openWordColor()) );
    connect( ui -> ReceiveListButton, SIGNAL(clicked()), this, SLOT( openContactor()) );
    connect( ui -> UPloadattach, SIGNAL(clicked()), this, SLOT( openAttach()) );
}

WriteLetterWindow::~WriteLetterWindow()
{
    delete ui;
}



void WriteLetterWindow::openWordType(){
    qDebug() <<"openWordType"<< endl;
    wordType = new WordType;
    wordType -> show();
}

void WriteLetterWindow::openWordSize(){
    qDebug() <<"openWordSize"<< endl;
    wordSize = new WordSize;
    wordSize -> show();
}

void WriteLetterWindow::openWordColor(){
    qDebug() <<"openWordColor"<< endl;
    wordcolor = new WordColor;
    wordcolor -> show();
}

void WriteLetterWindow::openContactor(){
    qDebug() <<"openContactor"<< endl;
    contecterListwindow = new ContecterListwindow;
    contecterListwindow -> show();
}

void WriteLetterWindow::openAttach(){
    qDebug() <<"openAttach"<< endl;
    addAttachWindows = new AddAttachWindows;
    addAttachWindows -> show();
}








