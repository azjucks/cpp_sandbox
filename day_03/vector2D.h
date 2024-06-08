#pragma once

#include <string>
#include <iostream>

namespace day_03
{
    class vector2D
    {
        private:
            float x;
            float y;

        public:
            static vector2D zero;
            static vector2D up;
            static vector2D left;
            static vector2D right;
            static vector2D down;

            vector2D();
            vector2D(float x, float y)
            {
                this->x = x;
                this->y = y;
            }
            vector2D(const vector2D& copy);
            vector2D(float y);
            ~vector2D(){};

            float X() const;
            float Y() const;

            float& X();
            float& Y();

            float& operator[](int a);
            float& operator[](char c);
            float& operator[](std::string str);

            bool operator==(const vector2D vec) const;
            bool operator!=(const vector2D vec) const;
            bool operator>=(const vector2D vec) const;
            bool operator<=(const vector2D vec) const;
            bool operator>(const vector2D vec) const;
            bool operator<(const vector2D vec) const;

            vector2D operator+(vector2D vec) const;
            vector2D& operator+=(vector2D vec);
            vector2D& operator-=(vector2D vec);
            vector2D operator-(vector2D vec) const;
            vector2D operator-() const;

            vector2D operator*(float f) const;
            vector2D operator/(float f) const;

            vector2D& operator*=(float f);
            vector2D& operator/=(float f);

            vector2D& operator++(int);
            vector2D& operator--(int);

            float dot_product(const vector2D vec) const;
            float length() const;
            float cross_product(const vector2D vec) const;

            vector2D& add(const vector2D vec);
            vector2D add(const vector2D vec) const;

            vector2D& substract(const vector2D vec);
            vector2D substract(const vector2D vec) const;
            
            vector2D scale(float f) const;
            vector2D& scale(float f);

            vector2D normalize() const;
            vector2D normalize();
    };
}


day_03::vector2D operator*(float f, const day_03::vector2D vec);
day_03::vector2D operator/(float f, const day_03::vector2D vec);

float operator,(const day_03::vector2D& vec1, day_03::vector2D& vec2);

std::string operator+(std::string str, const day_03::vector2D vec);
std::string operator+=(std::string& str, const day_03::vector2D vec);

//std::ostream& operator<<(std::ostream& stream, day_03::vector2D& copy);
std::ostream& operator<<(std::ostream& stream, const day_03::vector2D& copy);
std::istream& operator>>(std::istream& stream, day_03::vector2D& copy);