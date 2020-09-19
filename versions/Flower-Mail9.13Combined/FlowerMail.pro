QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Global.cpp \
    changephoto.cpp \
    checklogout.cpp \
    getbackpwd.cpp \
    help.cpp \
    helpaboutdesign.cpp \
    helpaboutmail.cpp \
    helpaboutsafe.cpp \
    helpmainpage.cpp \
    loginwindow.cpp \
    main.cpp \
    mysql.cpp \
    personinfo.cpp \
    register.cpp \
    resetpassword.cpp \
    settings.cpp\
    addattachwindows.cpp \
    addcontact.cpp \
    contecterlistwindow.cpp \
    letterdetailwindows.cpp \
    mainwindow.cpp \
    safesettings.cpp\
    saveattach.cpp \
    searchresultwindow.cpp \
    settimewindow.cpp \
    tosafesettings.cpp\
    writeletterwindow.cpp \
    z_draft_alert.cpp \
    z_receivebox_alert.cpp \
    z_sent_alert.cpp

HEADERS += \
    changephoto.h \
    checklogout.h \
    getbackpwd.h \
    global.h \
    help.h \
    helpaboutdesign.h \
    helpaboutmail.h \
    helpaboutsafe.h \
    helpmainpage.h \
    loginwindow.h \
    mysql.h \
    personinfo.h \
    register.h \
    resetpassword.h \
    settings.h\
    addattachwindows.h \
    addcontact.h \
    contecterlistwindow.h \
    letterdetailwindows.h \
    mainwindow.h \
    safesettings.h\
    saveattach.h \
    searchresultwindow.h \
    settimewindow.h \
    tosafesettings.h\
    writeletterwindow.h \
    z_draft_alert.h \
    z_receivebox_alert.h \
    z_sent_alert.h

FORMS += \
    changephoto.ui \
    checklogout.ui \
    getbackpwd.ui \
    help.ui \
    helpaboutdesign.ui \
    helpaboutmail.ui \
    helpaboutsafe.ui \
    helpmainpage.ui \
    loginwindow.ui \
    personinfo.ui \
    register.ui \
    resetpassword.ui \
    settings.ui\
    addattachwindows.ui \
    addcontact.ui \
    contecterlistwindow.ui \
    letterdetailwindows.ui \
    mainwindow.ui \
    safesettings.ui\
    saveattach.ui \
    searchresultwindow.ui \
    settimewindow.ui \
    tosafesettings.ui\
    writeletterwindow.ui \
    z_add_attach_alert.ui \
    z_add_contact_alert_copy_copy_copy.ui \
    z_delete_alert_copy.ui \
    z_draft_alert.ui \
    z_receivebox_alert.ui \
    z_sent_alert.ui \
    z_settime_alert_copy_copy.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
