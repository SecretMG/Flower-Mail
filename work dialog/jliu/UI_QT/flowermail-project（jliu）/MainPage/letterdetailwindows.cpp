#include "letterdetailwindows.h"
#include "ui_letterdetailwindows.h"

LetterDetailWindows::LetterDetailWindows(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LetterDetailWindows)
{
    ui->setupUi(this);
}

LetterDetailWindows::~LetterDetailWindows()
{
    delete ui;
}
