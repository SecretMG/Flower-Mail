#ifndef PERSONINFO_H
#define PERSONINFO_H
#include "checklogout.h"

#include <QWidget>

namespace Ui {
class Personinfo;
}

class Personinfo : public QWidget
{
    Q_OBJECT

public:
    explicit Personinfo(QWidget *parent = nullptr);
    ~Personinfo();

private slots:
    void Open_logout_warn();

private:
    Ui::Personinfo *ui;
    Checklogout *checklogout;
};

#endif // PERSONINFO_H
