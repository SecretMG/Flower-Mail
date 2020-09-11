#include "logoutwindow.h"
#include "ui_logoutwindow.h"

Logoutwindow::Logoutwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Logoutwindow)
{
    ui->setupUi(this);
}

Logoutwindow::~Logoutwindow()
{
    delete ui;
}
