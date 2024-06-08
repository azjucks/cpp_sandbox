#include <iostream>
#include "ex_01.h"


using namespace std;
using namespace day_01::ex_01;

int main()
{
    box::nb_little_boxes = 5;
    box::little_box::nb_little_boxes = 7;

    cout << box::nb_little_boxes << endl;
    cout << box::little_box::nb_little_boxes << endl;

    return 0;
}