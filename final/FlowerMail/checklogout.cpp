#include "checklogout.h"
#include "ui_checklogout.h"

Checklogout::Checklogout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Checklogout)
{
    ui->setupUi(this);
}

Checklogout::~Checklogout()
{
    delete ui;
}
