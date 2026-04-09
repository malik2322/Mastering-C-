
#include "Drink.h"
using namespace std;
#include <iostream>

int main()
{

    Drink water("Malik");
    water.SetPrice(2);
    water.SetQuantity(10);

    cout << "Total Price of Drinks: :" << water.PrintInfo << endl;
}
