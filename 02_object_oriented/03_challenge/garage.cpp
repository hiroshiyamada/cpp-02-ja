#include "garage.hpp"

#include <algorithm>

Garage::Garage() {}

void Garage::addCar(Car *car)
{
    cars.push_back(car);
}

void Garage::removeCar(Car *car)
{
    auto it = std::find(cars.begin(), cars.end(), car);
    if (it == cars.end())
    {
        return;
    }
    else
    {
        cars.erase(it);
    }
}

int Garage::getNumCars(){
    return cars.size();
}