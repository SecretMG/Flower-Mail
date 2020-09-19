#ifndef LOGOUTWINDOW_H
#define LOGOUTWINDOW_H

#include <QDialog>

namespace Ui {
class Logoutwindow;
}

class Logoutwindow : public QDialog
{
    Q_OBJECT

public:
    explicit Logoutwindow(QWidget *parent = nullptr);
    ~Logoutwindow();

private:
    Ui::Logoutwindow *ui;
};

#endif // LOGOUTWINDOW_H
