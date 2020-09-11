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
    /*connect( ui -> Wtype, SIGNAL(clicked()), this, SLOT( openWordType()) );
    connect( ui -> Wsize, SIGNAL(clicked()), this, SLOT( openWordSize()) );
    connect( ui -> Wcolor, SIGNAL(clicked()), this, SLOT( openWordColor()) );*/
    connect( ui -> ReceiveListButton, SIGNAL(clicked()), this, SLOT( openContactor()) );
    connect( ui -> UPloadattach, SIGNAL(clicked()), this, SLOT( openAttach()) );
    connect( ui -> SetTimeLaunch, SIGNAL(clicked()), this, SLOT( openSetTime()) );

}

WriteLetterWindow::~WriteLetterWindow()
{
    delete ui;
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

void WriteLetterWindow::openSetTime(){
    qDebug() <<"openSetTime"<< endl;
    setTime = new SetTimeWindow;
    setTime -> show();
}








