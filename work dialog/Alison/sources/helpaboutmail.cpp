#include "helpaboutmail.h"
#include "ui_helpaboutmail.h"

HelpAboutMail::HelpAboutMail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutMail)
{
    ui->setupUi(this);

}

HelpAboutMail::~HelpAboutMail()
{
    delete ui;
}
