#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>

#include "writeletterwindow.h" //write letter window

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect( ui -> WriteEmail, SIGNAL(clicked()), this, SLOT( openWriteLetter()) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openWriteLetter(){
    qDebug() <<"openWriteLetter"<< endl;
    writeletterW = new WriteLetterWindow;
    writeletterW -> show();
}
