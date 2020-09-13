
#ifndef MAINWINDOW_H

#define MAINWINDOW_H



#include <QMainWindow>



namespace Ui {

class MainWindow;

}



class MainWindow : public QMainWindow

{

    Q_OBJECT



public:

    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();



private slots:

    void receiveData(QString data);   //接收传递过来的数据的槽



private:

    Ui::MainWindow *ui;

};



#endif // MAINWINDOW_H
