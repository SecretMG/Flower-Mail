#ifndef ADDCONTACT_H
#define ADDCONTACT_H

#include <QDialog>

namespace Ui {
class AddContact;
}

class AddContact : public QDialog
{
    Q_OBJECT

public:
    explicit AddContact(QWidget *parent = nullptr);
    ~AddContact();

private:
    Ui::AddContact *ui;
};

#endif // ADDCONTACT_H
