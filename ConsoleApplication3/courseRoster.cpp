#include "courseRoster.h"

//构造函数
CourseRoster::CourseRoster()
:size(0)
{
	stdNames = new string[20];
}

//析构函数
CourseRoster::~CourseRoster()
{
	delete[]stdNames;
}

//addStudent函数的定义
void CourseRoster::addStudent(string studentName)
{
	stdNames[size] = studentName;
	size++;
}

//print函数的定义
void CourseRoster::print()const
{
	cout << "List of Students" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << stdNames[i] << endl;
	}
	cout << endl;
}