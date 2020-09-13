#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QLineEdit>
#include <QString>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QFileDialog *fileDialog = new QFileDialog();
    //定义文件对话框标题
    fileDialog->setWindowTitle(QStringLiteral("选中文件"));
    //设置默认文件路径
    fileDialog->setDirectory(".");
    //设置文件过滤器
    //fileDialog->setNameFilter(tr("File(*.*)"));
    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    //打印所有选择的文件的路径
    QStringList fileNames;
    if (fileDialog->exec()){
        fileNames = fileDialog->selectedFiles();}
    QString str = fileNames.join("");
    ui -> label ->setText(QString(str));
}

MainWindow::~MainWindow()
{
    delete ui;
}

