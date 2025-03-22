#include"registrar.h"

//构造函数
Registrar::Registrar()
{
}

//析构函数
Registrar::~Registrar()
{
}

//注册函数enroll
void Registrar::enroll(Student student, Course course)
{
	(course.getRoster())->addStudent(student.getName());
	(student.getSchedule())->addCourse(course.getName());
}