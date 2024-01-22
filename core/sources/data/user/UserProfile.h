#ifndef USERPROFILE_H
#define USERPROFILE_H

#include "core/sources/data/base/BaseEntity.h"

#include "common/sources/enums/user/EnumUserProfileRoles.h"
#include <QString>

/**
 * @brief The UserProfile class - класс-сущность профиля пользователя.
 */
class UserProfile : public BaseEntity {

    private:

        /**
         * @brief userName - имя пользователя
         */
        QString userName;

        // TODO: переделать роли в парный контейнер типа: Роли профиля | Доска задач, в которой эти роли профиля назначены
        /**
         * @brief roles - роли пользователя
         */
        EnumUserProfileRoles roles;





    public:

        /**
         * @brief UserProfile
         */
        UserProfile() = delete;

};

#endif // USERPROFILE_H
