#include <iostream>

#include "playable_character.h"
#include "non_playable_character.h"

using namespace day_04::ex_02;

playable_character::playable_character()
{
    this->_life = 20;
    this->damage = 4;
}

std::string playable_character::to_string() const
{
    return "day_04::ex_02::playable_character";
}

void playable_character::print_life()
{
    std::cout << this->_life << std::endl;
}

void playable_character::operator++()
{
    this->_life += 1;
}

void playable_character::take_dmg(int amount)
{
    this->_life -= amount;
}

int playable_character::get_dmg()
{
    return this->damage;
}

playable_character& playable_character::operator*(non_playable_character& npc)
{
    npc.take_dmg(this->get_dmg());

    return *this;
}