#include "Task.h"

Task& Task::operator=(const Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->type = other.type;
    this->priority = other.priority;

    this->title = other.title;
    this->description = other.description;

    this->executeState = other.executeState;
    this->networkState = other.networkState;

    return *this;
}
