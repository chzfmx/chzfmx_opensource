#-------------------------------------------------
#
# Project created by QtCreator 2016-01-12T21:35:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv \
               /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_core.so \
        /usr/local/lib/libopencv_imgproc.so \
        /usr/local/lib/libopencv_imgcodecs.so.3.1


TARGET = DisplayImage
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp
