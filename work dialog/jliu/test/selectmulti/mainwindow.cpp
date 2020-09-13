#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "table_model.h"
#include <QTableView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    TableModel *pModel = new TableModel(this);
    CheckBoxDelegate *pDelegate = new CheckBoxDelegate(this);
    TableHeaderView *pHeader = new TableHeaderView(Qt::Horizontal, this);

    // 设置单行选中、最后一列拉伸、表头不高亮、无边框等
    /*ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
    ui->tableView->horizontalHeader()->setHighlightSections(false);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setShowGrid(false);
    ui->tableView->setFrameShape(QFrame::NoFrame);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);*/

    ui->tableView->setHorizontalHeader(pHeader);
    ui->tableView->setModel(pModel);
    ui->tableView->setItemDelegate(pDelegate);

    connect(pModel, SIGNAL(stateChanged(int)), pHeader, SLOT(onStateChanged(int)));
    connect(pHeader, SIGNAL(stateChanged(int)), pModel, SLOT(onStateChanged(int)));


    // 加载数据、更新界面
    QList<FileRecord> recordList;
    for (int i = 0; i < 5; ++i)
    {
        FileRecord record;
        record.bChecked = false;
        record.strFilePath = QString("E:/Qt/image_%1.png").arg(i + 1);
        recordList.append(record);
    }
    pModel->updateData(recordList);
}

MainWindow::~MainWindow()
{
    delete ui;
}
