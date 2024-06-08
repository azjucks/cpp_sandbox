#pragma once

#include "part.h"

namespace day_04
{
    class engine : public part
    {
    protected:
        int power;
        int consomation;
    public:
        engine();
        ~engine() {}
        operator std::string() const override;
    };
}