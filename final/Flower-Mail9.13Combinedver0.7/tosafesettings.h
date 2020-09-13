#ifndef TOSAFESETTINGS_H
#define TOSAFESETTINGS_H

#include <QDialog>
#include <QLineEdit>
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
    QString getAns;//从LineEdit获得的答案，负责比对
    QString setQues;//需要拿出来的密保问题，设置在Label上
    bool isMatched;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    QList<QLineEdit*> allText_le;
    const int buttonNum = 1;
    const int labelNum = 3;
    const int lineEditNum = 1;


private slots:
    void judgePass();
    void cancelToMain();

private:
    void toSafeSet();
    void init();
    bool isMatch(QString ans);
};

#endif // TOSAFESETTINGS_H
