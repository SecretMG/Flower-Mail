#ifndef HELPABOUTMAIL_H
#define HELPABOUTMAIL_H

#include <QWidget>

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
};

#endif // HELPABOUTMAIL_H
