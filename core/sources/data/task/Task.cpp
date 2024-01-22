#include "Task.h"


/**
 * @brief Task - конструктор инициализации без id. В данном случае id присваивается стандартное
 * значение
 * @param priority - приоритет задачи
 * @param attachments - приложения задачи
 * @param time - время задачи
 * @param body - тело задачи
 * @param states - состояния задачи
 * @param authors - авторы задачи
*/
Task::Task(const TaskPriorities priority, const QStringList attachments, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors)
    : TaskTime(time), TaskBody(body), TaskStates(states), TaskAuthors(authors) {


    // TODO: Поменять на константу
    this->id = 0000;

    this->priority = priority;
    this->attachments = attachments;
}

/**
 * @brief Task - конструктор инициализации с id.
 * @param id - идентификационный номер
 * @param priority - приоритет задачи
 * @param attachments - приложения задачи
 * @param time - время задачи
 * @param body - тело задачи
 * @param states - состояния задачи
 * @param authors - авторы задачи
*/
Task::Task(const quint16 id, const TaskPriorities priority, const QStringList attachments, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors)
    : TaskTime(time), TaskBody(body), TaskStates(states), TaskAuthors(authors) {


    this->id = id;
    this->priority = priority;
    this->attachments = attachments;
}

/**
 * @brief Task - конструктор инициализации с получением id из сущности.
 * @param priority - приоритет задачи
 * @param attachments - приложения задачи
 * @param entity - базовая сущность
 * @param time - время задачи
 * @param body - тело задачи
 * @param states - состояния задачи
 * @param authors - авторы задачи
*/
Task::Task(const TaskPriorities priority, const QStringList attachments, BaseEntity entity, TaskTime time, TaskBody body, TaskStates states, TaskAuthors authors)
    : BaseEntity(entity), TaskTime(time), TaskBody(body), TaskStates(states), TaskAuthors(authors) {

    this->priority = priority;
    this->attachments = attachments;
}

/**
 * @brief Task - конструктор копирования.
 * @param other - другая задача
*/
Task::Task(Task &other) : BaseEntity(other), TaskTime(other), TaskBody(other), TaskStates(other), TaskAuthors(other) {

    this->priority = other.priority;
    this->attachments = other.attachments;
}

/**
 * @brief operator= - перегруженный оператор инициализации.
 * @param other - другая задача
*/
Task& Task::operator=(const Task &other) {

    // Устанавливаем ресурсы другой задачи в нашу
    this->id = other.id;

    this->priority = other.priority;

    this->creationTime = other.creationTime;
    this->completionTime = other.completionTime;

    this->title = other.title;
    this->description = other.description;

    this->executeState = other.executeState;
    this->networkState = other.networkState;

    this->authorID = other.authorID;
    this->executorID = other.executorID;

    this->attachments = other.attachments;

    return *this;
}
