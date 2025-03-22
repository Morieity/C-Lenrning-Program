#include"course.h"

//���캯��
Course::Course(string nm,int ut)
:name(nm), units(ut)
{
	roster = new CourseRoster;
}

//��������
Course::~Course()
{
}

//getName�����Ķ���
string Course::getName()const
{
	return name;
}

//addStudent�����Ķ���
void Course::addStudent(string name)
{
	roster->addStudent(name);
}

//getRoster�����Ķ���
CourseRoster* Course::getRoster()const
{
	return roster;
}

//print�����Ķ���
void Course::print()const
{
	cout << "Course Name:" << name << endl;
	cout << "Number of Units:" << units << endl;
	roster->print();
}
