#-------------------------------------------------
#
# Project created by QtCreator
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jumble
TEMPLATE = app


SOURCES += main.cpp\
        session.cpp \
    letter.cpp \
    timer.cpp \
    wordchecker.cpp \
    player.cpp \
    mainmenu.cpp \
    logindialog.cpp \
    signupdialog.cpp \
    settings.cpp

HEADERS  += session.h \
    letter.h \
    timer.h \
    wordchecker.h \
    player.h \
    mainmenu.h \
    logindialog.h \
    signupdialog.h \
    settings.h

FORMS    += session.ui \
    mainmenu.ui \
    logindialog.ui \
    signupdialog.ui

OTHER_FILES += \
    dictionary.txt \
    ../../../../Software/Matlab/visual basis/VFP98/gallery/graphics/help.ico

DISTFILES += \
    OOFL.ICO \
    controls.ico \
    signup.ico \
    login.ico \
    guest.ico \
    help.ico \
    exit.ico
