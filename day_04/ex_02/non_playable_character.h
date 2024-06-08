#pragma once

#include <iostream>

#include "entity.h"

namespace day_04
{
    namespace ex_02
    {
        class non_playable_character : protected entity
        {
            private:
                int damage;
                int index;
            public:
                static int pnjNb;

                non_playable_character();
                ~non_playable_character();

                void is_alive();
                void is_dead();
                std::string to_string() const;
                void print_life();
                int get_dmg();
                void take_dmg(int amount);

                void operator++();
        };
    }
}