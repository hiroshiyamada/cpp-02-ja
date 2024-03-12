#pragma once

#include <string>
#include <vector>

class Student;

class Teacher
{
public:
    Teacher(std::string name);
    void addStudent(Student *student);
    void printStudents();
    std::string getName();

private:
    std::string name;
    std::vector<Student *> students;
};