#ifndef ZNEWLALERT_H
#define ZNEWLALERT_H

#include <QDialog>

namespace Ui {
class ZnewLAlert;
}

class ZnewLAlert : public QDialog
{
    Q_OBJECT

public:
    explicit ZnewLAlert(QWidget *parent = nullptr);
    ~ZnewLAlert();

private:
    Ui::ZnewLAlert *ui;
};

#endif // ZNEWLALERT_H
