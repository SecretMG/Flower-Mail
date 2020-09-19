#include "contecterlistwindow.h"
#include "ui_contecterlistwindow.h"

#include <QDebug>

#include "addcontact.h"


extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

ContecterListwindow::ContecterListwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContecterListwindow)
{
    ui->setupUi(this);

    connect( ui -> AddContactBut, SIGNAL(clicked()), this, SLOT( openAddContact()) );
    contactBuild();
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);

}

ContecterListwindow::~ContecterListwindow()
{
    delete ui;
}

void ContecterListwindow::openAddContact(){
    qDebug() <<"openWriteLetter"<< endl;
    addContact = new AddContact;
    addContact -> show();
}

void ContecterListwindow::contactBuild(){
    standItemModel = new QStandardItemModel();//添加QTableView代码
    standItemModel->setColumnCount(2);
    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral(" "));   //设置表头内容
    standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("联系人"));

    //向表格添加10行内容，用以展示，可以将此内容看作test效果
    for(int i=0;i<10;i++){
        QStandardItem *standItem2 = new QStandardItem(tr("第%1行").arg(i+1));
        //以下为头checkbox功能
        QStandardItem *Item_IOCheckBox[i]; //表格共设置32行，需要32个Item_IOCheckBox复选框类对象
        Item_IOCheckBox[i] = new QStandardItem();
        Item_IOCheckBox[i]->setCheckable(true);
        Item_IOCheckBox[i]->setCheckState( Qt::Unchecked );
        standItemModel->setItem(i, 0 ,Item_IOCheckBox[i] ); //自定义表格头，checkbox
        standItemModel->setItem(i,1,standItem2);   //表格第i行，第2列添加一项内容
        standItemModel->item(i,1)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中
    }//*/此处可以视作留给数据的输入口


    ui -> tableView ->setModel(standItemModel);    //挂载表格模型
    //以下内容为表格格式
    ui -> tableView ->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);  //设定序号和收发栏列宽不可变
    ui -> tableView ->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);//设定主题弹性拉伸

    ui -> tableView ->setColumnWidth(0,18);       //设定表格的宽度

    ui -> tableView ->verticalHeader()->hide();    //隐藏默认显示的行头

    ui -> tableView ->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中
    ui -> tableView ->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui -> tableView ->setAlternatingRowColors(true);  // alternative colors
    /* 表格生成完成 //*/
}

void ContecterListwindow::initSet(){
    setWindowTitle("选择联系人");
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i]->setStyleSheet( fontColorArgb );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setStyleSheet( fontColorArgb );
         allText_lb[i] -> setFont( fontType );
    }
}

