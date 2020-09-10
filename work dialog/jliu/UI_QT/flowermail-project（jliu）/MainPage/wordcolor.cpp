#include "wordcolor.h"
#include "ui_wordcolor.h"

WordColor::WordColor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordColor)
{
    ui->setupUi(this);
}

WordColor::~WordColor()
{
    delete ui;
}
