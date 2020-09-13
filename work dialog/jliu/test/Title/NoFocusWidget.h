#ifndef NOFOCUSWIDGET_H
#define NOFOCUSWIDGET_H

#include <QWidget>

namespace Ui {
class NoFocusWidget;
}

class NoFocusWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NoFocusWidget(QWidget *parent = nullptr);
    ~NoFocusWidget();

private:
    Ui::NoFocusWidget *ui;
    void initTitleBar();
};

#endif // NOFOCUSWIDGET_H
