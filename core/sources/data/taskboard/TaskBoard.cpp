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

}

TaskBoard::TaskBoard(const quint16 id, TaskTypes *taskTypes) {

    // Инициализируем ресурсы
    this->id = id;
    this->availableTaskTypes = taskTypes;

}

TaskBoard::TaskBoard(TaskBoard &other) {

    // Инициализируем свои ресурсы ресурсами другой доски задач
    this->id = other.id;
    this->availableTaskTypes = other.availableTaskTypes;

}

/**
 * @brief ~TaskBoard - деструктор. Очищает память от полей класса.
*/
TaskBoard::~TaskBoard() {

    // Очищаем список типов задач и удаляем его
    this->availableTaskTypes->clear();
    delete availableTaskTypes;

}
