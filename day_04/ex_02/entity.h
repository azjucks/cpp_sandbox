#pragma once

#include <iostream>

#include "object.h"
namespace day_04
{
    namespace ex_02
    {
        class entity : public object
        {
            protected:
                int _life;
            public:
                int life();
                entity();
                std::string to_string() const;
        };
    }
}