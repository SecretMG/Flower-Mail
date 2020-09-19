#include "addcontact.h"
#include "ui_addcontact.h"

AddContact::AddContact(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddContact)
{
    ui->setupUi(this);
    setWindowTitle("添加联系人");
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

AddContact::~AddContact()
{
    delete ui;
}
