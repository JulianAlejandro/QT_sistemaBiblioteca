QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    autorabc_dialog.cpp \
    editorialabc_dialog.cpp \
    jabasedatos.cpp \
    jabasedatos_SQL.cpp \
    libroabc_dialog.cpp \
    libroconsultadialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    autorabc_dialog.h \
    editorialabc_dialog.h \
    jabasedatos.h \
    jabasedatos_SQL.h \
    libroabc_dialog.h \
    libroconsultadialog.h \
    mainwindow.h

FORMS += \
    autorabc_dialog.ui \
    editorialabc_dialog.ui \
    libroabc_dialog.ui \
    libroconsultadialog.ui \
    mainwindow.ui

QMAKE_CXXFLAGS += -std=gnu++14

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
