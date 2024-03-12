#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

#include <algorithm>
#include <iostream>

School::School() {}

void School::enrollStudent(Student *student)
{
    students.push_back(student);
}

void School::hireTeacher(Teacher *teacher)
{
    teachers.push_back(teacher);
}

void School::assignStudent(Student *student, Teacher *teacher)
{
    if(isStudentEnrolled(student) == false){
        std::cout << "Student: " << student->getName() << " is not enrolled." << std::endl;
        return;
    }
    if(isTeacherHired(teacher) == false){
        std::cout << "Teacher: " << teacher->getName() << " is not hired." << std::endl;
        return;
    }
    teacher->addStudent(student);
    student->addTeacher(teacher);
}

bool School::isStudentEnrolled(Student *student){
    auto it = std::find(students.begin(), students.end(), student);
    if (it == students.end())
    {
        return false;
    }
    return true;
}

bool School::isTeacherHired(Teacher *teacher){
    auto it = std::find(teachers.begin(), teachers.end(), teacher);
    if (it == teachers.end())
    {
        return false;
    }
    return true;
}