#include <iostream>

#include "sloth.h"

using namespace day_02::ex_06;

void day_02::ex_06::sloth::sloth_alive()
{
    std::cout << "Sloth " << this->name << " is alive!" << std::endl;
}

void day_02::ex_06::sloth::sloth_died()
{
    std::cout << "Sloth " << this->name << "  died! Why did you do that?!" << std::endl;
}

std::string day_02::ex_06::sloth::get_name()
{
    return sloth::name;
}

std::ostream& day_02::ex_06::operator<<(std::ostream& stream, day_02::ex_06::sloth& copy)
{
    return stream << copy.get_name();
}