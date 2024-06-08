#include <iostream>

#include "ex_05.h"

using namespace day_02::ex_05;

int day_02::ex_05::sloth::slothNb = 0;

void day_02::ex_05::sloth::sloth_alive()
{
    std::cout << "Sloth " << this->name << " [" << slothNb << "]" << " is alive!" << std::endl;
}

void day_02::ex_05::sloth::sloth_died()
{
    std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  died! Why did you do that?!" << std::endl;
}

void day_02::ex_05::sloth::start_moving()
{
    if (sloth::is_moving)
    {
        std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  is already moving" << std::endl;
        return;
    }
    if (sloth::is_sleeping)
    {
        std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  stops sleeping" << std::endl;
        sloth::is_sleeping = false;
    }
    sloth::is_moving = true;
    std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  starts moving" << std::endl;
}

void day_02::ex_05::sloth::start_sleeping()
{
    if (sloth::is_sleeping)
    {
        std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  is already sleeping" << std::endl;
        return;
    }
    sloth::is_sleeping = true;
    sloth::is_moving = false;
    std::cout << "Sloth " << this->name << " [" << slothNb << "]" << "  falls asleep" << std::endl;
}

int day_02::ex_05::sloth::get_nb_sloth()
{
    return sloth::slothNb;
}

std::string day_02::ex_05::sloth::get_name()
{
    return sloth::name;
}

std::ostream& day_02::ex_05::operator<<(std::ostream& stream, day_02::ex_05::sloth& copy)
{
    return stream << copy.get_name();
}