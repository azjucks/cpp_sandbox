#include <iostream>
#include "ex_02.h"

using namespace day_01::ex_02;

using namespace std;

int main()
{
    box::other_box box;
    box::little_box::candies = 12;
    box::nb_little_boxes = 23;

    box.candy = box::other_box::candies::ORANGE;
    cout << "nb candies: " << box::little_box::candies << endl;
    cout << "nb_little_boxes: " << box.nb_little_boxes << endl;

    box.candy = box::other_box::candies::STRAWBERRY;

    return 0;
}