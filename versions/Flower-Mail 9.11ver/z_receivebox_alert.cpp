#include "z_receivebox_alert.h"
#include "ui_z_receivebox_alert.h"

ZreceiveboxAlert::ZreceiveboxAlert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZreceiveboxAlert)
{
    ui->setupUi(this);
}

ZreceiveboxAlert::~ZreceiveboxAlert()
{
    delete ui;
}
