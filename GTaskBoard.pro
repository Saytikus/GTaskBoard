QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    common/sources/logs/Logger.cpp \
    core/sources/Core.cpp \
    core/sources/data/task/Task.cpp \
    core/sources/data/taskboard/TaskBoard.cpp \
    core/sources/data/user/UserProfile.cpp \
    init/sources/main.cpp \
    network/sources/socket/ApplicationSocket.cpp \
    ui/sources/windows/MainWindow.cpp

HEADERS += \
    common/sources/enums/task/EnumTaskExecuteStates.h \
    common/sources/enums/task/EnumTaskNetworkStates.h \
    common/sources/enums/taskboard/EnumTaskBoardTypes.h \
    common/sources/enums/user/EnumUserProfileRoles.h \
    common/sources/enums/task/EnumTaskPriorities.h \
    common/sources/logs/Logger.h \
    core/sources/Core.h \
    core/sources/data/base/BaseEntity.h \
    core/sources/data/task/Task.h \
    core/sources/data/task/TaskAuthors.h \
    core/sources/data/task/TaskBody.h \
    core/sources/data/task/TaskStates.h \
    core/sources/data/task/TaskTime.h \
    core/sources/data/taskboard/TaskBoard.h \
    core/sources/data/user/UserProfile.h \
    network/sources/socket/ApplicationSocket.h \
    ui/sources/windows/MainWindow.h

FORMS += \
    ui/sources/windows/MainWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
