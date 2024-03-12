#pragma once

#include <vector>

class Teacher;
class Student;

class School
{
public:
    School();
    void enrollStudent(Student *student);
    void hireTeacher(Teacher *teacher);
    void assignStudent(Student *student, Teacher *teacher);
    bool isStudentEnrolled(Student *student);
    bool isTeacherHired(Teacher *teacher);

private:
    std::vector<Student *> students;
    std::vector<Teacher *> teachers;
};