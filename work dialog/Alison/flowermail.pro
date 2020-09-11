QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changephoto.cpp \
    checklogout.cpp \
    getbackpwd.cpp \
    loginwindow.cpp \
    main.cpp \
    personinfo.cpp \
    register.cpp \
    resetpassword.cpp \
    settings.cpp

HEADERS += \
    changephoto.h \
    checklogout.h \
    getbackpwd.h \
    loginwindow.h \
    personinfo.h \
    register.h \
    resetpassword.h \
    settings.h

FORMS += \
    changephoto.ui \
    checklogout.ui \
    getbackpwd.ui \
    loginwindow.ui \
    personinfo.ui \
    register.ui \
    resetpassword.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
