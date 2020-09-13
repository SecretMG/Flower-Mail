#include "helpmainpage.h"
#include "ui_helpmainpage.h"

HelpMainPage::HelpMainPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpMainPage)
{
    ui->setupUi(this);
}

HelpMainPage::~HelpMainPage()
{
    delete ui;
}
