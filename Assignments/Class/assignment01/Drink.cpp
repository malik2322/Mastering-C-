// Constructor

#include <iostream>
#include <string>

#include "Drink.h"

Drink::Drink(string n)
{
    name = n;
    price = 0;
    quantity = 0;
}

// Setters
void Drink::setPrice(double p)
{
    price = p;
}

void Drink::setQuantity(int q)
{
    quantity = q;
}

// Getters
double Drink::getPrice() const
{
    return price;
}

int Drink::getQuantity() const
{
    return quantity;
}

// Total cost
double Drink::totalCost() const
{
    return price * quantity;
}