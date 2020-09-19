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

private slots:
    void openAddContact();

private:
    void contactBuild();
};

#endif // CONTECTERLISTWINDOW_H
