#ifndef HELPMAINPAGE_H
#define HELPMAINPAGE_H

#include <QWidget>

namespace Ui {
class HelpMainPage;
}

class HelpMainPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelpMainPage(QWidget *parent = nullptr);
    ~HelpMainPage();

private:
    Ui::HelpMainPage *ui;
};

#endif // HELPMAINPAGE_H
