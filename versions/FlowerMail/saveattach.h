#ifndef SAVEATTACH_H
#define SAVEATTACH_H

#include <QDialog>

namespace Ui {
class SaveAttach;
}

class SaveAttach : public QDialog
{
    Q_OBJECT

public:
    explicit SaveAttach(QWidget *parent = nullptr);
    ~SaveAttach();

private:
    Ui::SaveAttach *ui;
};

#endif // SAVEATTACH_H
