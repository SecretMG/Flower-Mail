#ifndef ZRECEIVEBOXALERT_H
#define ZRECEIVEBOXALERT_H

#include <QDialog>

namespace Ui {
class ZreceiveboxAlert;
}

class ZreceiveboxAlert : public QDialog
{
    Q_OBJECT

public:
    explicit ZreceiveboxAlert(QWidget *parent = nullptr);
    ~ZreceiveboxAlert();

private:
    Ui::ZreceiveboxAlert *ui;
};

#endif // ZRECEIVEBOXALERT_H
