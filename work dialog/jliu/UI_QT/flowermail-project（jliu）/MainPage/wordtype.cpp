#include "wordtype.h"
#include "ui_wordtype.h"

WordType::WordType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordType)
{
    ui->setupUi(this);
}

WordType::~WordType()
{
    delete ui;
}
