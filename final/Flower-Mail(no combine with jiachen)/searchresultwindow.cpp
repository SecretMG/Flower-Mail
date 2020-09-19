#include "searchresultwindow.h"
#include "ui_searchresultwindow.h"

SearchResultWindow::SearchResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchResultWindow)
{
    ui->setupUi(this);
}

SearchResultWindow::~SearchResultWindow()
{
    delete ui;
}
