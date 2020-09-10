#include "wordsize.h"
#include "ui_wordsize.h"

WordSize::WordSize(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordSize)
{
    ui->setupUi(this);
}

WordSize::~WordSize()
{
    delete ui;
}
