#include "car.hpp"
#include <iostream>

int main(){
    Car car("Toyota", "Prius", 2024, 500);
    Driver driver("Yamada", 32);
    car.setDriver(&driver);
    Driver* prius_driver = car.getDriver();
    std::cout << prius_driver->get_name() << std::endl;
    return 0;
}