#ifndef TABLEVIESHOW_H
#define TABLEVIESHOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class tableVieShow; }
QT_END_NAMESPACE

class tableVieShow : public QMainWindow
{
    Q_OBJECT

public:
    tableVieShow(QWidget *parent = nullptr);
    ~tableVieShow();

private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::tableVieShow *ui;
};
#endif // TABLEVIESHOW_H
