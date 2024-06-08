#include "compound_shape.h"

compound_shape::compound_shape(float scale, int shapeNb)
{
    this->scale = scale;
    this->shapeNb = shapeNb;
    this->shapes = new shape*[shapeNb] {};
}

compound_shape::~compound_shape()
{
    for (int i = 0; i < this->shapeNb; ++i)
    {
        delete this->shapes[i];
    }
    std::cout << "Compound shape destroyed" << std::endl;
}

void compound_shape::set_shape(int shapeIndex, shape* s)
{
    this->shapes[shapeIndex] = s;
}

float compound_shape::get_base_area() const
{
    float base_area = 0;
    for (int i = 0; i < this->shapeNb; ++i)
    {
        base_area += this->shapes[i] != nullptr ?
            this->shapes[i]->get_area() : 0;
    }
    return base_area;
}

float compound_shape::get_area() const
{
    return get_base_area() * this->scale;
}