#pragma once

#include "shape.h"

class compound_shape : public shape
{
private:
    int shapeNb;
    shape** shapes = nullptr;
public:
    compound_shape(float scale, int shapeNb);
    ~compound_shape();

    void set_shape(int shapeIndex, shape* s);

    float get_base_area() const override;
    float get_area() const override;
};