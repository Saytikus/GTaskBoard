#ifndef TASKSTATES_H
#define TASKSTATES_H

#include "common/sources/enums/task/EnumTaskExecuteStates.h"
#include "common/sources/enums/task/EnumTaskNetworkStates.h"

/**
 * @brief The TaskStates class - класс, хранящий информацию о состояниях задачи
 */
class TaskStates {

    protected:

        /**
         * @brief executeState - состояние выполнения задачи
         */
        EnumTaskExecuteStates executeState;


        /**
         * @brief networkState - сетевое состояние задачи
         */
        EnumTaskNetworkStates networkState;

    public:

        /**
         * @brief TaskStates- конструктор по умолчанию.
         * @details Удалён
        */
        TaskStates() = delete;

        /**
         * @brief TaskStates - конструктор инициализации.
         * @param executeState - состояние выполнения задачи
         * @param networkState - сетевое состояние задачи
        */
        TaskStates(const EnumTaskExecuteStates executeState, const EnumTaskNetworkStates networkState) {
            this->executeState = executeState;
            this->networkState = networkState;
        }

        /**
         * @brief TaskStates - конструктор копирования.
         * @param other - другие состояния задачи
        */
        TaskStates(TaskStates &other) {
            this->executeState = other.executeState;
            this->networkState = other.networkState;
        }

        /**
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другие состояния задачи
        */
        TaskStates& operator=(TaskStates &other) {
            this->executeState = other.executeState;
            this->networkState = other.networkState;

            return *this;
        }


        /**
         * @brief setExecuteState - метод установки состояния выполнения задачи.
         * @param executeState - состояние выполнения
        */
        void setExecuteState(const EnumTaskExecuteStates executeState) {
            this->executeState = executeState;
        }

        /**
         * @brief setNetworkState - метод установки сетевого состояния задачи.
         * @param networkState - сетевое состояние
        */
        void setNetworkState(const EnumTaskNetworkStates networkState) {
            this->networkState = networkState;
        }


        /**
         * @brief getExecuteState - метод получения состояния выполнения задачи.
         * @return Состояние выполнения
        */
        EnumTaskExecuteStates getExecuteState() {
            return this->executeState;
        }

        /**
         * @brief getNetworkState - метод получения сетевого состояния задачи.
         * @return Сетевое состояние
        */
        EnumTaskNetworkStates getNetworkState() {
            return this->networkState;
        }

};

#endif // TASKSTATES_H
