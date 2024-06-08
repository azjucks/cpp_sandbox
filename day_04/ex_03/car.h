#pragma once
#include <iostream>

namespace day_04
{
    class engine;
    class wheel;
    class car
    {
    private:
        wheel* wheels[4] = {};
        engine* en = nullptr;
    public:
        ~car();

        void print_parts();
        void set_engine(engine* en);
        void set_wheels(wheel* w1, wheel* w2, wheel* w3, wheel* w4);
        float get_total_weight();
    };
}