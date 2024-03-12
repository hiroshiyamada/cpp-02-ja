#pragma once

#include <string>
#include <vector>

class Teacher;

class Student
{
public:
    Student(std::string name);
    void printTeachers();
    void addTeacher(Teacher *teacher);
    std::string getName();

private:
    std::string name;
    std::vector<Teacher *> teachers;
};