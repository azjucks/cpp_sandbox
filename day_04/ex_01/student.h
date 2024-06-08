#pragma once

namespace day_04
{
    namespace ex_01
    {
        class student
        {
            private:
                int index;
            public:
                static int studentNb;
                student();
                ~student();

                void student_created();
                void student_destroyed();
                int get_index() const;

                student& operator=(const student& copy);

        };
    }
}