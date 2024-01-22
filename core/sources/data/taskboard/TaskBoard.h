#ifndef TASKBOARD_H
#define TASKBOARD_H

#include <QtGlobal>

#include "core/sources/data/taskboard/TaskTypes.h"

#include "common/sources/enums/taskboard/EnumTaskBoardRoles.h"

/**
 * @сlass TaskBoard - класс-сущность доски задач.
 *
*/
class TaskBoard {

    private:

        /**
         * @brief id - идентификационный номер доски задач
         */
        quint16 id;

        // Список доступных типов для задач
        TaskTypes *availableTaskTypes;

        // Роли доски задач
        QList<EnumTaskBoardRoles> *roles;


    public:

        /**
         * @brief TaskBoard - конструктор по умолчанию
        */
        TaskBoard();

        /**
         * @brief TaskBoard - конструктор по умолчанию, с аргументами
         * @param id - идентификационнный номер доски задач
         * @param taskTypes - список типов задач
         * @param roles - список ролей доски задач
        */
        TaskBoard(const quint16 id, TaskTypes *taskTypes, QList<EnumTaskBoardRoles> *roles);

        /**
         * @brief TaskBoard - конструктор по копирования
         * @param other - другая доска задач
        */
        TaskBoard(TaskBoard &other);

        /**
         * @brief operator= - перегруженный оператор инициализации
         * @description Удалён.
        */
        TaskBoard& operator=(TaskBoard &other) = delete;

        /**
         * @brief ~TaskBoard - деструктор. Очищает память от полей класса
        */
        ~TaskBoard();

};

#endif // TASKBOARD_H
