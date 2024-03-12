#include "garage.hpp"

#include <iostream>

int main(){
    Car car1("Toyota", "Prius", 2024, 500);
    Car car2("Toyota", "Rav4", 2024, 600);
    Garage garage;
    garage.addCar(&car1);
    garage.addCar(&car2);
    std::cout << garage.getNumCars() << std::endl;
    garage.removeCar(&car2);
    std::cout << garage.getNumCars() << std::endl;
    return 0;
}