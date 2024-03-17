#include "phonebook.hpp"

#include <iostream>

Phonebook::Phonebook() {}

void Phonebook::add_person(const std::string &name, const std::string &phone_number)
{
    persons[name] = phone_number;
}

void Phonebook::remove_person(const std::string &name)
{
    persons.erase(name);
}

std::string Phonebook::search_phone_number(const std::string &name)
{
    auto it = persons.find(name);
    if (it != persons.end())
    {
        return it->second;
    }
    else
    {
        return "Name not found";
    }
}

void Phonebook::display() const
{
    for (const auto &person : persons)
    {
        std::cout << person.first << ": " << person.second << std::endl;
    }
}

void Phonebook::load_person_list_file(const std::string &file_path)
{
    std::ifstream input_file(file_path);

    if (!input_file)
    {
        std::cerr << "Error opening input file" << std::endl;
        return;
    }

    std::string name, number;
    while (input_file >> name >> number)
    {
        add_person(name, number);
    }

    input_file.close();
}