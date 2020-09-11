#include "z_draft_alert.h"
#include "ui_z_draft_alert.h"

ZDraftAlert::ZDraftAlert(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ZDraftAlert)
{
    ui->setupUi(this);
}

ZDraftAlert::~ZDraftAlert()
{
    delete ui;
}
