#include"student.h"

//���캯��
Student::Student(string nm)
:name(nm)
{
	schedule = new StudentSchedule;
}

//��������
Student::~Student()
{
}

//getName�����Ķ���
string Student::getName()const
{
	return name;
}

//
StudentSchedule* Student::getSchedule()const
{
	return schedule;
}

//addCourse�����Ķ���
void Student::addCourse(string name)
{
	schedule->addCourse(name);
}

//print�����Ķ���
void Student::print()const
{
	cout << "Student name: " << name << endl;
	schedule->print();
}