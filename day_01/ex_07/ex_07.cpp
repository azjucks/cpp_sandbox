#include <istream>
#include <string>
#include <iostream>

#include "ex_07.h"

using namespace std;

void day_01::ex_07::read()
{
    string x;

    cin >> x;
    
    for (int i = 0; i < x.length(); ++i)
    {
        if (x[i] > '0' && x[i] < '9')
        {
            cout << "bad string" << endl;
            return;
        }
    }
    cout << "good job" << endl;
}