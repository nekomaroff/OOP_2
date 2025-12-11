#pragma once
#include "Route.h"
#include "FileTask.h"
#include <vector>

class Menu {
private:
    std::vector<Route> routes;

public:
    void run();
    void inputRoutes();
    void printRoutes() const;
    void findByPoint() const;
};
