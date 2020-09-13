#include "table_model.h"
#include <QColor>
#include <QCheckBox>
#include <QApplication>
#include <QMouseEvent>

#define CHECK_BOX_COLUMN 0
#define File_PATH_COLUMN 1


TableHeaderView::TableHeaderView(Qt::Orientation orientation, QWidget *parent)
    : QHeaderView(orientation, parent),
      m_bPressed(false),
      m_bChecked(false),
      m_bTristate(false),
      m_bNoChange(false),
      m_bMoving(false)
{
    // setStretchLastSection(true);
    //setHighlightSections(false);
    //setMouseTracking(true);

    // 响应鼠标
    setSectionsClickable(true);
}

TableHeaderView::~TableHeaderView()
{

}

// 槽函数，用于更新复选框状态
void TableHeaderView::onStateChanged(int state)
{
    if (state == Qt::PartiallyChecked) {
        m_bTristate = true;
        m_bNoChange = true;
    } else {
        m_bNoChange = false;
    }

    m_bChecked = (state != Qt::Unchecked);
    update();
}

// 绘制复选框
void TableHeaderView::paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const
{
    painter->save();
    QHeaderView::paintSection(painter, rect, logicalIndex);
    painter->restore();

    if (logicalIndex == CHECK_BOX_COLUMN)
    {
        QStyleOptionButton option;
        option.initFrom(this);

        if (m_bChecked)
            option.state |= QStyle::State_Sunken;

        if (m_bTristate && m_bNoChange)
            option.state |= QStyle::State_NoChange;
        else
            option.state |= m_bChecked ? QStyle::State_On : QStyle::State_Off;
        if (testAttribute(Qt::WA_Hover) && underMouse()) {
            if (m_bMoving)
                option.state |= QStyle::State_MouseOver;
            else
                option.state &= ~QStyle::State_MouseOver;
        }

        QCheckBox checkBox;
        option.iconSize = QSize(20, 20);
        option.rect = rect;
        style()->drawPrimitive(QStyle::PE_IndicatorCheckBox, &option, painter, &checkBox);
        //style()->drawItemPixmap(painter, rect, Qt::AlignCenter, QPixmap(":/images/checkBoxChecked"));
        //style()->drawControl(QStyle::CE_CheckBox, &option, painter, this);
    }
}

// 鼠标按下表头
void TableHeaderView::mousePressEvent(QMouseEvent *event)
{
    qDebug("[mousePressEvent] type:%d, time:%lu", event->type(), event->timestamp());
    int nColumn = logicalIndexAt(event->pos());
    if ((event->buttons() & Qt::LeftButton) && (nColumn == CHECK_BOX_COLUMN))
    {
        m_bPressed = true;
    }
    else
    {
        QHeaderView::mousePressEvent(event);
    }
}

// 鼠标从表头释放，发送信号，更新model数据
void TableHeaderView::mouseReleaseEvent(QMouseEvent *event)
{
    if (m_bPressed)
    {
        if (m_bTristate && m_bNoChange)
        {
            m_bChecked = true;
            m_bNoChange = false;
        }
        else
        {
            m_bChecked = !m_bChecked;
        }

        update();

        Qt::CheckState state = m_bChecked ? Qt::Checked : Qt::Unchecked;

        emit stateChanged(state);
    }
    else
    {
        QHeaderView::mouseReleaseEvent(event);
    }

    m_bPressed = false;
}

// 鼠标滑过、离开，更新复选框状态
bool TableHeaderView::event(QEvent *event)
{
    updateSection(0);
    if (event->type() == QEvent::Enter || event->type() == QEvent::Leave)
    {
        QMouseEvent *pEvent = static_cast<QMouseEvent *>(event);
        int nColumn = logicalIndexAt(pEvent->x());
        if (nColumn == CHECK_BOX_COLUMN)
        {
            m_bMoving = (event->type() == QEvent::Enter);

            update();
            return true;
        }
    }
    return QHeaderView::event(event);
}




CheckBoxDelegate::CheckBoxDelegate(QObject *parent):QStyledItemDelegate(parent)
{

}

CheckBoxDelegate::~CheckBoxDelegate()
{

}

// 绘制复选框
void CheckBoxDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem viewOption(option);
    initStyleOption(&viewOption, index);
    if (option.state.testFlag(QStyle::State_HasFocus))
        viewOption.state = viewOption.state ^ QStyle::State_HasFocus;

    QStyledItemDelegate::paint(painter, viewOption, index);

    if (index.column() == CHECK_BOX_COLUMN)
    {
        bool data = index.model()->data(index, Qt::UserRole).toBool();

        QStyleOptionButton checkBoxStyle;
        checkBoxStyle.state = data ? QStyle::State_On : QStyle::State_Off;
        checkBoxStyle.state |= QStyle::State_Enabled;
        checkBoxStyle.iconSize = QSize(20, 20);
        checkBoxStyle.rect = option.rect;

        QCheckBox checkBox;
        checkBoxStyle.iconSize = QSize(20, 20);
        checkBoxStyle.rect = option.rect;
        QApplication::style()->drawPrimitive(QStyle::PE_IndicatorCheckBox, &checkBoxStyle, painter, &checkBox);
    }
}

