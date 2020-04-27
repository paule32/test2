CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(tabsercollectionplugin)
TEMPLATE    = lib

HEADERS     = myatabseraplugin.h mybtabserbplugin.h tabsercollection.h \
    mycontainerextension.h \
    mycontainerextensionfactory.h \
    mycontainerinterface.h \
    mycustomwidget.h \
    mylabel.h \
    mywidgetfilter.h
SOURCES     = myatabseraplugin.cpp mybtabserbplugin.cpp tabsercollection.cpp \
    mycontainerextension.cpp \
    mycontainerextensionfactory.cpp \
    mycontainerinterface.cpp \
    mycustomwidget.cpp \
    mylabel.cpp \
    mywidgetfilter.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(myatabsera.pri)
include(mybtabserb.pri)

FORMS += \
    wizard.ui

QT += widgets
