#include "checklogout.h"
#include "ui_checklogout.h"

Checklogout::Checklogout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Checklogout)
{
    ui->setupUi(this);
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

Checklogout::~Checklogout()
{
    delete ui;
}
