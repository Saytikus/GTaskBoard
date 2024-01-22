#include "TaskBoard.h"


TaskBoard::TaskBoard() {

    // TODO: добавить класс, хранящий константы для стандартной инициализации доски задач

    // TODO: доска задач будет инициализироваться при создании профиля, инициализация со стандартным ID,
    // настоящий ID будет указывать сервер, при первом присоединении к нему

    // Инициализируем ресурсы стандартными значениями

    //Хардкодинг
    this->id = 0000;

    // Хардкодинг
    this->availableTaskTypes = new TaskTypes();

    // Хардкодинг
    this->roles->append(EnumTaskBoardRoles::Executor);

}

TaskBoard::TaskBoard(const quint16 id, TaskTypes *taskTypes, QList<EnumTaskBoardRoles> *roles) {

    // Инициализируем ресурсы
    this->id = id;
    this->availableTaskTypes = taskTypes;
    this->roles = roles;

}

TaskBoard::TaskBoard(TaskBoard &other) {

    // Инициализируем свои ресурсы ресурсами другой доски задач
    this->id = other.id;
    this->availableTaskTypes = other.availableTaskTypes;
    this->roles = other.roles;

}

/**
 * @brief ~TaskBoard - деструктор. Очищает память от полей класса.
*/
TaskBoard::~TaskBoard() {

    // Очищаем список типов задач и удаляем его
    this->availableTaskTypes->clear();
    delete availableTaskTypes;

    // Очищаем список ролей и удаляем его
    this->roles->clear();
    delete roles;

}
