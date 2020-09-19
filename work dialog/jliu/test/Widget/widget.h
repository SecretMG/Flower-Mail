
#ifndef WIDGET_H

#define WIDGET_H

#include <QWidget>

#include <QVBoxLayout>

#include <QPushButton>

#include <QStandardItem>

#include <QStandardItemModel>

#include <QTreeView>

#include <QTableView>

#include <QHeaderView>  //tableView->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);

class Widget : public QWidget

{

    Q_OBJECT

public:

    Widget(QWidget *parent = 0);

    ~Widget();

    void CreateView();

private:

    QPushButton *testBtn;

    QVBoxLayout *mainLayout;

//    QTreeView *treeView;

    QStandardItemModel *standItemModel;

    QTableView *tableView;



};

#endif // WIDGET_H






