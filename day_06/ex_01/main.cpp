#include <iostream>

#include "ex_01.h"

int main()
{
    int a = 1;
    int b = 5;
    swap(a, b);

    std::cout << a << " " << b << std::endl;

    a = add(a, b);

    std::cout << a << std::endl;

    return 0;
}