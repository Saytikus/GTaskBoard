#ifndef TASKTIME_H
#define TASKTIME_H

#include <QDateTime>
#include <QString>


/**
 * @brief The TaskTime class - класс, хранящий информацию о времени задачи.
 */
class TaskTime {

    protected:

        QDateTime creationTime;

        QDateTime completionTime;

    public:

        /**
         * @brief TaskData - конструктор по умолчанию.
         * @details Удалён
        */
        TaskTime() = delete;

        /**
         * @brief TaskData - конструктор инициализации.
         * @param creationTime - время создания задачи
         * @param completionTime - время завершения задачи
        */
        TaskTime(const QDateTime creationTime, const QDateTime completionTime) {
            this->creationTime = creationTime;
            this->completionTime = completionTime;
        }

        /**
         * @brief TaskData - конструктор копирования.
         * @param other - другие данные задачи
        */
        TaskTime(TaskTime &other) {
            this->creationTime = other.creationTime;
            this->completionTime = other.completionTime;
        }

        /**
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другие данные задачи
        */
        TaskTime& operator=(TaskTime &other) {
            this->creationTime = other.creationTime;
            this->completionTime = other.completionTime;

            return *this;
        }


        /**
         * @brief setCreationTime - метод установки времени создания задачи
         * @param creationTime - время создания
         */
        void setCreationTime(const QDateTime creationTime) {
            this->creationTime = creationTime;
        }

        /**
         * @brief setCompletionTime - метод установки времени завершения задачи
         * @param completionTime - время завершения
         */
        void setCompletionTime(const QDateTime completionTime) {
            this->completionTime = completionTime;
        }


        /**
         * @brief getCreationTime - метод получения времени создания задачи
         * @return Время создания задачи
         */
        QDateTime getCreationTime() {
            return this->creationTime;
        }

        /**
         * @brief getCompletionTime - метод получения времени завершения задачи
         * @return Время завершения задачи
         */
        QDateTime getCompletionTime() {
            return this->completionTime;
        }

};

#endif // TASKTIME_H
