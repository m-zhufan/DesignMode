TEMPLATE = lib

CONFIG += c++11 warn_on

DEFINES += QT_DEPRECATED_WARNINGS

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DESTDIR = $$PWD/../lib

INCLUDEPATH += $$PWD
LIBS += -L$$PWD/../lib
