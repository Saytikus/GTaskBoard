#ifndef TASKBODY_H
#define TASKBODY_H

#include <QString>

class TaskBody {

    protected:

        // Оглавление задачи
        QString title;

        // Описание задачи
        QString description;

    public:

        /*
         * @brief TaskBody - конструктор по умолчанию.
        */
        TaskBody(){};

        /*
         * @brief TaskBody - конструктор инициализации.
         * @param title - оглавление задачи
         * @param description - описание задачи
        */
        TaskBody(const QString title, const QString description) {
            this->title = title;
            this->description = description;
        }

        /*
         * @brief TaskBody - конструктор копирования.
         * @param other - другое тело задачи
        */
        TaskBody(TaskBody &other) {
            this->title = other.title;
            this->description = other.description;
        }

        /*
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другое тело задачи
        */
        TaskBody& operator=(TaskBody &other) {
            this->title = other.title;
            this->description = other.description;
        }


        /*
         * @brief setTitle - метод установки оглавления задачи.
         * @param title - оглавление
        */
        void setTitle(const QString title) {
            this->title = title;
        }

        /*
         * @brief setDescription - метод установки описания задачи.
         * @param description - описание
        */
        void setDescription(const QString description) {
            this->description = description;
        }


        /*
         * @brief getTitle - метод получения оглавления задачи.
         * @return Оглавление
        */
        QString getTitle() {
            return this->title;
        }

        /*
         * @brief getDescription - метод получения описания задачи.
         * @return Описание
        */
        QString getDescription() {
            return this->description;
        }

};

#endif // TASKBODY_H
