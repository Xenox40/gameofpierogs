#-------------------------------------------------
#
# Project created by QtCreator 2014-05-23T18:23:45
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11

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
	dragon.cpp \
    world.cpp \
    shop.cpp

HEADERS  += mainwindow.h \
    hero.h \
    room.h \
    character.h \
    enemy.h \
    knight.h \
	dragon.h \
    world.h \
    shop.h

FORMS    += mainwindow.ui \
    shop.ui
