#include "part.h"

using namespace day_04;

part::~part()
{
    std::cout << "Destroying part " << this->get_name() << std::endl;
}

std::string part::get_name() const
{
    return this->name;
}

int part::get_weight() const
{
    return this->weight;
}