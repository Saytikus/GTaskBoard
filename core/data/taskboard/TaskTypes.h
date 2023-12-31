#ifndef TASKTYPES_H
#define TASKTYPES_H

#include <QString>
#include <QList>


/*
 * @сlass TaskTypes - класс, хранящий в себе типы задач, которые можно указать
 * при создании задачи.
 *
*/
class TaskTypes {

    private:

        // Типы задач
        QList<QString> types;


    public:

        /*
         * @brief Task - конструктор по умолчанию.
        */
        TaskTypes() {

            // TODO: вынести стандартные значения в класс с константами

            // Добавляем в типы стандартные элементы
            types.append("Добавить");
            types.append("Исправить");
            types.append("Переработать");

        }

        /*
         * @brief TaskTypes - конструктор по инициализации с аргументами.
         * @param types - список типов задач
        */
        TaskTypes(QList<QString> types) {

            // Инициализируем наши типы пришедшими типами
            this->types = types;
        }

        /*
         * @brief TaskTypes - конструктор копирования.
         * @param other - другой объект типов задач
        */
        TaskTypes(TaskTypes &other) {

            this->types = other.types;
        }

        /*
         * @brief operator= - оператор инициализации.
         * @param other - другой объект типов задач
         * @description - Удалён.
        */
        TaskTypes& operator=(TaskTypes &other) = delete;


        /*
         * @brief appendType - метод добавления типа в список.
         * @param type - тип задачи
        */
        void appendType(const QString type) {

            // TODO: исключение (alreadyExists)

            // Добавляем в типы пришедший тип
            this->types.append(type);
        }

        /*
         * @brief removeType - метод удаления типа из списка.
         * @param type - тип задачи
        */
        void removeType(const QString type) {

            // TODO: исключение (notFound)

            // Удаляем пришедший тип из наших типов
            this->types.removeOne(type);
        }

        /*
         * @brief clear - метод очищения списка типов.
        */
        void clear() {
            // Очищаем список типов
            this->types.clear();
        }

};

#endif // TASKTYPES_H
