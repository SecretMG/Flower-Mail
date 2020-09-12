#ifndef TOSAFESETTINGS_H
#define TOSAFESETTINGS_H

#include <QDialog>
#include "safesettings.h"

namespace Ui {
class ToSafeSettings;
}

class ToSafeSettings : public QDialog
{
    Q_OBJECT

public:
    explicit ToSafeSettings(QWidget *parent = nullptr);
    ~ToSafeSettings();

private:
    Ui::ToSafeSettings *ui;
    SafeSettings *safeSet;
    QString getAns;
    QString setQues;
    bool isMatched;


private slots:
    void judgePass(Ui::ToSafeSettings* ui);

private:
    void toSafeSet();
    void init();
    bool isMatch(QString ques, QString ans);
};

#endif // TOSAFESETTINGS_H
