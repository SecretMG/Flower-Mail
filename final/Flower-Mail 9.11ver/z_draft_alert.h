#ifndef ZDRAFTALERT_H
#define ZDRAFTALERT_H

#include <QDialog>

namespace Ui {
class ZDraftAlert;
}

class ZDraftAlert : public QDialog
{
    Q_OBJECT

public:
    explicit ZDraftAlert(QWidget *parent = nullptr);
    ~ZDraftAlert();

private:
    Ui::ZDraftAlert *ui;
};

#endif // ZDRAFTALERT_H
