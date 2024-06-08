#include "classroom.h"
#include "student.h"

#include <iostream>

using namespace day_04::ex_01;

classroom::classroom(int studentCount)
{
    this->studentCount = studentCount;
    this->studentList = new student[studentCount];
}

classroom::classroom(const classroom& copy)
{
    this->studentCount = copy.studentCount;
    this->studentList = new student[this->studentCount];
    for (int i = 0; i < this->studentCount; ++i)
    {
        this->studentList[i] = copy.studentList[i];
    }
}

classroom::~classroom()
{
    delete[] this->studentList;
}