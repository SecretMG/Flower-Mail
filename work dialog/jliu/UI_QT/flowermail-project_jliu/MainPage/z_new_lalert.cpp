#include "z_new_lalert.h"
#include "ui_znewlalert.h"

ZnewLAlert::ZnewLAlert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZnewLAlert)
{
    ui->setupUi(this);
}



ZnewLAlert::~ZnewLAlert()
{
    delete ui;
}
