#include "saveattach.h"
#include "ui_saveattach.h"
#include<QTextCodec>
#include "fileviewwidget.h"
#include <QDebug>
#include <QString>

SaveAttach::SaveAttach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveAttach)
{
    ui->setupUi(this);
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
