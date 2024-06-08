#include "circle.h"

circle::circle(float scale, float radius)
{
    this->scale = scale;
    this->radius = radius;
}

circle::~circle()
{
    std::cout << "Circle destroyed" << std::endl;
}

float circle::get_radius() const
{
    return this->radius;
}

float circle::get_base_area() const
{
    return PI * this->radius * this->radius;
}

float circle::get_area() const
{
    return PI * this->radius * this->radius * this->scale;
}