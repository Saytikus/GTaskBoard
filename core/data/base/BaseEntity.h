#ifndef BASEENTITY_H
#define BASEENTITY_H

#include <QtGlobal>

class BaseEntity {

    protected:

        // Идентификационный номер
        quint16 id;

    public:

        explicit BaseEntity(){};

        BaseEntity(const quint16 id) {
            this->id = id;
        }

        BaseEntity(BaseEntity &other) {
            this->id = other.id;
        }

        BaseEntity& operator=(BaseEntity &other) {
            this->id = other.id;

            return *this;
        }


        void setID(const quint16 id) {
            this->id = id;
        }

        quint16 getID() {
            return this->id;
        }


};

#endif // BASEENTITY_H
