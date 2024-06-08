#include "car.h"
#include "engine.h"
#include "wheel.h"

using namespace day_04;

car::~car()
{
    delete this->en;
    for (int i = 0; i < 4; ++i)
    {
        delete this->wheels[i];
    }
}

void car::print_parts()
{
    std::cout << 
    "Engine: " << (this->en != nullptr ? this->en->get_name() : "NoEngine");
    for (int i = 0; i < 4; ++i)
    {
        std::cout << ", Wheel" + std::to_string(i+1) << ": "
        << (this->wheels[i] != nullptr ? this->wheels[i]->get_name() : "NoWheel");
    }
    std::cout << std::endl;
}

void car::set_engine(engine* en)
{   
    if (en == NULL)
        return;

    delete this->en;

    this->en = en;
}

void car::set_wheels(wheel* w1, wheel* w2, wheel* w3, wheel* w4)
{
    for (int i = 0; i < 4; ++i)
    {
        delete this->wheels[i];
    }

    this->wheels[0] = w1;
    this->wheels[1] = w2;
    this->wheels[2] = w3;
    this->wheels[3] = w4;
}

float car::get_total_weight()
{
    float weight = 0;
    weight += this->en != nullptr ? this->en->get_weight() : 0;

    for (int i = 0; i < 4; ++i)
        weight += this->wheels[i] != nullptr ? this->wheels[i]->get_weight() : 0;
    
    return weight;
}