#ifndef TASKDATA_H
#define TASKDATA_H

#include <QString>

#include "common/enums/task/EnumTaskPriorities.h"

class TaskData {

    protected:

        // Тип задачи
        QString type;

        // Приоритет задачи
        TaskPriorities priority;

    public:

        /*
         * @brief TaskData - конструктор по умолчанию.
        */
        TaskData(){};

        /*
         * @brief TaskData - конструктор инициализации.
         * @param type - тип задачи
         * @param priority - приоритет задачи
        */
        TaskData(const QString type, const TaskPriorities priority) {
            this->type = type;
            this->priority = priority;
        }

        /*
         * @brief TaskData - конструктор копирования.
         * @param other - другие данные задачи
        */
        TaskData(TaskData &other) {
            this->type = other.type;
            this->priority = other.priority;
        }

        /*
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другие данные задачи
        */
        TaskData& operator=(TaskData &other) {
            this->type = other.type;
            this->priority = other.priority;

            return *this;
        }


        /*
         * @brief setType - метод установки типа задачи.
         * @param title - тип
        */
        void setType(const QString type) {
            this->type = type;
        }

        /*
         * @brief setPriority - метод установки приоритета задачи.
         * @param priority - приоритет
        */
        void setPriority(const TaskPriorities priority) {
            this->priority = priority;
        }


        /*
         * @brief getType - метод получения типа задачи.
         * @return Тип
        */
        QString getType() {
            return this->type;
        }

        /*
         * @brief getPriority - метод получения приоритета задачи.
         * @return Приоритет
        */
        TaskPriorities getPriority() {
            return this->priority;
        }

};

#endif // TASKDATA_H
