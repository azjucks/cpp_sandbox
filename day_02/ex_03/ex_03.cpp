#include <iostream>

#include "ex_03.h"

int day_02::ex_03::sloth::slothNb = 0;

void day_02::ex_03::sloth::sloth_alive()
{
    std::cout << "Sloth " << slothNb << " is alive!" << std::endl;
}

void day_02::ex_03::sloth::sloth_died()
{
    std::cout << "Sloth " << slothNb << "  died! Why did you do that?!" << std::endl;
}