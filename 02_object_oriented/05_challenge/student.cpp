#include "student.hpp"
#include "teacher.hpp"

#include <iostream>

Student::Student(std::string name) : name(name) {}

void Student::printTeachers()
{
    for (const auto &teacher : teachers)
    {
        std::cout << teacher->getName() << std::endl;
    }
}

void Student::addTeacher(Teacher *teacher)
{
    teachers.push_back(teacher);
}

std::string Student::getName()
{
    return name;
}