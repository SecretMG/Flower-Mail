#ifndef ADDATTACHWINDOWS_H
#define ADDATTACHWINDOWS_H

#include <QDialog>

namespace Ui {
class AddAttachWindows;
}

class AddAttachWindows : public QDialog
{
    Q_OBJECT

public:
    explicit AddAttachWindows(QWidget *parent = nullptr);
    ~AddAttachWindows();

private:
    Ui::AddAttachWindows *ui;
};

#endif // ADDATTACHWINDOWS_H
