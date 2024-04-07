#include "circle.hpp"
#include <iostream>

int main(){
    Circle circle(10);
    std::cout << circle.getArea() << std::endl;
    return 0;
}