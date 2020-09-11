#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "writeletterwindow.h"
#include "searchresultwindow.h"

#include "settings.h"
#include "personinfo.h"
#include "checklogout.h"

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
    Settings *settings;
    Personinfo *personInfo;
    Checklogout *checkLogout;

private slots:
    void openWriteLetter();
    void openSearchResult();
    void openSettings();
    void openPersoninfo();
    void openChecklogout();

};
#endif // MAINWINDOW_H
