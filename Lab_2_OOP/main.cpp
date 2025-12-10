#include <iostream>
#include "Route.h"
#include "FileTask.h"

int main() {
    std::cout << "ЛР2: тестовый запуск без меню\n";

    Route r("Москва", "Пермь", 5);
    std::cout << r << "\n";

    FileTask::printLinesWithoutTwoDigitNumbers("test.txt");

    return 0;
}
