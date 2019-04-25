#-------------------------------------------------
#
# Project created by QtCreator 2019-04-24T11:12:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BDOFarmingSimulator
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        controler/CGraine.cpp \
        main.cpp \
        model/BData.cpp \
        model/BFruit.cpp \
        model/BGraine.cpp \
        model/BProduit.cpp \
        model/json/BJsonFruit.cpp \
        model/json/BJsonGraine.cpp \
        model/json/BJsonProduit.cpp \
        model/json/BJsonTable.cpp \
        windows/wmain.cpp

HEADERS += \
    controler/CGraine.h \
    model/BData.h \
    model/BFruit.h \
    model/BGraine.h \
    model/BProduit.h \
    model/FData.h \
    model/json/BJsonFruit.h \
    model/json/BJsonGraine.h \
    model/json/BJsonProduit.h \
    model/json/BJsonTable.h \
    model/json/BJsonTableFruit.h \
    model/json/BJsonTableGraine.h \
    model/json/BJsonTableProduit.h \
    windows/wmain.h

FORMS += \
    windows/wmain.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resources/tables.qrc
