#ifndef TASKBOARD_H
#define TASKBOARD_H

#include <QtGlobal>

#include "core/data/taskboard/TaskTypes.h"


/*
 * @сlass TaskBoard - класс-сущность доски задач.
 * при создании задачи.
 *
*/
class TaskBoard {

    private:

        // Идентификационный номер
        quint16 id;

        // Список доступных типов для задач
        TaskTypes *availableTaskTypes;


    public:
        TaskBoard();
        ~TaskBoard();

};

#endif // TASKBOARD_H
