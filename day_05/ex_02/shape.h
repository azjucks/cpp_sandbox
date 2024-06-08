#pragma once

#include <iostream>

#define PI 3.14

class shape
{
protected:
    float scale;
public:
    virtual ~shape() {};
    virtual float get_base_area() const = 0;
    virtual float get_area() const = 0;
};