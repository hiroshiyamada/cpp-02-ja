#include "dog.hpp"
#include <memory>

int main(){
    Animal animal;
    animal.makeSound();
    std::unique_ptr<Animal> derived_animal = std::make_unique<Dog>();
    derived_animal->makeSound();
    return 0;
}