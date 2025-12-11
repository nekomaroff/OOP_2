#include "Route.h"
#include <iostream>

Route::Route() : startPoint(""), endPoint(""), number(0) {}

Route::Route(std::string start, std::string end, int num)
    : startPoint(start), endPoint(end), number(num) {}

Route::Route(const Route& other) {
    startPoint = other.startPoint;
    endPoint = other.endPoint;
    number = other.number;
}

Route::~Route() {}

std::string Route::getStartPoint() const { return startPoint; }
std::string Route::getEndPoint() const { return endPoint; }
int Route::getNumber() const { return number; }

void Route::setStartPoint(const std::string& s) { startPoint = s; }
void Route::setEndPoint(const std::string& s) { endPoint = s; }
void Route::setNumber(int n) { number = n; }

Route& Route::operator=(const Route& other) {
    if (this != &other) {
        startPoint = other.startPoint;
        endPoint = other.endPoint;
        number = other.number;
    }
    return *this;
}

std::istream& operator>>(std::istream& in, Route& r) {
    std::cout << "Начальный пункт: ";
    in >> r.startPoint;

    std::cout << "Конечный пункт: ";
    in >> r.endPoint;

    std::cout << "Номер маршрута: ";
    in >> r.number;

    return in;
}

std::ostream& operator<<(std::ostream& out, const Route& r) {
    out << "Маршрут #" << r.number << ": "
        << r.startPoint << " → " << r.endPoint;
    return out;
}
