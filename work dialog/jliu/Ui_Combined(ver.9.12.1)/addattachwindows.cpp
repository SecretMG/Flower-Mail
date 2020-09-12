#include "addattachwindows.h"
#include "ui_addattachwindows.h"

AddAttachWindows::AddAttachWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAttachWindows)
{
    ui->setupUi(this);
}

AddAttachWindows::~AddAttachWindows()
{
    delete ui;
}
