#include"student.h"

//构造函数
Student::Student(string nm)
:name(nm)
{
	schedule = new StudentSchedule;
}

//析构函数
Student::~Student()
{
}

//getName函数的定义
string Student::getName()const
{
	return name;
}

//
StudentSchedule* Student::getSchedule()const
{
	return schedule;
}

//addCourse函数的定义
void Student::addCourse(string name)
{
	schedule->addCourse(name);
}

//print函数的定义
void Student::print()const
{
	cout << "Student name: " << name << endl;
	schedule->print();
}