#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "writeletterwindow.h"
#include "searchresultwindow.h"
#include "personinfo.h"
#include "checklogout.h"

#include <QMainWindow>
#include <QLabel>

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
    Personinfo *personInfo;
    Checklogout *checkLogout;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;

private slots:
    void openWriteLetter();
    void openSearchResult();
    void openSettings();
    void openPersoninfo();
    void openChecklogout();

private:
    void setConnect();
    void setTheme();


};
#endif // MAINWINDOW_H
