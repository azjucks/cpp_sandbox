#pragma once

namespace day_04
{
    namespace ex_01
    {
        class student;

        class classroom
        {
            private:
                int studentCount;
            public:
                student* studentList;
                classroom(int studentCount);
                classroom(const classroom& copy);
                ~classroom();
        };
    }
}