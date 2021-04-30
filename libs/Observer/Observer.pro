CONFIG -= qt

include($$PWD/../libconfig.pri)

TARGET = Observer

DEFINES += OBSERVER_LIBRARY

SOURCES += \
        observer.cpp \
        observerimpl.cpp

HEADERS += \
        observer_global.h \
        observer.h \
        observerimpl.h
