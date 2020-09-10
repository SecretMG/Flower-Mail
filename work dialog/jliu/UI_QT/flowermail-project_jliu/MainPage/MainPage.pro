QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addattachwindows.cpp \
    addcontact.cpp \
    contecterlistwindow.cpp \
    letterdetailwindows.cpp \
    main.cpp \
    mainwindow.cpp \
    saveattach.cpp \
    searchresultwindow.cpp \
    settimewindow.cpp \
    wordcolor.cpp \
    wordsize.cpp \
    wordtype.cpp \
    writeletterwindow.cpp \
    z_draft_alert.cpp \
    z_receivebox_alert.cpp \
    z_sent_alert.cpp

HEADERS += \
    addattachwindows.h \
    addcontact.h \
    contecterlistwindow.h \
    letterdetailwindows.h \
    mainwindow.h \
    saveattach.h \
    searchresultwindow.h \
    settimewindow.h \
    wordcolor.h \
    wordsize.h \
    wordtype.h \
    writeletterwindow.h \
    z_draft_alert.h \
    z_receivebox_alert.h \
    z_sent_alert.h

FORMS += \
    addattachwindows.ui \
    addcontact.ui \
    contecterlistwindow.ui \
    letterdetailwindows.ui \
    mainwindow.ui \
    saveattach.ui \
    searchresultwindow.ui \
    settimewindow.ui \
    wordcolor.ui \
    wordsize.ui \
    wordtype.ui \
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
