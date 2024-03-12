#pragma once

#include <string>

class Driver{
public:
    Driver(std::string name, int age);
    std::string get_name();
private:
    std::string name;
    int age;
};