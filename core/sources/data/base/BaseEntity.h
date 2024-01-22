#ifndef BASEENTITY_H
#define BASEENTITY_H

#include <QtGlobal>

/**
 * @brief The BaseEntity class - класс, хранящий базовые возможности сущности
 */
class BaseEntity {

    protected:

        /**
         * @brief id - идентификационный номер сущности
         */
        quint16 id;

    public:

        /**
         * @brief BaseEntity - конструктор по умолчанию
         */
        BaseEntity() {};

        /**
         * @brief BaseEntity - конструктор инициализации
         * @param id - идентификационный номер
         */
        BaseEntity(const quint16 id) {
            this->id = id;
        }

        /**
         * @brief BaseEntity - конструктор копирования
         * @param other - другая базовая сущность
         */
        BaseEntity(BaseEntity &other) {
            this->id = other.id;
        }

        /**
         * @brief operator= - перегруженный оператор инициализации
         * @param other - другая базовая сущность
         * @return Базовая сущность
         */
        BaseEntity& operator=(BaseEntity &other) {
            this->id = other.id;

            return *this;
        }


        /**
         * @brief setID - метод установки id сущности
         * @param id - идентификационный номер
         */
        void setID(const quint16 id) {
            this->id = id;
        }

        /**
         * @brief getID - метод получения id сущности
         * @return Идентификационный номер сущности
         */
        quint16 getID() {
            return this->id;
        }


};

#endif // BASEENTITY_H
