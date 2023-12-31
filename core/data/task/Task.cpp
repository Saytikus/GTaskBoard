#include "Task.h"


/*
 * @brief Task - конструктор по умолчанию.
 * @param id - идентификационный номер
 * @param data - данные задачи
 * @param body - тело задачи
 * @param states - состояния задачи
*/
Task::Task(const quint16 id, TaskData data, TaskBody body, TaskStates states) {

    // Инициализируем ресурсы задачи
    this->id = id;

    this->type = data.getType();
    this->priority = data.getPriority();

    this->title = body.getTitle();
    this->description = body.getDescription();

    this->executeState = states.getExecuteState();
    this->networkState = states.getNetworkState();

}

/*
 * @brief Task - конструктор копирования.
 * @param other - другая задача
*/
Task::Task(Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->type = other.getType();
    this->priority = other.getPriority();

    this->title = other.getTitle();
    this->description = other.getDescription();

    this->executeState = other.getExecuteState();
    this->networkState = other.getNetworkState();
}

Task& Task::operator=(Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->type = other.getType();
    this->priority = other.getPriority();

    this->title = other.getTitle();
    this->description = other.getDescription();

    this->executeState = other.getExecuteState();
    this->networkState = other.getNetworkState();

    return *this;
}


/*
 * @brief setID - метод установки идентификационного номера задачи.
 * @param id - идентификационный номер
*/
void Task::setID(const quint16 id) {
    this->id = id;
}

/*
 * @brief getID - метод получения идентификационного номера задачи.
 * @return Идентификационный номер
*/
quint16 Task::getID() {
    return this->id;
}
