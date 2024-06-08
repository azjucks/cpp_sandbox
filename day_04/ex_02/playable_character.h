#pragma once

#include <iostream>

#include "entity.h"

namespace day_04
{
    namespace ex_02
    {
        class non_playable_character;
        class playable_character : protected entity
        {
            private:
                int damage;
            public:
                playable_character();
                std::string to_string() const;
                void print_life();
                int get_dmg();
                void take_dmg(int amount);

                void operator++();
                playable_character& operator*(non_playable_character& npc);
        };
    }
}