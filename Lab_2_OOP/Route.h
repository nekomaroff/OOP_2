#pragma once
#include <string>

class Route {
private:
    std::string startPoint;
    std::string endPoint;
    int number;

public:
    Route();
    Route(std::string start, std::string end, int num);
    Route(const Route& other);

    std::string getStartPoint() const;
    std::string getEndPoint() const;
    int getNumber() const;

    void setStartPoint(const std::string& s);
    void setEndPoint(const std::string& s);
    void setNumber(int n);

    Route& operator=(const Route& other);

    friend std::istream& operator>>(std::istream& in, Route& r);
    friend std::ostream& operator<<(std::ostream& out, const Route& r);
};
