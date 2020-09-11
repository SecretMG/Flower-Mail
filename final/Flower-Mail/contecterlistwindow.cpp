#include "contecterlistwindow.h"
#include "ui_contecterlistwindow.h"

#include <QDebug>

#include "addcontact.h"

ContecterListwindow::ContecterListwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContecterListwindow)
{
    ui->setupUi(this);

    connect( ui -> AddContactBut, SIGNAL(clicked()), this, SLOT( openAddContact()) );
}

ContecterListwindow::~ContecterListwindow()
{
    delete ui;
}

void ContecterListwindow::openAddContact(){
    qDebug() <<"openWriteLetter"<< endl;
    addContact = new AddContact;
    addContact -> show();
}
