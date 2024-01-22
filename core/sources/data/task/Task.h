#ifndef TASK_H
#define TASK_H

#include <QtGlobal>
#include <QString>
#include <QStringList>

#include "core/sources/data/base/BaseEntity.h"

#include "core/sources/data/task/TaskTime.h"
#include "core/sources/data/task/TaskBody.h"
#include "core/sources/data/task/TaskStates.h"
#include "core/sources/data/task/TaskAuthors.h""

#include "common/sources/enums/task/EnumTaskPriorities.h"

/**
 * @brief The Task class - класс-сущность задачи.
 */
class Task : public BaseEntity, public TaskTime, public TaskBody, public TaskStates, public TaskAuthors {

    private:

        /**
         * @brief priority - приоритет задачи
         */
        TaskPriorities priority;

        /**
         * @brief attachments - приложения задачи ( прикреплённые файлы )
         */
        QStringList attachments;

    public:

        /**
         * @brief Task - конструктор по умолчанию
         * @details Удалён
         */
        Task() = delete;

        /**
         * @brief Task - конструктор инициализации без id. В данном случае id присваивается стандартное
         * значение
         * @param priority - приоритет задачи
         * @param attachments - приложения задачи
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
         * @param authors - авторы задачи
        */
        Task(const TaskPriorities priority, const QStringList attachments, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors);

        /**
         * @brief Task - конструктор инициализации с id.
         * @param id - идентификационный номер
         * @param priority - приоритет задачи
         * @param attachments - приложения задачи
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
         * @param authors - авторы задачи
        */
        Task(const quint16 id, const TaskPriorities priority, const QStringList attachments, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors);

        /**
         * @brief Task - конструктор инициализации с получением id из сущности.
         * @param priority - приоритет задачи
         * @param attachments - приложения задачи
         * @param entity - базовая сущность
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
         * @param authors - авторы задачи
        */
        Task(const TaskPriorities priority, const QStringList attachments, BaseEntity entity, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors);

        /**
         * @brief Task - конструктор копирования.
         * @param other - другая задача
        */
        Task(Task &other);

        /**
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другая задача
        */
        Task& operator=(const Task &other);

};

#endif // TASK_H
