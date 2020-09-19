#include "widget.h"

Widget::Widget(QWidget *parent)

    : QWidget(parent)

{

    CreateView();

}

Widget::~Widget()

{

}

void Widget::CreateView()

{
    int boxState = 1 ; //设定信箱分类；默认收件箱=1，已发送=2，草稿=3，垃圾=4，未读=5,此处需要与后端链接，也需要一个信箱点击为1-5的输入确定收取内容和表格

    mainLayout = new QVBoxLayout;       //垂直布局

    mainLayout->setSpacing(10);         //设置控件间距

    mainLayout->setMargin(10);          //设置边缘间距


    //添加QTableView代码

    tableView = new QTableView;

    standItemModel = new QStandardItemModel();

    //添加表头

    standItemModel->setColumnCount(4);

    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral("序号"));   //设置表头内容

    if ((boxState == 1)||(boxState>3)){
        standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("发件人"));
    }
    else {
        standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("收件人"));
    }

    standItemModel->setHeaderData(2,Qt::Horizontal,QStringLiteral("主题"));

    standItemModel->setHeaderData(3,Qt::Horizontal,QStringLiteral("时间戳"));

    //向表格添加100行内容

    for(int i=0;i<100;i++)

    {

        QStandardItem *standItem1 = new QStandardItem(tr("%1").arg(i+1));

        QStandardItem *standItem2 = new QStandardItem(tr("第%1行").arg(i+1));

        QStandardItem *standItem4 = new QStandardItem(tr("第%1行").arg(i+1));

        standItemModel->setItem(i,0,standItem1);                                //表格第i行，第0列添加一项内容

        standItemModel->item(i,0)->setForeground(QBrush(QColor(255,0,0)));      //设置字符颜色

        standItemModel->item(i,0)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中

        standItemModel->setItem(i,1,standItem2);   //表格第i行，第1列添加一项内容

        standItemModel->setItem(i,3,standItem4);

    }//*/此处为数据输入口

    tableView->setModel(standItemModel);    //挂载表格模型

    //设置表格属性

    tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);        //序号信息显示居中

    tableView->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);  //设定序号和收发栏列宽不可变

    tableView->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);

    tableView->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);//设定主题弹性拉伸

    tableView->setColumnWidth(0,50);       //设定表格的宽度

    tableView->setColumnWidth(1,100);

    tableView->verticalHeader()->hide();    //隐藏默认显示的行头

    tableView->hideColumn(3);  //隐藏时间戳列表

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中

    tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑

    tableView->setAlternatingRowColors(true);  // alternative colors

 //   tableView->setContextMenuPolicy(Qt::CustomContextMenu);         //需要在表格使用右键菜单，需要启动该属性

    tableView->sortByColumn(3,Qt::AscendingOrder);                 //按照时间戳降序排列，也就是最后收到的排在最开头

    mainLayout->addWidget(tableView);    //添加控件

    this->setLayout(mainLayout);        //显示垂直布局

}
