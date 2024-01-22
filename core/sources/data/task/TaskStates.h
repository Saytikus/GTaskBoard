#ifndef TASKSTATES_H
#define TASKSTATES_H

#include "common/enums/task/EnumTaskExecuteStates.h"
#include "common/enums/task/EnumTaskNetworkStates.h"

class TaskStates {

    protected:

        // Состояние выполнения задачи
        TaskExecuteStates executeState;

        // Сетевое состояние задачи
        TaskNetworkStates networkState;

    public:

        /*
         * @brief TaskStates- конструктор по умолчанию.
        */
        TaskStates(){};

        /*
         * @brief TaskStates - конструктор инициализации.
         * @param executeState - состояние выполнения задачи
         * @param networkState - сетевое состояние задачи
        */
        TaskStates(const TaskExecuteStates executeState, const TaskNetworkStates networkState) {
            this->executeState = executeState;
            this->networkState = networkState;
        }

        /*
         * @brief TaskStates - конструктор копирования.
         * @param other - другие состояния задачи
        */
        TaskStates(TaskStates &other) {
            this->executeState = other.executeState;
            this->networkState = other.networkState;
        }

        /*
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другие состояния задачи
        */
        TaskStates& operator=(TaskStates &other) {
            this->executeState = other.executeState;
            this->networkState = other.networkState;

            return *this;
        }


        /*
         * @brief setExecuteState - метод установки состояния выполнения задачи.
         * @param executeState - состояние выполнения
        */
        void setExecuteState(const TaskExecuteStates executeState) {
            this->executeState = executeState;
        }

        /*
         * @brief setNetworkState - метод установки сетевого состояния задачи.
         * @param networkState - сетевое состояние
        */
        void setNetworkState(const TaskNetworkStates networkState) {
            this->networkState = networkState;
        }


        /*
         * @brief getExecuteState - метод получения состояния выполнения задачи.
         * @return Состояние выполнения
        */
        TaskExecuteStates getExecuteState() {
            return this->executeState;
        }

        /*
         * @brief getNetworkState - метод получения сетевого состояния задачи.
         * @return Сетевое состояние
        */
        TaskNetworkStates getNetworkState() {
            return this->networkState;
        }

};

#endif // TASKSTATES_H
