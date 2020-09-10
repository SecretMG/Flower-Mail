#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "writeletterwindow.h"
#include "searchresultwindow.h"

#include <QMainWindow>

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

private slots:
    void openWriteLetter();
    void openSearchResult();

};
#endif // MAINWINDOW_H
