#ifndef TASKAUTHORS_H
#define TASKAUTHORS_H

#include <QtGlobal>

/**
 * @brief The TaskAuthors class - класс, хранящий информацию о создателе и исполнителе задачи.
 */
class TaskAuthors {

    protected:

        /**
         * @brief authorID - идентификационный номер создателя задачи
         */
        quint32 authorID;

        /**
         * @brief executorID - идентификационный номер исполнителя задачи
         */
        quint32 executorID;

    public:

        /**
         * @brief TaskAuthors - конструктор по умолчанию
         * @details Удалён
         */
        TaskAuthors() = delete;

        /**
         * @brief TaskAuthors - конструктор инициализации
         * @param authorID - идентификационный номер создателя задачи
         * @param executorID - идентификационный номер исполнителя задачи
         */
        TaskAuthors(const quint32 authorID, const quint32 executorID) {
            this->authorID = authorID;
            this->executorID = executorID;
        }


        /**
         * @brief TaskAuthors - конструктор копирования
         * @param other - другие авторы задачи
         */
        TaskAuthors(TaskAuthors &other) {
            this->authorID = other.authorID;
            this->executorID = other.executorID;
        }


        /**
         * @brief operator= - перегруженный оператор инициализации
         * @param other - другие авторы задачи
         * @return
         */
        TaskAuthors& operator=(TaskAuthors &other) {
            this->authorID = other.authorID;
            this->executorID = other.executorID;

            return *this;
        }
};

#endif // TASKAUTHORS_H
