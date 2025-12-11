#include "Menu.h"
#include <iostream>

void Menu::inputRoutes() {
    routes.clear();
    routes.resize(8);

    std::cout << "Введите данные для 8 маршрутов:\n";

    for (int i = 0; i < 8; i++) {
        std::cout << "\nМаршрут #" << (i + 1) << "\n";
        std::cin >> routes[i];
    }
}

void Menu::printRoutes() const {
    std::cout << "\n==== Список маршрутов ====\n";

    for (const auto& r : routes) {
        std::cout << r << "\n";
    }
}

void Menu::findByPoint() const {
    std::string point;
    std::cout << "Введите пункт (начальный или конечный): ";
    std::cin >> point;

    bool found = false;

    for (const auto& r : routes) {
        if (r.getStartPoint() == point || r.getEndPoint() == point) {
            std::cout << r << "\n";
            found = true;
        }
    }

    if (!found) {
        std::cout << "Маршрутов не найдено.\n";
    }
}

void Menu::run() {
    while (true) {
        std::cout << "\n===== МЕНЮ =====\n";
        std::cout << "1) Ввести маршруты\n";
        std::cout << "2) Показать маршруты\n";
        std::cout << "3) Поиск по пункту\n";
        std::cout << "4) Файловая задача (показ строк без двузначных чисел)\n";
        std::cout << "0) Выход\nВыбор: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: inputRoutes(); break;
            case 2: printRoutes(); break;
            case 3: findByPoint(); break;
            case 4:
                FileTask::printLinesWithoutTwoDigitNumbers("text.txt");
                break;
            case 0: return;
            default: std::cout << "Некорректный ввод!\n";
        }
    }
}
