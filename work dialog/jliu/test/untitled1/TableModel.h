
#ifndef TABLEMODEL_H

#define TABLEMODEL_H



#include <QAbstractTableModel>



typedef struct ST_ROW_DATA{
    bool bCheckState = false;
    QString strTestData = "";
}stRowData;



enum enColumnIndex{
    CheckBoxColumn,
    QStringColumn
};

class TableModel : public QAbstractTableModel{

    Q_OBJECT
public:
    explicit TableModel(QObject *parent = nullptr);
    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role = Qt::EditRole) override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;



    // Editable:
    bool setData(const QModelIndex &index, const QVariant &value,
                 int role = Qt::EditRole) override;

    Qt::ItemFlags flags(const QModelIndex& index) const override;

    void updateData(const QList<stRowData> &tableData);



private:
    QList<stRowData> m_tableData;         //表格数据
    int m_nCurrentColumnCount = 0;            //总列数
};



#endif // TABLEMODEL_H
