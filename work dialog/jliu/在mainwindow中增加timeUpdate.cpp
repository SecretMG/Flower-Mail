//在mainwindow的.h中增加：
private：
        int id1;
private slots:
    void timerUpdate();

//在mainwindow的.cpp中增加：
    //生成函数处：
    id1 = startTimer(1000);  // 开启一个1秒定时器，返回其ID

    QTimer *timer = new QTimer(this);
    //关联定时器溢出信号和相应的槽函数
    connect(timer, SIGNAL(timeout()), this, SLOT(timerUpdate()));
    timer->start(1000);

void Widget::timerUpdate()
{
   //获取系统现在的时间
   QDateTime time = QDateTime::currentDateTime();
   //设置系统时间显示格式
   QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
   //在标签上显示时间
   ui->timeUpdate->setText(str);
}

//在mainwindow的ui中添加一个label，改名为：timeUpdate
//之后全部完成
