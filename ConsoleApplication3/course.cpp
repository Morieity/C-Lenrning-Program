#include"course.h"

//构造函数
Course::Course(string nm,int ut)
:name(nm), units(ut)
{
	roster = new CourseRoster;
}

//析构函数
Course::~Course()
{
}

//getName函数的定义
string Course::getName()const
{
	return name;
}

//addStudent函数的定义
void Course::addStudent(string name)
{
	roster->addStudent(name);
}

//getRoster函数的定义
CourseRoster* Course::getRoster()const
{
	return roster;
}

//print函数的定义
void Course::print()const
{
	cout << "Course Name:" << name << endl;
	cout << "Number of Units:" << units << endl;
	roster->print();
}
