#ifndef CONTECTERLISTWINDOW_H
#define CONTECTERLISTWINDOW_H

#include <addcontact.h>
#include <QDialog>
#include <QStandardItemModel>
#include <QTableView>
#include <QDebug>
#include <QWidget>
#include <QTableView>
#include <QMessageBox>
#include <QModelIndex>


namespace Ui {
class ContecterListwindow;
}

class ContecterListwindow : public QDialog
{
    Q_OBJECT

public:
    explicit ContecterListwindow(QWidget *parent = nullptr);
    ~ContecterListwindow();

private:
    Ui::ContecterListwindow *ui;
    AddContact *addContact;
    QStandardItemModel *standItemModel;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    const int labelNum = 2;
    const int buttonNum = 3;

private slots:
    void openAddContact();

private:
    void contactBuild();
    void initSet();
};

#endif // CONTECTERLISTWINDOW_H
