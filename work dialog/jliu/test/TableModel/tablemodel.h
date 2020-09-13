#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QMainWindow>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class TableModel; }
QT_END_NAMESPACE

class TableModel : public QMainWindow
{
    Q_OBJECT

public:
    TableModel(QWidget *parent);
    ~TableModel();
    // 更新表格数据
    void updateData(QList<FileRecord> recordList);

    // 行数
    int rowCount(const QModelIndex &parent) const;

    // 列数
    int columnCount(const QModelIndex &parent) const;

    // 设置表格项数据
    bool setData(const QModelIndex &index, const QVariant &value, int role);

    // 表格项数据
    QVariant data(const QModelIndex &index, int role) ;
    // 表头数据
    QVariant headerData(int section, Qt::Orientation orientation, int role);
    // 表格可选中、可复选
   flags(const QModelIndex &index);

private:
    Ui::TableModel *ui;
};
#endif // TABLEMODEL_H


