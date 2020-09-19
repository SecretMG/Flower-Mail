#ifndef ZSENTBOXALERT_H
#define ZSENTBOXALERT_H

#include <QDialog>

namespace Ui {
class Zsentboxalert;
}

class Zsentboxalert : public QDialog
{
    Q_OBJECT

public:
    explicit Zsentboxalert(QWidget *parent = nullptr);
    ~Zsentboxalert();

private:
    Ui::Zsentboxalert *ui;
};

#endif // ZSENTBOXALERT_H
