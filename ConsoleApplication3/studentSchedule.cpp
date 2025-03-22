#include "studentSchedule.h"

//构造函数
StudentSchedule::StudentSchedule()
	:size(0)
{
	courseNames = new string[5];
}

//析构函数
StudentSchedule::~StudentSchedule()
{
	delete[] courseNames;
}

//addCourse函数的定义
void StudentSchedule::addCourse(string name)
{
	courseNames[size] = name;
	size++;
}

//print函数的定义
void StudentSchedule::print()const
{
	cout << "List of Courses" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << courseNames[i] << endl;
	}
	cout << endl;
}