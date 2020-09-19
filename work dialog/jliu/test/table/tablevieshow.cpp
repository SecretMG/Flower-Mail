#include "tablevieshow.h"
#include "ui_tablevieshow.h"

tableVieShow::tableVieShow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tableVieShow)
{
    ui->setupUi(this);
}

tableVieShow::~tableVieShow()
{
    delete ui;
}


void tableVieShow::on_tableView_doubleClicked(const QModelIndex &index)
{
    QSqlTableModel *model = new QSqlTableModel;
        model->setTable("student"); //指定要做模型的表
        model->setHeaderData(0, Qt::Horizontal, "学号");  //设置第一列的字段名为学号
        model->setHeaderData(1, Qt::Horizontal, "姓名");
        model->setHeaderData(2, Qt::Horizontal, "选课号");
        model->select();

        ui->tableView_student->setModel (model); //关键步骤
        QSqlRecord record=model->record(index.row()); //关键步骤

        //01.记录被点击行的"name"列(与数据库这张表的列头名相同)，到局部变量namestr中
        QString namestr = record.value("name").toString();
        //02.下同
        QString sid = record.value("stuID").toString();
        QString chooseCID= record.value("chooseClassID").toString();
        //显示相应文本到lineEdit控件
        ui->lineEdit_stuID->setText(sid);
        ui->lineEdit_name->setText(namestr);
        ui->lineEdit_chooseClassID->setText(chooseCID);
}
