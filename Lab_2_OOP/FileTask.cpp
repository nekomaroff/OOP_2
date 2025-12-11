#include "FileTask.h"
#include <fstream>
#include <iostream>
#include <regex>

void FileTask::printLinesWithoutTwoDigitNumbers(const std::string& filename) {
    std::ifstream in(filename);

    if (!in.is_open()) {
        std::cout << "Ошибка: файл не найден!\n";
        return;
    }

    std::string line;
    std::regex twoDigitRegex("\\b\\d{2}\\b");

    while (std::getline(in, line)) {
        if (!std::regex_search(line, twoDigitRegex)) {
            std::cout << line << "\n";
        }
    }
}
