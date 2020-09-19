#include "lettersentbox.h"
#include "ui_lettersentbox.h"

LetterSentBox::LetterSentBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LetterSentBox)
{
    ui->setupUi(this);
}

LetterSentBox::~LetterSentBox()
{
    delete ui;
}
