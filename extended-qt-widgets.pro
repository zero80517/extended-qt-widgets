CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(extendedqtwidgetsplugin)
TEMPLATE    = lib

HEADERS     = elineeditplugin.h egroupboxplugin.h extendedqtwidgets.h
SOURCES     = elineeditplugin.cpp egroupboxplugin.cpp extendedqtwidgets.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(utils.pri)
include(egroupbox.pri)
include(elineedit.pri)
