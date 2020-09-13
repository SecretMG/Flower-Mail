#ifndef HELPABOUTDESIGN_H
#define HELPABOUTDESIGN_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class HelpAboutDesign;
}

class HelpAboutDesign : public QWidget
{
    Q_OBJECT

public:
    explicit HelpAboutDesign(QWidget *parent = nullptr);
    ~HelpAboutDesign();

private:
    Ui::HelpAboutDesign *ui;

    QList<QLabel*> allText_lb;
    const int labelNum = 1;

private:
    void initSet();
};

#endif // HELPABOUTDESIGN_H
