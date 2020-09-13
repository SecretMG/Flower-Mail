#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "writeletterwindow.h" //写信件
#include "settings.h" //主题设置
#include "personinfo.h"    //个人中心
#include "checklogout.h"  //登出提醒

#include <QDialog>
#include <QDebug>
#include <QPalette>
#include <QTimer>
#include <QDateTime>

extern QPalette userColor;
extern QFont fontType;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setTheme();
    timerBuild();
    tableBuild();
    setConnect();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openWriteLetter(){
    qDebug() <<"openWriteLetter"<< endl;
    writeletterW = new WriteLetterWindow;
    writeletterW -> show();
}

void MainWindow::openSearchResult(){
    qDebug() <<"openSearchResult"<< endl;
    searchResult = new SearchResultWindow;
    searchResult -> show();
}

void MainWindow::openSettings(){
    qDebug() <<"openSettings"<< endl;
    Settings *settings;
    settings = new Settings;
    settings -> show();
    this -> close();
}

void MainWindow::openPersoninfo(){
    qDebug() <<"openPersoninfo"<< endl;
    personInfo = new Personinfo;
    personInfo -> show();
}

void MainWindow::openChecklogout(){
    qDebug() <<"openChecklogout"<< endl;
    checkLogout = new Checklogout;
    checkLogout -> show();
}

void MainWindow::setConnect(){
    connect( ui -> WriteEmail, SIGNAL(clicked()), this, SLOT( openWriteLetter()) );
    connect( ui -> SearchButton, SIGNAL(clicked()), this, SLOT( openSearchResult()) );
    connect( ui -> SettingB, SIGNAL(clicked()), this, SLOT( openSettings()) );
    connect( ui -> PersonalCenter, SIGNAL(clicked()), this, SLOT( openPersoninfo()) );
    connect( ui -> Logout, SIGNAL(clicked()), this, SLOT( openChecklogout()) );
}

void MainWindow::setTheme(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i=0;i<10;i++){
         allText_btn[i]->setPalette( userColor );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < 2 ;i++){
         allText_lb[i] -> setPalette( userColor );
         allText_lb[i] -> setFont( fontType );
    }

    ui ->label -> adjustSize();
    ui ->label_2 -> adjustSize();
}

void MainWindow::timerBuild(){
    /*此处为生成update时间*/
    id1 = startTimer(1000);  // 开启一个1秒定时器，返回其ID
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    //关联定时器溢出信号和相应的槽函数
    timer->start(1000);
}

void MainWindow::timerUpdate(){
       //获取系统现在的时间
       QDateTime time = QDateTime::currentDateTime();
       //设置系统时间显示格式
       QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
       //在标签上显示时间
       ui -> timeUpdate -> setText(str);
}
/*以下内容为表格生成*/
void MainWindow::tableBuild(){
    int boxState = 1 ; //设定信箱分类；默认收件箱=1，已发送=2，草稿=3，垃圾=4，未读=5,此处需要与后端链接，也需要一个信箱点击为1-5的输入确定收取内容和表格
    standItemModel = new QStandardItemModel();//添加QTableView代码
    //添加表头
    standItemModel->setColumnCount(4);
    standItemModel->setHeaderData(0,Qt::Horizontal,QStringLiteral(" "));   //设置表头内容
    if ((boxState == 1)||(boxState>3)){
        standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("发件人"));
    }
    else {
        standItemModel->setHeaderData(1,Qt::Horizontal,QStringLiteral("收件人"));
    }
    standItemModel->setHeaderData(2,Qt::Horizontal,QStringLiteral("主题"));
    standItemModel->setHeaderData(3,Qt::Horizontal,QStringLiteral("时间戳"));

    //向表格添加10行内容，用以展示，可以将此内容看作test效果
    for(int i=0;i<10;i++){
        QStandardItem *standItem2 = new QStandardItem(tr("第%1行").arg(i+1));
        QStandardItem *standItem4 = new QStandardItem(tr("第%1行").arg(i+1));
        //以下为头checkbox功能
        QStandardItem *Item_IOCheckBox[i]; //表格共设置32行，需要32个Item_IOCheckBox复选框类对象
        Item_IOCheckBox[i] = new QStandardItem();
        Item_IOCheckBox[i]->setCheckable(true);
        Item_IOCheckBox[i]->setCheckState( Qt::Unchecked );
        standItemModel->setItem(i, 0 ,Item_IOCheckBox[i] ); //自定义表格头，checkbox
        standItemModel->setItem(i,1,standItem2);   //表格第i行，第2列添加一项内容
        standItemModel->item(i,1)->setTextAlignment(Qt::AlignCenter);           //设置表格内容居中
        standItemModel->setItem(i,3,standItem4);
    }//*/此处可以视作留给数据的输入口


    ui -> tableView->setModel(standItemModel);    //挂载表格模型
    //以下内容为表格格式
    ui -> tableView->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Fixed);  //设定序号和收发栏列宽不可变
    ui -> tableView->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Fixed);
    ui -> tableView->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);//设定主题弹性拉伸

    ui -> tableView->setColumnWidth(0,18);       //设定表格的宽度
    ui -> tableView->setColumnWidth(1,100);

    ui -> tableView->verticalHeader()->hide();    //隐藏默认显示的行头
    ui -> tableView->hideColumn(3);  //隐藏时间戳列表

    ui -> tableView->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时整行选中
    ui -> tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格属性只读，不能编辑
    ui -> tableView->setAlternatingRowColors(true);  // alternative colors
    ui -> tableView->sortByColumn(3,Qt::AscendingOrder);                 //按照时间戳降序排列，也就是最后收到的排在最开头

    ui -> tableView->setContextMenuPolicy(Qt::CustomContextMenu);         //右键弹出菜单功能
    //以下为右键弹出菜单功能
    rightClickMenu = new QMenu();               //右键点击菜单
    deleteAction = new QAction(QString::fromLocal8Bit("delete/retrive"),this);               //删除or移动事件
    rightClickMenu->addAction(deleteAction);    //将action添加到菜单内
    connect(ui-> tableView, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(rithtClickMenu(QPoint)));
    connect(rightClickMenu, SIGNAL(triggered(QAction*)), this, SLOT(menuChooseAction(QAction*)));
    connect(ui-> tableView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(openDetail(QModelIndex)));


}



void MainWindow::rithtClickMenu(QPoint pos){
    QModelIndex index = ui -> tableView -> indexAt(pos);    //找到tableview当前位置信息
    if(index.isValid()){        //如果行数有效，则显示菜单
        rightClickMenu->exec(QCursor::pos());
    }
}

void MainWindow::menuChooseAction(QAction *act){  //弹出提示框，看是否删除数据
    QMessageBox message(
                QMessageBox::NoIcon, QString::fromLocal8Bit("Warn"),
                QString::fromLocal8Bit("This Mail will be moved"),
                QMessageBox::Yes | QMessageBox::No, NULL);

    if(message.exec() == QMessageBox::Yes){
        if(act->text() == QString::fromLocal8Bit("delete/retrive"))   //看选中了删除这个菜单
           ; /*model_measure -> removeRow(selected_Current_Row);  //删除掉了表格信息*/
        }
}

void MainWindow::openDetail(QModelIndex index2){
    QPoint pos2;
    index2 = ui -> tableView -> indexAt(pos2);    //找到鼠标当前位置信息

    if(index2.isValid()){        //如果行数有效，则显示detail
        qDebug() <<"openDetail()"<< endl;
        letterDetailWindows = new LetterDetailWindows;
        letterDetailWindows -> show();
    }

}
 /* 表格生成完成 //*/


