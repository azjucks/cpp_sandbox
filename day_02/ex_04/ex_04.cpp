#include <iostream>

#include "ex_04.h"

using namespace day_02::ex_04;

int day_02::ex_04::sloth::slothNb = 0;

void day_02::ex_04::sloth::sloth_alive()
{
    std::cout << "Sloth " << slothNb << " is alive!" << std::endl;
}

void day_02::ex_04::sloth::sloth_died()
{
    std::cout << "Sloth " << slothNb << "  died! Why did you do that?!" << std::endl;
}

void day_02::ex_04::sloth::start_moving()
{
    if (sloth::is_moving)
    {
        std::cout << "Sloth " << slothNb << "  is already moving" << std::endl;
        return;
    }
    if (sloth::is_sleeping)
    {
        std::cout << "Sloth " << slothNb << "  stops sleeping" << std::endl;
        sloth::is_sleeping = false;
    }
    sloth::is_moving = true;
    std::cout << "Sloth " << slothNb << "  starts moving" << std::endl;
}

void day_02::ex_04::sloth::start_sleeping()
{
    if (sloth::is_sleeping)
    {
        std::cout << "Sloth " << slothNb << "  is already sleeping" << std::endl;
        return;
    }
    sloth::is_sleeping = true;
    sloth::is_moving = false;
    std::cout << "Sloth " << slothNb << "  falls asleep" << std::endl;
}