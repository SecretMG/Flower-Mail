#ifndef HELPABOUTSAFE_H
#define HELPABOUTSAFE_H

#include <QWidget>
#include <QLabel>

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

    QList<QLabel*> allText_lb;
    const int labelNum = 6;

private:
    void initSet();

};

#endif // HELPABOUTSAFE_H
