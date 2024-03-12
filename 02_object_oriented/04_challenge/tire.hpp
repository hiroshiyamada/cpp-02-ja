#pragma once

#include <string>

class Tire
{
public:
    Tire(int size, std::string type);

private:
    int size;
    std::string type;
};