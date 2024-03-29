#ifndef TASKBODY_H
#define TASKBODY_H

#include <QString>

/**
 * @brief The TaskBody class - класс, хранящий информацию о заголовке и описании задачи
 */
class TaskBody {

    // TODO: исключения для случаев, когда заглавие пустое

    protected:


        /**
         * @brief title - заголовок задачи
         */
        QString title;

        /**
         * @brief description - описание задачи
         */
        QString description;

    public:

        /**
         * @brief TaskBody - конструктор по умолчанию.
         * @details Удалён
        */
        TaskBody() = delete;

        /**
         * @brief TaskBody - конструктор инициализации.
         * @param title - заголовок задачи
         * @param description - описание задачи
        */
        TaskBody(const QString title, const QString description) {
            this->title = title;
            this->description = description;
        }

        /**
         * @brief TaskBody - конструктор копирования.
         * @param other - другое тело задачи
        */
        TaskBody(TaskBody &other) {
            this->title = other.title;
            this->description = other.description;
        }

        /**
         * @brief operator= - перегруженный оператор инициализации.
         * @param other - другое тело задачи
        */
        TaskBody& operator=(TaskBody &other) {
            this->title = other.title;
            this->description = other.description;

            return *this;
        }


        /**
         * @brief setTitle - метод установки заголовка задачи.
         * @param title - заголовок
        */
        void setTitle(const QString title) {
            this->title = title;
        }

        /**
         * @brief setDescription - метод установки описания задачи.
         * @param description - описание
        */
        void setDescription(const QString description) {
            this->description = description;
        }


        /**
         * @brief getTitle - метод получения заголовка задачи.
         * @return Заголовок
        */
        QString getTitle() {
            return this->title;
        }

        /**
         * @brief getDescription - метод получения описания задачи.
         * @return Описание
        */
        QString getDescription() {
            return this->description;
        }

};

#endif // TASKBODY_H
