#include <iostream>
#include <string>

#include "ex_04.h"

using namespace day_01::ex_04;

using namespace std;

int main()
{
    cout << (int)test_enum::my_name << endl;
    cout << (char)first_enum::my_name << endl;
    cout << (unsigned int)second_enum::my_name << endl;

    return 0;
}