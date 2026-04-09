
#include <iostream>
#include <string>
#include "Drink.h"

int main()
{
    // Create drinks
    Drink coke("Coke");
    Drink beer("Beer");

    // Set values
    coke.setPrice(2.5);
    coke.setQuantity(10);

    beer.setPrice(3.5);
    beer.setQuantity(5);

    // Output total costs
    cout << "Total cost of Coke: $" << coke.totalCost() << endl;
    cout << "Total cost of Beer: $" << beer.totalCost() << endl;

    return 0;
}