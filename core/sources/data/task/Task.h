#ifndef TASK_H
#define TASK_H

#include <QtGlobal>

#include "core/sources/data/base/BaseEntity.h"

#include "core/sources/data/task/TaskTime.h"
#include "core/sources/data/task/TaskBody.h"
#include "core/sources/data/task/TaskStates.h"

/*
 * @сlass Task - класс-сущность задачи.
 *
*/
class Task : public BaseEntity, public TaskTime, public TaskBody, public TaskStates {

    public:

        /*
         * @brief Task - конструктор инициализации без id. В данном случае id присваивается стандартное
         * значение
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(TaskTime time, TaskBody body, TaskStates states) : TaskTime(time), TaskBody(body), TaskStates(states) {
            // TODO: Поменять на константу
            this->id = 0000;
        }

        /*
         * @brief Task - конструктор инициализации с id.
         * @param id - идентификационный номер
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(const quint16 id, TaskTime time, TaskBody body, TaskStates states) : TaskTime(time), TaskBody(body), TaskStates(states) {
            this->id = id;
        }

        /*
         * @brief Task - конструктор инициализации с получением id из сущности.
         * @param entity - сущность
         * @param time - время задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        Task(BaseEntity entity, TaskTime time, TaskBody body, TaskStates states) : BaseEntity(entity), TaskTime(time), TaskBody(body), TaskStates(states) {}

        /*
         * @brief Task - конструктор копирования.
         * @param other - другая задача
        */
        Task(Task &other) : BaseEntity(other), TaskTime(other), TaskBody(other), TaskStates(other) {}

        /*
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другая задача
        */
        Task& operator=(const Task &other);

};

#endif // TASK_H
