#-------------------------------------------------
#
# Project created by QtCreator 2018-06-11T15:20:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = untitled2
TEMPLATE = app

CONFIG += c++11
SOURCES += main.cpp\
        mainwindow.cpp \
    generators.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    generators.h \
    qcustomplot.h

FORMS    += mainwindow.ui
