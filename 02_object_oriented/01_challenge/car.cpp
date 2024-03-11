#include "car.hpp"

#include <iostream>

Car::Car(std::string make, std::string model, int year, double price)
    : make(make), model(model), year(year), price(price), logger()
{
    if (price < 0)
    {
        std::cerr << "Negative Car Price!"
                  << "\n";
    }
}

void Car::setPrice(double price)
{
    std::string msg = "Changing price from " + std::to_string(this->price) + " to " + std::to_string(price);
    logger.logMessage(msg);
    this->price = price;
}

std::string Car::getMake() const { return make; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }
double Car::getPrice() const { return price; }

void Car::displayInfo() const
{
    std::cout << year << " " << make << " " << model << " - $" << price << "\n";
}