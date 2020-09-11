#include "saveattach.h"
#include "ui_saveattach.h"

SaveAttach::SaveAttach(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveAttach)
{
    ui->setupUi(this);
}

SaveAttach::~SaveAttach()
{
    delete ui;
}
