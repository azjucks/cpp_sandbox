#pragma once

#include "shape.h"

class rectangle : public shape
{
private:
    float width;
    float height;
public:
    rectangle(float scale,
            float width,
            float height);
    ~rectangle() override;
    
    float get_width() const;
    float get_height() const;

    float get_base_area() const override;
    float get_area() const override;
};