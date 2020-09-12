#include "helpaboutdesign.h"
#include "ui_helpaboutdesign.h"

HelpAboutDesign::HelpAboutDesign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelpAboutDesign)
{
    ui->setupUi(this);
}

HelpAboutDesign::~HelpAboutDesign()
{
    delete ui;
}
