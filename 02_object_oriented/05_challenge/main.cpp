#include "school.hpp"
#include "teacher.hpp"
#include "student.hpp"

int main()
{
    School mySchool;

    Teacher teacher1 = Teacher("Teacher1");
    Teacher teacher2 = Teacher("Teacher2");

    Student student1 = Student("Yamada");
    Student student2 = Student("Mori");
    Student student3 = Student("Iida");

    mySchool.hireTeacher(&teacher1);

    mySchool.enrollStudent(&student1);
    mySchool.enrollStudent(&student2);

    mySchool.assignStudent(&student2, &teacher1); 
    mySchool.assignStudent(&student3, &teacher1);
    mySchool.assignStudent(&student2, &teacher2);

    student2.printTeachers(); // Teacher1
    teacher1.printStudents(); // Mori
}