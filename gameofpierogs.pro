#-------------------------------------------------
#
# Project created by QtCreator 2014-05-23T18:23:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gameofpierogs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    hero.cpp \
    room.cpp \
    character.cpp \
    enemy.cpp \
    knight.cpp \
	dragon.cpp

HEADERS  += mainwindow.h \
    hero.h \
    room.h \
    character.h \
    enemy.h \
    knight.h \
	dragon.h

FORMS    += mainwindow.ui
