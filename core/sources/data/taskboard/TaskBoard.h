#ifndef TASKBOARD_H
#define TASKBOARD_H

#include <QtGlobal>

#include "core/data/taskboard/TaskTypes.h"

#include "common/enums/taskboard/EnumTaskBoardRoles.h"

/*
 * @сlass TaskBoard - класс-сущность доски задач.
 *
*/
class TaskBoard {

    private:

        // Идентификационный номер
        quint16 id;

        // Список доступных типов для задач
        TaskTypes *availableTaskTypes;

        // Роли доски задач
        QList<TaskBoardRoles> *roles;


    public:

        /*
         * @brief TaskBoard - конструктор по умолчанию
        */
        TaskBoard();

        /*
         * @brief TaskBoard - конструктор по умолчанию, с аргументами
         * @param id - идентификационнный номер доски задач
         * @param taskTypes - список типов задач
         * @param roles - список ролей доски задач
        */
        TaskBoard(const quint16 id, TaskTypes *taskTypes, QList<TaskBoardRoles> *roles);

        /*
         * @brief TaskBoard - конструктор по копирования
         * @param other - другая доска задач
        */
        TaskBoard(TaskBoard &other);

        /*
         * @brief operator= - перегруженный оператор инициализации
         * @description Удалён.
        */
        TaskBoard& operator=(TaskBoard &other) = delete;

        /*
         * @brief ~TaskBoard - деструктор. Очищает память от полей класса
        */
        ~TaskBoard();

};

#endif // TASKBOARD_H
