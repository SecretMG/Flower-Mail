#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "writeletterwindow.h"
#include "searchresultwindow.h"
#include "personinfo.h"
#include "checklogout.h"
#include "letterdetailwindows.h"

#include <QMainWindow>
#include <QLabel>
#include <QWidget>
#include <QTableView>
#include <QHeaderView>
#include <QMenu>
#include <QAction>
#include <QMessageBox>
#include <QStandardItem>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void tableBuild();

private:
    Ui::MainWindow *ui;
    WriteLetterWindow *writeletterW;
    SearchResultWindow *searchResult;
    Personinfo *personInfo;
    Checklogout *checkLogout;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    int id1;//时间设定

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
    void timerUpdate();//定时update时间
    void timerBuild();
    void rithtClickMenu(QPoint pos); //菜单 点击   获取当前位置
    void menuChooseAction(QAction *act);
    void openDetail(QModelIndex index2); //此处之后需要改为传递一个时间戳的函数


private:
    void setConnect();
    void setTheme();


};
#endif // MAINWINDOW_H
