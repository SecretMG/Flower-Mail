#ifndef SEARCHRESULTWINDOW_H
#define SEARCHRESULTWINDOW_H
#include "letterdetailwindows.h"

#include <QMainWindow>

#include <QDialog>
#include <QDebug>
#include <QWidget>
#include <QMessageBox>
#include <QModelIndex>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTableView>
#include <QHeaderView>

namespace Ui {
class SearchResultWindow;
}

class SearchResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchResultWindow(QWidget *parent = nullptr);
    ~SearchResultWindow();

private:
    Ui::SearchResultWindow *ui;
    QStandardItemModel *standItemModel;
    LetterDetailWindows *letterDetailWindows;

private slots:
    void openSDetail(QModelIndex index); //此处之后需要改为传递一个时间戳的函数

};

#endif // SEARCHRESULTWINDOW_H
