#ifndef TASK_H
#define TASK_H

#include <QtGlobal>

#include "core/data/task/TaskData.h"
#include "core/data/task/TaskBody.h"
#include "core/data/task/TaskStates.h"

/*
 * @сlass Task - класс-сущность задачи.
 *
*/
class Task : public TaskData, public TaskBody, public TaskStates {

    private:

        // Идентификационный номер задачи
        quint16 id;

    public:

        /*
         * @brief Task - конструктор по умолчанию.
         * @param id - идентификационный номер
         * @param data - данные задачи
         * @param body - тело задачи
         * @param states - состояния задачи
        */
        explicit Task(const quint16 id, TaskData data, TaskBody body, TaskStates states);

        /*
         * @brief Task - конструктор копирования.
         * @param other - другая задача
        */
        Task(Task &other);

        Task& operator=(Task &other);


        /*
         * @brief setID - метод установки идентификационного номера задачи.
         * @param id - идентификационный номер
        */
        void setID(const quint16 id);


        /*
         * @brief getID - метод получения идентификационного номера задачи.
         * @return Идентификационный номер
        */
        quint16 getID();

};

#endif // TASK_H
