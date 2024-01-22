#include "Task.h"

/*
 * @brief operator= - перегруженный оператор инициализации.
 * @param other - другая задача
*/
Task& Task::operator=(const Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->creationTime = other.creationTime;
    this->completionTime = other.completionTime;

    this->title = other.title;
    this->description = other.description;

    this->executeState = other.executeState;
    this->networkState = other.networkState;

    return *this;
}
