#include "searchresultwindow.h"
#include "ui_searchresultwindow.h"
#include "letterdetailwindows.h"

#include <QDialog>
#include <QDebug>
#include <QWidget>
#include <QMessageBox>
#include <QModelIndex>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTableView>
#include <QHeaderView>
#include <QMenu>
#include <QAction>

SearchResultWindow::SearchResultWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchResultWindow)
{
    ui->setupUi(this);
    /*以下内容为表格生成*/
    standItemModel = new QStandardItemModel();//添加QTableView代码
    //添加表头
    standItemModel->setColumnCount(5);
    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral("序号"));   //设置表头内容
    standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("发件人"));
    standItemModel->setHeaderData(2,Qt::Horizontal,QStringLiteral("收件人"));
    standItemModel->setHeaderData(3,Qt::Horizontal,QStringLiteral("主题"));
    standItemModel->setHeaderData(4,Qt::Horizontal,QStringLiteral("时间戳"));

    //向表格添加10行内容，用以展示，可以将此内容看作test效果
    for(int i=0;i<10;i++){
        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(i+1));
        QStandardItem *standItem2 = new QStandardItem(tr("第%1行").arg(i+1));
        QStandardItem *standItem4 = new QStandardItem(tr("第%1行").arg(i+1));
        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容
        standItemModel->item(i,0)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中
        standItemModel->setItem(i,1,standItem2);   //表格第i行，第1列添加一项内容
        standItemModel->item(i,1)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中
        standItemModel->setItem(i,3,standItem4);
    }//*/此处可以视作留给数据的输入口
    ui -> tableView -> setModel(standItemModel);    //挂载表格模型

    ui -> tableView->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);  //设定序号和收发栏列宽不可变
    ui -> tableView->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    ui -> tableView->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Fixed);
    ui -> tableView->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Stretch);//设定主题弹性拉伸

    ui -> tableView->setColumnWidth(0,50);       //设定表格的宽度
    ui -> tableView->setColumnWidth(1,100);
    ui -> tableView->setColumnWidth(2,100);

    ui -> tableView->verticalHeader()->hide();    //隐藏默认显示的行头
    ui -> tableView->hideColumn(4);  //隐藏时间戳列表

    ui -> tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中
    ui -> tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui -> tableView->setAlternatingRowColors(true);  // alternative colors
    ui -> tableView->sortByColumn(4,Qt::AscendingOrder);                 //按照时间戳降序排列，也就是最后收到的排在最开头

    //以下为双击打开功能
    connect(ui-> tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(openSDetail(QModelIndex)));
    /* 表格生成完成 //*/


}

SearchResultWindow::~SearchResultWindow(){
    delete ui;
}

void SearchResultWindow::openSDetail(QModelIndex index){
    QPoint pos;
    index = ui -> tableView -> indexAt(pos);    //找到鼠标当前位置信息

    if(index.isValid()){        //如果行数有效，则显示detail
        qDebug() <<"openDetail()"<< endl;
        letterDetailWindows = new LetterDetailWindows;
        letterDetailWindows -> show();
    }

}
