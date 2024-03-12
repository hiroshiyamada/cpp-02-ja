#include "tire.hpp"

#include <iostream>

Tire::Tire(int size, std::string type) : size(size), type(type)
{
    std::cout << "Tire created!" << std::endl;
}