#ifndef PERSONINFO_H
#define PERSONINFO_H
#include "checklogout.h"
#include "tosafesettings.h"
#include "help.h"

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
    void toSafe();
    void toHelp();

private:
    Ui::Personinfo *ui;
    Checklogout *checklogout;
    ToSafeSettings *safeSet;
    Help *help;
};

#endif // PERSONINFO_H
