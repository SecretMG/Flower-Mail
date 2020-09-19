#ifndef CHANGEPHOTO_H
#define CHANGEPHOTO_H

#include <QWidget>

namespace Ui {
class Changephoto;
}

class Changephoto : public QWidget
{
    Q_OBJECT

public:
    explicit Changephoto(QWidget *parent = nullptr);
    ~Changephoto();

private:
    Ui::Changephoto *ui;
};

#endif // CHANGEPHOTO_H
