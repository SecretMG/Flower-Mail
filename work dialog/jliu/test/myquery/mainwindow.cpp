#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlQuery>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlQuery query;
      query.exec("select * from student");
      while(query.next())
      {
         qDebug() << query.value(0).toInt()
                                        << query.value(1).toString();
      }
}
