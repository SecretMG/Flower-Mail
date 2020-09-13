
#ifndef DIALOG_H

#define DIALOG_H



#include <QDialog>



namespace Ui {

class Dialog;

}



class Dialog : public QDialog

{

    Q_OBJECT



public:

    explicit Dialog(QWidget *parent = 0);

    ~Dialog();



private slots:

    void on_pushButton_clicked();



signals:

    void sendData(QString);   //用来传递数据的信号



private:

    Ui::Dialog *ui;

};



#endif // DIALOG_H
