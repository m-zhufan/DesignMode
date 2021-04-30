QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = app
TEMPLATE = app

INCLUDEPATH += $$PWD/../libs
LIBS += -L$$PWD/../lib -lObserver

DEFINES += QT_DEPRECATED_WARNINGS
