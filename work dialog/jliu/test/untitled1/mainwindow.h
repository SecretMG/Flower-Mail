
#ifndef MAINWINDOW_H

#define MAINWINDOW_H



#include <QMainWindow>



namespace Ui {

class MainWindow;

}



class TableModel;



class MainWindow : public QMainWindow

{

    Q_OBJECT



public:

    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();



private:

    void initUI();





private:

    Ui::MainWindow *ui;

    TableModel* m_pTableModel = nullptr;

};



#endif // MAINWINDOW_H
