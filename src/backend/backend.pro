TEMPLATE = lib

QT += qml
CONFIG += c++11 staticlib warn_on exceptions_off rtti_off

SOURCES += \
    Api.cpp \
    Assets.cpp \
    DataFinder.cpp \
    FrontendLayer.cpp \
    Model.cpp \
    ProcessLauncher.cpp \
    Utils.cpp \
    es2/Es2AssetFinder.cpp \
    es2/Es2Gamelist.cpp \
    es2/Es2Systems.cpp

HEADERS += \
    Api.h \
    Assets.h \
    DataFinder.h \
    Model.h \
    FrontendLayer.h \
    ProcessLauncher.h \
    Utils.h \
    es2/Es2AssetFinder.h \
    es2/Es2Gamelist.h \
    es2/Es2Systems.h


DEFINES *= \
    QT_DEPRECATED_WARNINGS \
    QT_RESTRICTED_CAST_FROM_ASCII \
    QT_NO_CAST_TO_ASCII