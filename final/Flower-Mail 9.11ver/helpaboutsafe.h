#ifndef HELPABOUTSAFE_H
#define HELPABOUTSAFE_H

#include <QWidget>

namespace Ui {
class HelpAboutSafe;
}

class HelpAboutSafe : public QWidget
{
    Q_OBJECT

public:
    explicit HelpAboutSafe(QWidget *parent = nullptr);
    ~HelpAboutSafe();

private:
    Ui::HelpAboutSafe *ui;
};

#endif // HELPABOUTSAFE_H
