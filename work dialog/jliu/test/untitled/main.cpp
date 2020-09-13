#include "MainWindow.h"

#include "ui_MainWindow.h"

#include "TableModel.h"





MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    initUI();

}



MainWindow::~MainWindow()

{

    delete ui;

}



void MainWindow::initUI()

{

    m_pTableModel = new TableModel(ui->tableView);

    ui->tableView->setModel(m_pTableModel);



    QList<stRowData> tableData;

    for(int i = 0; i < 5; ++i)

    {

        stRowData rowData;

        rowData.bCheckState = false;

        rowData.strTestData = QString("test%1").arg(i);

        tableData.append(rowData);

    }

    m_pTableModel->updateData(tableData);



}
