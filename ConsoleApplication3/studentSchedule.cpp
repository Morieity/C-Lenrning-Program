#include "studentSchedule.h"

//���캯��
StudentSchedule::StudentSchedule()
	:size(0)
{
	courseNames = new string[5];
}

//��������
StudentSchedule::~StudentSchedule()
{
	delete[] courseNames;
}

//addCourse�����Ķ���
void StudentSchedule::addCourse(string name)
{
	courseNames[size] = name;
	size++;
}

//print�����Ķ���
void StudentSchedule::print()const
{
	cout << "List of Courses" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << courseNames[i] << endl;
	}
	cout << endl;
}