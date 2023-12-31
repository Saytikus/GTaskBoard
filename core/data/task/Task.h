#ifndef TASK_H
#define TASK_H

#include <QtGlobal>
#include <QString>

#include "common/enums/task/EnumTaskExecuteStates.h"
#include "common/enums/task/EnumTaskNetworkStates.h"

/*
 * @сlass Task - класс-сущность задачи.
 *
*/
class Task {

    private:

        // Идентификационный номер задачи
        quint16 id;

        // Тип задачи
        QString type;

        // Оглавление задачи
        QString title;

        // Описание задачи
        QString description;

        // Состояние выполнения задачи
        TaskExecuteStates executeState;

        // Сетевое состояние задачи
        TaskNetworkStates networkState;


    public:

        /*
         * @brief Task - конструктор по умолчанию.
         * @param id - идентификационный номер
         * @param title - оглавление
         * @param description - описание
         * @param executeState - состояние выполнения
         * @param networkState - сетевое состояние
        */
        explicit Task(const quint16 id, const QString title, const QString description, const TaskExecuteStates executeState, TaskNetworkStates networkState);

        /*
         * @brief Task - конструктор копирования.
         * @param other - другая задача
        */
        Task(Task &other);


        /*
         * @brief setID - метод установки идентификационного номера задачи.
         * @param id - идентификационный номер
        */
        void setID(const quint16 id);

        /*
         * @brief setTitle - метод установки оглавления задачи.
         * @param title - оглавление
        */
        void setTitle(const QString title);

        /*
         * @brief setDescription - метод установки описания задачи.
         * @param description - описание
        */
        void setDescription(const QString description);

        /*
         * @brief setExecuteState - метод установки состояния выполнения задачи.
         * @param executeState - состояние выполнения
        */
        void setExecuteState(const TaskExecuteStates executeState);

        /*
         * @brief setNetworkState - метод установки сетевого состояния задачи.
         * @param networkState - сетевое состояние
        */
        void setNetworkState(const TaskNetworkStates networkState);


        /*
         * @brief getID - метод получения идентификационного номера задачи.
         * @return Идентификационный номер
        */
        quint16 getID();

        /*
         * @brief getTitle - метод получения оглавления задачи.
         * @return Оглавление
        */
        QString getTitle();

        /*
         * @brief getDescription - метод получения описания задачи.
         * @return Описание
        */
        QString getDescription();

        /*
         * @brief getExecuteState - метод получения состояния выполнения задачи.
         * @return Состояние выполнения
        */
        TaskExecuteStates getExecuteState();

        /*
         * @brief getNetworkState - метод получения сетевого состояния задачи.
         * @return Сетевое состояние
        */
        TaskNetworkStates getNetworkState();
};

#endif // TASK_H
