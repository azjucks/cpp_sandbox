#include "engine.h"

using namespace day_04;

engine::engine()
{
    this->name = "NoEngine";
    this->weight = 0;
    this->consomation = 0;
    this->power = 0;
}

engine::operator std::string() const
{
    return this->name + ": weight=" + 
    std::to_string(this->weight) + ", consomation=" +
    std::to_string(this->consomation) + ", power=" + 
    std::to_string(this->power);
}