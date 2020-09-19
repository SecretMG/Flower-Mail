#ifndef TABLE_MODEL_H
#define TABLE_MODEL_H

#include <QAbstractTableModel>
#include <QStyledItemDelegate>
#include <QEvent>
#include <QHeaderView>
#include <QPainter>


typedef struct FileRecord
{
    bool bChecked; //是否选中
    QString strFilePath; //文件路径
} fileRecord;


class TableHeaderView:public QHeaderView
{
    Q_OBJECT
public:
    TableHeaderView(Qt::Orientation orientation, QWidget *parent);
    ~TableHeaderView();

protected:
    void paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const;
    bool event(QEvent *e) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *e) Q_DECL_OVERRIDE;

public slots:
    void onStateChanged(int state);

signals:
    void stateChanged(int state);

private:
    bool m_bPressed;
    bool m_bChecked;
    bool m_bTristate;
    bool m_bNoChange;
    bool m_bMoving;
};


class CheckBoxDelegate:public QStyledItemDelegate
{
    Q_OBJECT
public:
    CheckBoxDelegate(QObject *parent);
    ~CheckBoxDelegate();
    // painting
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;

protected:
    bool editorEvent(QEvent *event, QAbstractItemModel *model,
                     const QStyleOptionViewItem &option, const QModelIndex &index);
};

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    TableModel(QObject *parent);
    ~TableModel();
    void updateData(QList<FileRecord> recordList);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;

    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    void onStateChanged();

public slots:
    void onStateChanged(int state);

signals:
    void stateChanged(int state);

private:
    QList<fileRecord> m_recordList;
};

#endif // TABLE_MODEL_H
