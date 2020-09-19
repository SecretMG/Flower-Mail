#include "z_sent_alert.h"
#include "ui_z_sent_alert.h"

Zsentboxalert::Zsentboxalert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zsentboxalert)
{
    ui->setupUi(this);
}

Zsentboxalert::~Zsentboxalert()
{
    delete ui;
}
