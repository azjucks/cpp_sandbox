#include <cmath>

#include "vector2D.h"

using namespace day_03;

vector2D vector2D::zero(0, 0);
vector2D vector2D::up(0, 1);
vector2D vector2D::left(-1, 0);
vector2D vector2D::right(1, 0);
vector2D vector2D::down(0, -1);

vector2D::vector2D()
{
    this->x = 0;
    this->y = 0;
}

vector2D::vector2D(const vector2D& copy)
{
    this->x = copy.x;
    this->y = copy.y;
}

vector2D::vector2D(float a)
{
    this->x = a;
    this->y = a;
}

float vector2D::X() const
{
    return this->x;
}

float vector2D::Y() const
{
    return this->y;
}

float& vector2D::X()
{
    return this->x;
}

float& vector2D::Y()
{
    return this->y;
}

float vector2D::dot_product(vector2D vec) const
{
    return this->X() * vec.X() + this->Y() * vec.Y();
}

float vector2D::length() const
{
    return sqrtf(this->X() * this->X() + this->Y() * this->Y());
}

float vector2D::cross_product(vector2D vec) const
{
    return this->X() * vec.Y() - this->Y() * vec.X();
}

day_03::vector2D& vector2D::add(const day_03::vector2D vec)
{
    this->X() += vec.X();
    this->Y() += vec.Y();
    return *this;
}

day_03::vector2D vector2D::add(const day_03::vector2D vec) const
{
    return vector2D(this->X() + vec.X(), this->Y() + vec.Y());
}

day_03::vector2D& vector2D::scale(float f)
{
    this->X() *= f;
    this->Y() *= f;

    return *this;
}

day_03::vector2D vector2D::scale(float f) const
{
    return vector2D(this->X() * f, this->Y() * f);
}

day_03::vector2D vector2D::normalize()
{
    float len = this->length();
    this->X() /= len;
    this->Y() /= len;

    return *this;
}

day_03::vector2D vector2D::normalize() const
{
    float len = this->length();
    return vector2D(this->X()/len, this->Y()/len);
}

day_03::vector2D& vector2D::substract(const vector2D vec)
{
    this->X() -= vec.X();
    this->Y() -= vec.Y();

    return *this;
}

day_03::vector2D vector2D::substract(const vector2D vec) const
{
    return vector2D(this->X() - vec.X(), this->Y() - vec.Y());
}

day_03::vector2D vector2D::operator+(vector2D vec) const
{
    return vector2D(this->X() + vec.X(), this->Y() + vec.Y());
}

day_03::vector2D& vector2D::operator+=(vector2D vec)
{
    return this->add(vec);
}

day_03::vector2D& vector2D::operator-=(vector2D vec)
{
    return this->substract(vec);
}

day_03::vector2D vector2D::operator-(vector2D vec) const
{
    return vector2D(this->X() - vec.X(), this->Y() - vec.Y());
}

day_03::vector2D vector2D::operator-() const
{
    return vector2D(this->X() * -1, this->Y() * -1);
}


day_03::vector2D vector2D::operator*(float f) const
{
    return vector2D(this->X() * f, this->Y() * f);
}

day_03::vector2D vector2D::operator/(float f) const
{
    return vector2D(this->X() / f, this->Y() / f);
}

day_03::vector2D& vector2D::operator*=(float f)
{
    this->X() *= f;
    this->Y() *= f;

    return *this;
}

day_03::vector2D& vector2D::operator/=(float f)
{
    this->X() /= f;
    this->Y() /= f;

    return *this;
}

day_03::vector2D& vector2D::operator++(int)
{
    float length = this->length();
    this->X() *= (length + 1) / length;
    this->Y() *= (length + 1) / length;

    return *this;
}

day_03::vector2D& vector2D::operator--(int)
{
    float length = this->length();
    this->X() *= (length - 1) / length;
    this->Y() *= (length - 1) / length;

    return *this;
}

float operator,(const vector2D& vec1, vector2D& vec2)
{
    return vec1.dot_product(vec2);
}

day_03::vector2D operator*(float f, const day_03::vector2D vec)
{
    return vector2D(vec.X() * f, vec.Y() * f);
}

day_03::vector2D operator/(float f, const day_03::vector2D vec)
{
    return vector2D(f / vec.X(), f / vec.Y());
}

bool vector2D::operator==(const vector2D vec) const
{
    return this->length() == vec.length();
}

bool vector2D::operator!=(const vector2D vec) const
{
    return this->length() != vec.length();
}

bool vector2D::operator>=(const vector2D vec) const
{
    return this->length() >= vec.length();
}

bool vector2D::operator<=(const vector2D vec) const
{
    return this->length() <= vec.length();
}

bool vector2D::operator>(const vector2D vec) const
{
    return this->length() > vec.length();
}

bool vector2D::operator<(const vector2D vec) const
{
    return this->length() < vec.length();
}

float& vector2D::operator[](int a)
{
    return a == 0 ? this->x : this->y;
}

float& vector2D::operator[](char c)
{
    return c == 'x' ? this->x : this->y;
}

float& vector2D::operator[](std::string str)
{
    return str == "x" ? this->x : this->y;
}

std::string operator+(std::string str, const day_03::vector2D vec)
{
    const std::string str1 = ", ";
    return str + std::to_string(vec.X()) + str1 + std::to_string(vec.Y());
}

std::string operator+=(std::string& str, const day_03::vector2D vec)
{
    const std::string str1 = ", ";
    return str += std::to_string(vec.X()) + str1 + std::to_string(vec.Y());
}

/*std::ostream& operator<<(std::ostream& stream, day_03::vector2D& copy)
{
    return stream << copy.X() << ',' << copy.Y();
}*/

std::ostream& operator<<(std::ostream& stream, const day_03::vector2D& copy)
{
    return stream << copy.X() << ',' << copy.Y();
}

std::istream& operator>>(std::istream& stream, day_03::vector2D& copy)
{
    std::string str;

    stream >> copy.X() >> str >> copy.Y();

    if (str != ",")
    {
        copy = vector2D::zero;
    }
    return stream;
}