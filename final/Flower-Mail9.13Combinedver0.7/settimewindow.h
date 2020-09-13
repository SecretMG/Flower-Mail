#ifndef SETTIMEWINDOW_H
#define SETTIMEWINDOW_H

#include <QDialog>

namespace Ui {
class SetTimeWindow;
}

class SetTimeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SetTimeWindow(QWidget *parent = nullptr);
    ~SetTimeWindow();

private:
    Ui::SetTimeWindow *ui;
};

#endif // SETTIMEWINDOW_H
