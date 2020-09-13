#include "addcontact.h"
#include "ui_addcontact.h"

AddContact::AddContact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddContact)
{
    ui->setupUi(this);
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

AddContact::~AddContact()
{
    delete ui;
}
