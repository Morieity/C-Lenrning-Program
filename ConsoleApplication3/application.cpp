#include"registrar.h"

int main()
{
    //实例化一个Registrar（注册器）对象
    Registrar registrar;
    //实例化三个学生对象
    Student student1("John");
    Student student2("Mary");
    Student student3("Ann");
    //实例化三个Course对象
    Course course1("CIS101", 4);
    Course course2("CIS102", 3);
    Course course3("CIS103", 3);
    //让Registrar对象把学生注册到课程
    registrar.enroll(student1, course1);
    registrar.enroll(student1, course2);
    registrar.enroll(student2, course1);
    registrar.enroll(student2, course3);
    registrar.enroll(student3, course1);
    //打印每个学生的信息
    student1.print();
    student2.print();
    student3.print();
    //打印没门课程的信息
    course1.print();
    course2.print();
    course3.print();
    return 0;
}