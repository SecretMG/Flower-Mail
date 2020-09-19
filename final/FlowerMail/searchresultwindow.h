#ifndef SEARCHRESULTWINDOW_H
#define SEARCHRESULTWINDOW_H

#include <QMainWindow>

namespace Ui {
class SearchResultWindow;
}

class SearchResultWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchResultWindow(QWidget *parent = nullptr);
    ~SearchResultWindow();

private:
    Ui::SearchResultWindow *ui;
};

#endif // SEARCHRESULTWINDOW_H
