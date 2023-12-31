#include "Task.h"


/*
 * @brief Task - конструктор по умолчанию.
 * @param id - идентификационный номер
 * @param title - оглавление
 * @param description - описание
 * @param executeState - состояние выполнения
 * @param networkState - сетевое состояние
*/
Task::Task(const quint16 id, const QString type, const TaskPriorities priority, const QString title, const QString description, const TaskExecuteStates executeState, TaskNetworkStates networkState) {

    // Инициализируем ресурсы задачи
    this->id = id;

    this->type = type;
    this->priority = priority;

    this->title = title;
    this->description = description;

    this->executeState = executeState;
    this->networkState = networkState;

}

/*
 * @brief Task - конструктор копирования.
 * @param other - другая задача
*/
Task::Task(Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->title = other.title;
    this->description = other.description;

    this->executeState = other.executeState;
    this->networkState = other.networkState;
}


/*
 * @brief setID - метод установки идентификационного номера задачи.
 * @param id - идентификационный номер
*/
void Task::setID(const quint16 id) {
    this->id = id;
}

/*
 * @brief setType - метод установки типа задачи.
 * @param title - тип
*/
void Task::setType(const QString type) {
    this->type = type;
}

/*
 * @brief setPriority - метод установки приоритета задачи.
 * @param priority - приоритет
*/
void Task::setPriority(const TaskPriorities priority) {
    this->priority = priority;
}

/*
 * @brief setTitle - метод установки оглавления задачи.
 * @param title - оглавление
*/
void Task::setTitle(const QString title) {
    this->title = title;
}

/*
 * @brief setDescription - метод установки описания задачи.
 * @param description - описание
*/
void Task::setDescription(const QString description) {
    this->description = description;
}

/*
 * @brief setExecuteState - метод установки состояния выполнения задачи.
 * @param executeState - состояние выполнения
*/
void Task::setExecuteState(const TaskExecuteStates executeState) {
    this->executeState = executeState;
}

/*
 * @brief setNetworkState - метод установки сетевого состояния задачи.
 * @param networkState - сетевое состояние
*/
void Task::setNetworkState(const TaskNetworkStates networkState) {
    this->networkState = networkState;
}


/*
 * @brief getID - метод получения идентификационного номера задачи.
 * @return Идентификационный номер
*/
quint16 Task::getID() {
    return this->id;
}

/*
 * @brief getType - метод получения типа задачи.
 * @return Тип
*/
QString Task::getType() {
    return this->type;
}

/*
 * @brief getPriority - метод получения приоритета задачи.
 * @return Приоритет
*/
TaskPriorities Task::getPriority() {
    return this->priority;
}

/*
 * @brief getTitle - метод получения оглавления задачи.
 * @return Оглавление
*/
QString Task::getTitle() {
    return this->title;
}

/*
 * @brief getDescription - метод получения описания задачи.
 * @return Описание
*/
QString Task::getDescription() {
    return this->description;
}

/*
 * @brief getExecuteState - метод получения состояния выполнения задачи.
 * @return Состояние выполнения
*/
TaskExecuteStates Task::getExecuteState() {
    return this->executeState;
}

/*
 * @brief getNetworkState - метод получения сетевого состояния задачи.
 * @return Сетевое состояние
*/
TaskNetworkStates Task::getNetworkState() {
    return this->networkState;
}
