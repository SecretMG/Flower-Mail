#include "letterbox.h"
#include "ui_letterbox.h"

letterbox::letterbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::letterbox)
{
    ui->setupUi(this);
}

letterbox::~letterbox()
{
    delete ui;
}
