#include "TaskBoard.h"


TaskBoard::TaskBoard() {

    // Инициализируем ресурсы
    this->id = 0;

    this->availableTaskTypes = new TaskTypes();

}

TaskBoard::~TaskBoard() {

    // Очищаем список типов задач и удаляем его
    this->availableTaskTypes->clear();
    delete availableTaskTypes;

}
