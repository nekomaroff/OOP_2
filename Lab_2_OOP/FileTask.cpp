#include "FileTask.h"
#include <iostream>
#include <fstream>
#include <regex>

void FileTask::printLinesWithoutTwoDigitNumbers(const std::string& filename) {
    std::ifstream in(filename);
    if (!in.is_open()) {
        std::cout << "Ошибка открытия файла!\n";
        return;
    }

    std::string line;
    std::regex pattern(R"(\b\d{2}\b)");

    while (std::getline(in, line)) {
        if (!std::regex_search(line, pattern)) {
            std::cout << line << std::endl;
        }
    }
}
