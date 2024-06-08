#pragma once

#include "shape.h"

class circle : public shape
{
private:
    float radius;
public:
    circle(float scale, float radius);
    ~circle() override;
    float get_radius() const;

    float get_base_area() const override;
    float get_area() const override;
};