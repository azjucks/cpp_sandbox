#include "wheel.h"

using namespace day_04;

wheel::wheel()
{
    this->name = "NoWheel";
    this->weight = 0;
    this->size = 0;
}

wheel::operator std::string() const
{
    return this->name + ": weight=" + 
    std::to_string(this->weight) + ", size=" +
    std::to_string(this->size);
}