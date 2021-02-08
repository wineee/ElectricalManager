QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chargedialog.cpp \
    clerksadddialog.cpp \
    clerksdialog.cpp \
    clientsdialog.cpp \
    costmanagedialog.cpp \
    eusedtdialog.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    chargedialog.h \
    clerksadddialog.h \
    clerksdialog.h \
    clientsdialog.h \
    connection.h \
    costmanagedialog.h \
    eusedtdialog.h \
    widget.h

FORMS += \
    chargedialog.ui \
    clerksadddialog.ui \
    clerksdialog.ui \
    clientsdialog.ui \
    costmanagedialog.ui \
    eusedtdialog.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
