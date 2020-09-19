#include "changephoto.h"
#include "ui_changephoto.h"

extern QPalette userColor;
extern QFont fontType;

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
