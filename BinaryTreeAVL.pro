QT += core
QT -= gui

CONFIG += c++11

TARGET = BinaryTreeAVL
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  Main.cpp \
            Node.cpp \
            BinaryTreeAVL.cpp \

DEFINES += QT_DEPRECATED_WARNINGS

DISTFILES += \
            BinaryTreeAVL.pro.user \

HEADERS += \
            BinaryTreeAVL.h \
            Node.h \

SUBDIRS += \
