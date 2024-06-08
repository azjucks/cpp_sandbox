#pragma once

#include <iostream>

namespace day_04
{
    namespace ex_02
    {
        class entity;

        class object
        {
            protected:
                object() {};
                std::string name;
            public:
                std::string to_string() const;
        };
    }
}