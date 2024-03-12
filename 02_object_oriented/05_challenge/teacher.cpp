#include "teacher.hpp"
#include "student.hpp"

#include <iostream>

Teacher::Teacher(std::string name) : name(name) {}

void Teacher::printStudents()
{
    for (const auto &student : students)
    {
        std::cout << student->getName() << std::endl;
    }
}

void Teacher::addStudent(Student *student)
{
    students.push_back(student);
}

std::string Teacher::getName()
{
    return name;
}