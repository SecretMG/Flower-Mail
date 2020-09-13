#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this); 
    modelTabIOOut = new QStandardItemModel();//输出IO表格
    /*for(int i=0;i<32;i++)
    {
       Item_IOCheckBox[i] = new QStandardItem();
    }*/



    //输出IO表格模型

    modelTabIOOut->setColumnCount(3);//设置列数

    modelTabIOOut->setRowCount(90);//设置行数

    modelTabIOOut->setHeaderData(0,Qt::Horizontal," ");

    modelTabIOOut->setHeaderData(1,Qt::Horizontal,"位");

    modelTabIOOut->setHeaderData(2,Qt::Horizontal,"标签");

    //输出IO表属性

    for(int i=0;i<14;i++)

    {
        QStandardItem *Item_IOCheckBox[i]; //表格共设置32行，需要32个Item_IOCheckBox复选框类对象
        Item_IOCheckBox[i] = new QStandardItem();
        Item_IOCheckBox[i]->setCheckable(true);

        Item_IOCheckBox[i]->setCheckState( Qt::Unchecked );

        modelTabIOOut->setItem( i, Item_IOCheckBox[i] );

        modelTabIOOut->setItem( i, 1, new QStandardItem(QString::number(i)));

    }

    ui->tableView_IOOut->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);//字体居中

    ui->tableView_IOOut->verticalHeader()->setDefaultSectionSize(20);//固定行高度为6

    ui->tableView_IOOut->verticalHeader()->setVisible(false);    //列表头不可见

    ui->tableView_IOOut->setShowGrid(true);//表中网格线可见

    ui->tableView_IOOut->setModel(modelTabIOOut);

    ui->tableView_IOOut->setColumnWidth(0,40);

    ui->tableView_IOOut->setColumnWidth(1,40);

    ui->tableView_IOOut->setColumnWidth(2,320);
}

MainWindow::~MainWindow()
{
    delete ui;
}

