#include "phonebook.hpp"

#include <iostream>

int main(){
    Phonebook person;
    person.load_person_list_file("persons.txt");
    person.display();
    std::cout << "---------------------" << std::endl;
    person.add_person("Iida", "345678");
    person.display();
    std::cout << "---------------------" << std::endl;
    person.remove_person("Noname");
    person.display();
    std::cout << "---------------------" << std::endl;
    person.remove_person("Yamada");
    person.display();
    std::cout << "---------------------" << std::endl;
    std::cout << person.search_phone_number("Noname") << std::endl;
    std::cout << person.search_phone_number("Hiroshi") << std::endl;

    return 0;
}