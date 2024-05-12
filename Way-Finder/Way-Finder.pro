QT       += core gui
QT += svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addedge.cpp \
    editedge.cpp \
    grapheditor.cpp \
    grapheditorsecwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    newedgeinput.cpp \
    searchscene.cpp \
    breadthfirstsearch.cpp \
    depthfirstsearch.cpp \
    validtripsscene.cpp


HEADERS += \
    addedge.h \
    editedge.h \
    grapheditor.h \
    grapheditorsecwindow.h \
    mainwindow.h \
    newedgeinput.h \
    searchscene.h \
    depthfirstsearch.h \
    breadthfirstsearch.h \
    depthfirstsearch.h \
    validtripsscene.h

FORMS += \
    editedge.ui \
    grapheditor.ui \
    grapheditorsecwindow.ui \
    mainwindow.ui \
    newedgeinput.ui \
    validtripsscene.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc
