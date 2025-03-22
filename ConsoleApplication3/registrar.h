#pragma once
#ifndef REGISTRAR_H
#define REGISTRAR_H
#include"course.h"
#include"student.h"

//¿‡∂®“Â
class Registrar
{
public:
	Registrar();
	~Registrar();
	void enroll(Student student, Course course);
};

#endif