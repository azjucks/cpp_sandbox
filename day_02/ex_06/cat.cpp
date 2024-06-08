#include <iostream>

#include "cat.h"

using namespace day_02::ex_06;

void day_02::ex_06::cat::cat_alive()
{
    std::cout << "Cat " << this->name << " is alive!" << std::endl;
}

void day_02::ex_06::cat::cat_died()
{
    std::cout << "Cat " << this->name << "  died! Why did you do that?!" << std::endl;
}

std::string day_02::ex_06::cat::get_name()
{
    return cat::name;
}

std::ostream& day_02::ex_06::operator<<(std::ostream& stream, day_02::ex_06::cat& copy)
{
    return stream << copy.get_name();
}