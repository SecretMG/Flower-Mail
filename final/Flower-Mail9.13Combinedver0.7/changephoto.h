#ifndef CHANGEPHOTO_H
#define CHANGEPHOTO_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>

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

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    const int buttonNum = 2;
    const int labelNum = 3;

private:

};

#endif // CHANGEPHOTO_H
