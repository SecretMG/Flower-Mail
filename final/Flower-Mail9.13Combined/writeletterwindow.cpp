#include "writeletterwindow.h"
#include "ui_writeletterwindow.h"

#include "contecterlistwindow.h"
#include "addattachwindows.h"

#include <QDebug>

extern QPalette userColor;
extern QFont fontType;

WriteLetterWindow::WriteLetterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WriteLetterWindow)
{
    ui->setupUi(this);
    setWindowTitle("编辑邮件");
    setConnect();
    setTheme();

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

void WriteLetterWindow::setConnect(){
    /*connect( ui -> Wtype, SIGNAL(clicked()), this, SLOT( openWordType()) );
    connect( ui -> Wsize, SIGNAL(clicked()), this, SLOT( openWordSize()) );
    connect( ui -> Wcolor, SIGNAL(clicked()), this, SLOT( openWordColor()) );*/
    connect( ui -> ReceiveListButton, SIGNAL(clicked()), this, SLOT( openContactor()) );
    connect( ui -> UPloadattach, SIGNAL(clicked()), this, SLOT( openAttach()) );
    connect( ui -> SetTimeLaunch, SIGNAL(clicked()), this, SLOT( openSetTime()) );
}

void WriteLetterWindow::setTheme(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < btnNum ;i++){
         allText_btn[i]->setPalette( userColor );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setPalette( userColor );
         allText_lb[i] -> setFont( fontType );
    }

}








