
#include "mainwindow.h"

#include "ui_mainwindow.h"

#include "dialog.h"



MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::MainWindow)

{

    ui->setupUi(this);



    Dialog *dlg = new Dialog;

    //关联信号和槽函数

    connect(dlg, SIGNAL(sendData(QString)), this, SLOT(receiveData(QString)));

    dlg->show();

}



MainWindow::~MainWindow()

{

    delete ui;

}



void MainWindow::receiveData(QString data)

{

    ui->textEdit->setText(data);     //获取传递过来的数据

}
