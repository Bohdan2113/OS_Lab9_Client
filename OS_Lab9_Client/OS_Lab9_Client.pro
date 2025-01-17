QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    client.cpp \
    countdowntimer.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    client.h \
    countdowntimer.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    images/ICON.png \
    images/ICON_BW.png \
    images/clock.png \
    images/firstPlacePodium.png \
    images/logo.png \
    images/mainPageBackground.png \
    images/moneyBackgroung.png \
    images/secondPlacePodium.png \
    images/thirdPlacePodium.png \
    images/userName.png \
    images/waitPageBackgroung.png

RESOURCES += \
    font.qrc \
    img.qrc
