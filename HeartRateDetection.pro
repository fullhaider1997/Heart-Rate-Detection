QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QT += charts
# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractclassalogrithm.cpp \
    draw.cpp \
    facialfeaturedetector.cpp \
    main.cpp \
    maingui.cpp \
    pipelineofalg.cpp \
    rgbalogrithm.cpp \
    videoprocessorpipline.cpp

HEADERS += \
    abstractclassalogrithm.h \
    draw.h \
    facialfeaturedetector.h \
    maingui.h \
    pipelineofalg.h \
    rgbalogrithm.h \
    videoprocessorpipline.h

FORMS += \
    maingui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

LIBS +=-L"/home/haider/Downloads/dlib-19.19_no_blas_cuda/build"
LIBS += -ldlib
CONFIG += link_pkgconfig
PKGCONFIG += x11
INCLUDEPATH += /usr/opencv/release/opencv2
LIBS += $(shell pkg-config opencv --libs)

