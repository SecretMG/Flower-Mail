#include "settimewindow.h"
#include "ui_settimewindow.h"

SetTimeWindow::SetTimeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SetTimeWindow)
{
    ui->setupUi(this);
}

SetTimeWindow::~SetTimeWindow()
{
    delete ui;
}
