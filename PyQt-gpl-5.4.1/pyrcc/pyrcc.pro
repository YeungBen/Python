TARGET = pyrcc5
TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG -= android_install
target.path = /usr/bin
INSTALLS += target
INCLUDEPATH += /home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/pyrcc
VPATH = /home/youngben/Gitproject/Python/PyQt-gpl-5.4.1/pyrcc
HEADERS = rcc.h
SOURCES = main.cpp rcc.cpp