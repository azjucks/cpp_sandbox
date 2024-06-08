#include <iostream>

#include "student.h"

using namespace day_04::ex_01;
using namespace std;

int student::studentNb = 0;

student::student()
{
    student::index = studentNb;
    student_created();
    studentNb += 1;
}

student::~student()
{
    student_destroyed();
}

void student::student_created()
{
    cout << "student " << student::index << " created" << endl;
}

void student::student_destroyed()
{
    cout << "student " << student::index << " destroyed" << endl;
}

int student::get_index() const
{
    return this->index;
}

student& student::operator=(const student& copy)
{
    cout << "student " << this->index << " becomes " << copy.get_index() << endl;

    this->index = copy.index;

    return *this;
}