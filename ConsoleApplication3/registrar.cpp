#include"registrar.h"

//���캯��
Registrar::Registrar()
{
}

//��������
Registrar::~Registrar()
{
}

//ע�ắ��enroll
void Registrar::enroll(Student student, Course course)
{
	(course.getRoster())->addStudent(student.getName());
	(student.getSchedule())->addCourse(course.getName());
}