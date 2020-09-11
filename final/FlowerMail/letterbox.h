#ifndef LETTERBOX_H
#define LETTERBOX_H

#include <QMainWindow>

namespace Ui {
class letterbox;
}

class letterbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit letterbox(QWidget *parent = nullptr);
    ~letterbox();

private:
    Ui::letterbox *ui;
};

#endif // LETTERBOX_H
