#include "letterscriptbox.h"
#include "ui_letterscriptbox.h"

LetterScriptBox::LetterScriptBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LetterScriptBox)
{
    ui->setupUi(this);
}

LetterScriptBox::~LetterScriptBox()
{
    delete ui;
}
