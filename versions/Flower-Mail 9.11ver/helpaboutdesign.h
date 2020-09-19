#ifndef HELPABOUTDESIGN_H
#define HELPABOUTDESIGN_H

#include <QWidget>

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
};

#endif // HELPABOUTDESIGN_H
