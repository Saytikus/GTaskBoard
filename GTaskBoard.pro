QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    common/log/Logger.cpp \
    core/Core.cpp \
    core/data/task/Task.cpp \
    core/data/taskboard/TaskBoard.cpp \
    init/main.cpp \
    network/socket/ApplicationSocket.cpp \
    ui/mainWindow/MainWindow.cpp

HEADERS += \
    common/enums/task/EnumTaskExecuteStates.h \
    common/enums/task/EnumTaskNetworkStates.h \
    common/enums/task/EnumTaskPriorities.h \
    common/enums/taskboard/EnumTaskBoardRoles.h \
    common/log/Logger.h \
    core/Core.h \
    core/data/task/Task.h \
    core/data/task/TaskBody.h \
    core/data/task/TaskData.h \
    core/data/task/TaskStates.h \
    core/data/taskboard/TaskBoard.h \
    core/data/taskboard/TaskTypes.h \
    network/socket/ApplicationSocket.h \
    ui/mainWindow/MainWindow.h

FORMS += \
    ui/mainWindow/MainWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
