#pragma once

#include "engine.h"

namespace day_04
{
    class wheel : public part
    {
    private:
        ;
    public:
        wheel();
        ~wheel() {}
        operator std::string() const override;
    };
}