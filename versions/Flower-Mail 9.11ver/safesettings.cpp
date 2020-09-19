#include "safesettings.h"
#include "ui_safesettings.h"

SafeSettings::SafeSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SafeSettings)
{
    ui->setupUi(this);
}

SafeSettings::~SafeSettings()
{
    delete ui;
}
