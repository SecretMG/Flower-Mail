#include "letterdeletedbox.h"
#include "ui_letterdeletedbox.h"

LetterDeletedBox::LetterDeletedBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LetterDeletedBox)
{
    ui->setupUi(this);
}

LetterDeletedBox::~LetterDeletedBox()
{
    delete ui;
}
