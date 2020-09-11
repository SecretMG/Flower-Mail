#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "writeletterwindow.h"
#include "searchresultwindow.h"

#include "settings.h"
#include "personinfo.h"
#include "checklogout.h"
#include "letterdetailwindows.h"

#include <QMainWindow>

#include <QWidget>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTableView>
#include <QHeaderView>
#include <QMenu>
#include <QAction>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    WriteLetterWindow *writeletterW;
    SearchResultWindow *searchResult;
    Settings *settings;
    Personinfo *personInfo;
    Checklogout *checkLogout;
    QStandardItemModel *standItemModel;
    QMenu *rightClickMenu; //右键点出菜单
    QAction *deleteAction; //删除操作
    LetterDetailWindows *letterDetailWindows;

private slots:
    void openWriteLetter();
    void openSearchResult();
    void openSettings();
    void openPersoninfo();
    void openChecklogout();
    void rithtClickMenu(QPoint pos); //菜单 点击   获取当前位置
    void menuChooseAction(QAction *act);
    void openDetail(QModelIndex index2); //此处之后需要改为传递一个时间戳的函数

};
#endif // MAINWINDOW_H
