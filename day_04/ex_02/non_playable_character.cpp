#include <iostream>

#include "non_playable_character.h"

using namespace day_04::ex_02;

int non_playable_character::pnjNb = 0;

non_playable_character::non_playable_character()
{
    pnjNb++;
    this->index = pnjNb;
    this->_life = 5;
    this->damage = 0;
    is_alive();
}

non_playable_character::~non_playable_character()
{
    is_dead();
}

void non_playable_character::is_alive()
{
    std::cout << "Npc is born!" << std::endl;
}

void non_playable_character::is_dead()
{
    std::cout << "Npc is dead!" << std::endl;
}

std::string non_playable_character::to_string() const
{
    return "day_04::ex_02::non_playable_character";
}

void non_playable_character::print_life()
{
    std::cout << this->_life << std::endl;
}

int non_playable_character::get_dmg()
{
    return this->damage;
}

void non_playable_character::take_dmg(int amount)
{
    this->_life -= amount;
}

void non_playable_character::operator++()
{
    this->_life += 1;
}