#include "changephoto.h"
#include "ui_changephoto.h"

Changephoto::Changephoto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Changephoto)
{
    ui->setupUi(this);
}

Changephoto::~Changephoto()
{
    delete ui;
}
