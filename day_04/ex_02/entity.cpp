#include <iostream>

#include "entity.h"

using namespace std;

using namespace day_04::ex_02;

entity::entity()
{
    this->name = "entity";
    this->_life = 0;
}

string entity::to_string() const
{
    return "day_04::ex_02::entity";
}

int entity::life()
{
    return this->_life;
}