// 响应鼠标事件，更新数据
bool CheckBoxDelegate::editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index)
{
    QRect decorationRect = option.rect;

    QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
    if (event->type() == QEvent::MouseButtonPress && decorationRect.contains(mouseEvent->pos()))
    {
        if (index.column() == CHECK_BOX_COLUMN)
        {
            bool data = model->data(index, Qt::UserRole).toBool();
            model->setData(index, !data, Qt::UserRole);
        }
    }

    return QStyledItemDelegate::editorEvent(event, model, option, index);
}



TableModel::TableModel(QObject *parent)
    : QAbstractTableModel(parent)
{

}

TableModel::~TableModel()
{

}

// 更新表格数据
void TableModel::updateData(QList<FileRecord> recordList)
{
    m_recordList = recordList;
    beginResetModel();
    endResetModel();
}

// 行数
int TableModel::rowCount(const QModelIndex &parent) const
{
    return m_recordList.count();
}

// 列数
int TableModel::columnCount(const QModelIndex &parent) const
{
    return 2;
}

// 设置表格项数据
bool TableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid())
        return false;

    int nColumn = index.column();
    FileRecord record = m_recordList.at(index.row());
    switch (role)
    {
    case Qt::DisplayRole:
    {
        if (nColumn == File_PATH_COLUMN)
        {
            record.strFilePath = value.toString();

            m_recordList.replace(index.row(), record);
            emit dataChanged(index, index);
            return true;
        }
    }
    case Qt::CheckStateRole:
    case Qt::UserRole:
    {
        if (nColumn == CHECK_BOX_COLUMN)
        {
            record.bChecked = value.toBool();

            m_recordList.replace(index.row(), record);
            emit dataChanged(index, index);

            if (role == Qt::UserRole)
                onStateChanged();
            return true;
        }
    }
    default:
        return false;
    }
    return false;
}

// 表格项数据
QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    int nRow = index.row();
    int nColumn = index.column();
    FileRecord record = m_recordList.at(nRow);

    switch (role)
    {
    case Qt::TextColorRole:
        return QColor(Qt::white);
    case Qt::TextAlignmentRole:
        return QVariant(Qt::AlignLeft | Qt::AlignVCenter);
    case Qt::DisplayRole:
    {
        if (nColumn == File_PATH_COLUMN)
            return record.strFilePath;
        return "";
    }
    case Qt::UserRole:
    {
        if (nColumn == CHECK_BOX_COLUMN)
            return record.bChecked;
    }
    default:
        return QVariant();
    }

    return QVariant();
}

// 表头数据
QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    switch (role)
    {
    case Qt::TextAlignmentRole:
        return QVariant(Qt::AlignCenter | Qt::AlignVCenter);
    case Qt::DisplayRole:
    {
        if (orientation == Qt::Horizontal)
        {
            if (section == CHECK_BOX_COLUMN)
                return QStringLiteral("");

            if (section == File_PATH_COLUMN)
                return QStringLiteral("文件路径");
        }
    }
    default:
        return QVariant();
    }

    return QVariant();
}

// 表格可选中、可复选
Qt::ItemFlags TableModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return QAbstractItemModel::flags(index);

    Qt::ItemFlags flags = Qt::ItemIsEnabled | Qt::ItemIsSelectable;

    return flags;
}


// 复选状态改变，通知表头更新复选状态
void TableModel::onStateChanged()
{
    Qt::CheckState state = Qt::Unchecked;
    int nCount = m_recordList.count();
    int nSelectedCount = 0;
    FileRecord record;
    for (int i = 0; i < nCount; ++i)
    {
        record = m_recordList.at(i);
        if (record.bChecked)
            ++nSelectedCount;
    }

    if (nSelectedCount >= nCount)
    {
        state = Qt::Checked;
    }
    else if (nSelectedCount > 0)
    {
        state = Qt::PartiallyChecked;
    }

    emit stateChanged(state);
}

// 接收表头复选状态更新变化，修改表格复选状态
void TableModel::onStateChanged(int state)
{
    QModelIndex index;
    for (int i = 0; i < rowCount(); ++i)
    {
        index = this->index(i, CHECK_BOX_COLUMN);
        setData(index, state == Qt::Checked, Qt::CheckStateRole);
    }
}
