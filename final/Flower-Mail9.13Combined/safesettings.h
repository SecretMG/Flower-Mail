#ifndef SAFESETTINGS_H
#define SAFESETTINGS_H

#include <QWidget>

namespace Ui {
class SafeSettings;
}

class SafeSettings : public QWidget
{
    Q_OBJECT

public:
    explicit SafeSettings(QWidget *parent = nullptr);
    ~SafeSettings();

private:
    Ui::SafeSettings *ui;
};

#endif // SAFESETTINGS_H
