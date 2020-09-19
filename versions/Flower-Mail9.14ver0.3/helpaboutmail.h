#ifndef HELPABOUTMAIL_H
#define HELPABOUTMAIL_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class HelpAboutMail;
}

class HelpAboutMail : public QWidget
{
    Q_OBJECT

public:
    explicit HelpAboutMail(QWidget *parent = nullptr);
    ~HelpAboutMail();

private:
    Ui::HelpAboutMail *ui;

    QList<QLabel*> allText_lb;
    const int labelNum = 1;

private:
    void initSet();
};

#endif // HELPABOUTMAIL_H
