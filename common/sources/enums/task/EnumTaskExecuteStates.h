#ifndef ENUMTASKEXECUTESTATES_H
#define ENUMTASKEXECUTESTATES_H

#include <QtGlobal>

/**
 * @brief The EnumTaskExecuteStates enum - набор состояний выполнения задачи
 */
enum EnumTaskExecuteStates : quint8 {

    AvailableForExecute = 0,

    Executing = 1,

    Executed = 2,

    AvailableForRefactor = 3,

    Refactoring = 4,

    Refactored = 5

};

#endif // ENUMTASKEXECUTESTATES_H
