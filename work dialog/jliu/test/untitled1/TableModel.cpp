#include "TableModel.h"



TableModel::TableModel(QObject *parent)
    : QAbstractTableModel(parent){
    m_nCurrentColumnCount = 2;
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const{
    // FIXME: Implement me!
    switch(role){
    case Qt::DisplayRole:{
        switch(orientation){
            case Qt::Horizontal:{
                return section + 1;
                }
            case Qt::Vertical:{
               return section + 1;
                }
        default:
            ;
           }
        }
    break;
    default:
        ;
    }
    return QVariant();
}


bool TableModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
{
    if (value != headerData(section, orientation, role)) {
        // FIXME: Implement me!
        emit headerDataChanged(orientation, section, section);
        return true;
    }
    return false;
}

int TableModel::rowCount(const QModelIndex &parent) const
{
    return m_tableData.count();
}



int TableModel::columnCount(const QModelIndex &parent) const
{
    return m_nCurrentColumnCount;
}



QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    switch(role)
    {
        case Qt::TextAlignmentRole:
        {
            return QVariant(Qt::AlignHCenter | Qt::AlignVCenter);
        }
        case Qt::DisplayRole:
        {
            switch(index.column())

            {

            case QStringColumn:

                return m_tableData.at(index.row()).strTestData;

            default:

                    ;

            }

        }

        break;

        case Qt::CheckStateRole:

        {

            if(CheckBoxColumn == index.column())

            {

                return m_tableData.at(index.row()).bCheckState ? Qt::Checked : Qt::Unchecked;

            }

        }

        break;



    default:

        ;

    }

    // FIXME: Implement me!

    return QVariant();

}



bool TableModel::setData(const QModelIndex &index, const QVariant &value, int role)

{

    if (data(index, role) != value)

    {

        // FIXME: Implement me!



        int nColumn = index.column();

        stRowData rowData = m_tableData.at(index.row());

        switch (role)

        {

        case Qt::DisplayRole:

        {

            if (nColumn == QStringColumn)

            {

                rowData.strTestData = value.toString();



                m_tableData.replace(index.row(), rowData);

                emit dataChanged(index, index);

                return true;

            }

        }

        break;

        case Qt::CheckStateRole:

        {

            if (nColumn == CheckBoxColumn)

            {

                rowData.bCheckState = (value.toInt() == Qt::Checked);



                m_tableData.replace(index.row(), rowData);

                emit dataChanged(index, index);

                return true;

            }

        }

        break;

        default:

            return false;

        }

    }

    return false;

}



Qt::ItemFlags TableModel::flags(const QModelIndex &index) const

{

    if (!index.isValid())

        return Qt::NoItemFlags;

    Qt::ItemFlags flags = Qt::ItemIsEnabled | Qt::ItemIsSelectable;

    if(index.column() == CheckBoxColumn)

    {

        flags |= Qt::ItemIsUserCheckable;

    }

    return flags; // FIXME: Implement me!

}



void TableModel::updateData(const QList<stRowData>& tableData)

{

    m_tableData = tableData;

    beginResetModel();          //model即将要重置

    endResetModel();            //model重置

}
