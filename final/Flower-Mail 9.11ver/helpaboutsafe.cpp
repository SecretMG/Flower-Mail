#include "helpaboutsafe.h"
#include "ui_helpaboutsafe.h"

HelpAboutSafe::HelpAboutSafe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutSafe)
{
    ui->setupUi(this);
}

HelpAboutSafe::~HelpAboutSafe()
{
    delete ui;
}
