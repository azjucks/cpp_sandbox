#include <iostream>
#include "ex_03.h"

using namespace day_01::ex_03;

using namespace std;

int main()
{
    int a = add(1, 2);
    float b = add(1.5f, 2.5f);
    double c = add(1.2, 2.6);
    unsigned int d = add(15464646, 25646464);
    double e = add(1, 2);

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;

    return 0;
}