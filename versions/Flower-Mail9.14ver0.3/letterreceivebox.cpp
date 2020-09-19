#include "letterreceivebox.h"
#include "ui_letterreceivebox.h"

LetterReceiveBox::LetterReceiveBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LetterReceiveBox)
{
    ui->setupUi(this);
}

LetterReceiveBox::~LetterReceiveBox()
{
    delete ui;
}
