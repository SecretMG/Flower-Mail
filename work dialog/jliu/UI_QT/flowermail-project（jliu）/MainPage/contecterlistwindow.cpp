#include "contecterlistwindow.h"
#include "ui_contecterlistwindow.h"

ContecterListwindow::ContecterListwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContecterListwindow)
{
    ui->setupUi(this);
}

ContecterListwindow::~ContecterListwindow()
{
    delete ui;
}
