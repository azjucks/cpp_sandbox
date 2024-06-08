#include "ex_01.h"

void day_02::ex_01::swap(int& x, int& y)
{
    x ^= y;
    y ^= x;
    x ^= y;
}