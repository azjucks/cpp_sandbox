#include "rectangle.h"

rectangle::rectangle(float scale, float width, float height)
{
    this->scale = scale;
    this->width = width;
    this->height = height;
}

rectangle::~rectangle()
{
    std::cout << "Rectangle destroyed" << std::endl;
}

float rectangle::get_width() const
{
    return this->width;
}

float rectangle::get_height() const
{
    return this->height;
}

float rectangle::get_base_area() const
{
    return this->height * this->width;
}

float rectangle::get_area() const
{
    return this->height * this->width * this->scale;
}