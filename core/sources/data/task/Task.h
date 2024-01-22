#ifndef TASK_H
#define TASK_H

#include <QtGlobal>

#include "core/data/base/BaseEntity.h"

#include "core/data/task/TaskData.h"
#include "core/data/task/TaskBody.h"
#include "core/data/task/TaskStates.h"

/*
 * @сlass Task - класс-сущность задачи.
 *
*/
class Task : public BaseEntity, public TaskData, public TaskBody, public TaskStates {

    public:

        /*
         * @brief Task - конструктор инициализации без id. В данном случае id присваивается стандартное
         * значение
         * @param data - данные задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(TaskData data, TaskBody body, TaskStates states) : TaskData(data), TaskBody(body), TaskStates(states) {
            // TODO: Поменять на константу
            this->id = 0000;
        }

        /*
         * @brief Task - конструктор инициализации с id.
         * @param id - идентификационный номер
         * @param data - данные задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(const quint16 id, TaskData data, TaskBody body, TaskStates states) : TaskData(data), TaskBody(body), TaskStates(states) {
            this->id = id;
        }

        /*
         * @brief Task - конструктор инициализации с получением id из сущности.
         * @param entity - сущность
         * @param data - данные задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(BaseEntity entity, TaskData data, TaskBody body, TaskStates states) : BaseEntity(entity), TaskData(data), TaskBody(body), TaskStates(states) {}

        /*
         * @brief Task - конструктор копирования.
         * @param other - другая задача
        */
        Task(Task &other) : BaseEntity(other), TaskData(other), TaskBody(other), TaskStates(other) {}

        /*
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другая задача
        */
        Task& operator=(const Task &other);

};

#endif // TASK_H
