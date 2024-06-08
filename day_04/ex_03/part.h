#pragma once

#include <string>

#include "car.h"

namespace day_04
{
    class part : public car
    {
    protected:
        std::string name;
        float weight;
        float size;
    public:
        part() {}
        ~part();

        std::string get_name() const;
        int get_weight() const;
        virtual operator std::string() const = 0;
    };
}