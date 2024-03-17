#pragma once

#include <string>
#include <map>
#include <fstream>

class Phonebook
{
public:
    Phonebook();
    void add_person(const std::string &name, const std::string &phone_number);
    void remove_person(const std::string &name);
    std::string search_phone_number(const std::string &name);
    void display() const;
    void load_person_list_file(const std::string& file_path);

private:
    std::map<std::string, std::string> persons;
};