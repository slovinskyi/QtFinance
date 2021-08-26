#-------------------------------------------------
#
# Project created by QtCreator 2020-06-23T12:59:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = project_draft
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS
QMAKE_CXXFLAGS += -Wfatal-errors
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    dialog.cpp \
    food.cpp \
    income.cpp \
    dialogincome.cpp \
    dialogdrugstore.cpp \
    qcustomplot.cpp \
    clothes.cpp \
    dialogclothes.cpp \
    freetime.cpp \
    dialogfreetime.cpp \
    bills.cpp \
    dialogbills.cpp \
    transport.cpp \
    dialogtransport.cpp \
    beauty.cpp \
    dialogbeauty.cpp \
    health.cpp \
    dialoghealth.cpp \
    nocategory.cpp \
    dialognocategory.cpp \
    cinema.cpp \
    dialogcinema.cpp \
    document.cpp \
    analysis.cpp \
    drugstore.cpp \
    addition.cpp

HEADERS += \
        mainwindow.h \
    dialog.h \
    food.h \
    income.h \
    dialogincome.h \
    analysis.h \
    dialogdrugstore.h \
    drugstore.h \
    qcustomplot.h \
    clothes.h \
    dialogclothes.h \
    freetime.h \
    dialogfreetime.h \
    bills.h \
    dialogbills.h \
    transport.h \
    dialogtransport.h \
    beauty.h \
    dialogbeauty.h \
    health.h \
    dialoghealth.h \
    nocategory.h \
    dialognocategory.h \
    cinema.h \
    dialogcinema.h \
    document.h \
    addition.h

FORMS += \
        mainwindow.ui \
    dialog.ui \
    food.ui \
    income.ui \
    dialogincome.ui \
    analysis.ui \
    dialogdrugstore.ui \
    drugstore.ui \
    clothes.ui \
    dialogclothes.ui \
    freetime.ui \
    dialogfreetime.ui \
    bills.ui \
    dialogbills.ui \
    transport.ui \
    dialogtransport.ui \
    beauty.ui \
    dialogbeauty.ui \
    health.ui \
    dialoghealth.ui \
    nocategory.ui \
    dialognocategory.ui \
    cinema.ui \
    dialogcinema.ui

RESOURCES += \
    res.qrc
