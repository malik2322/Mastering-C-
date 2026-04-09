#ifndef DRINK_H
#define DRINK_H

#include <iostream>
using namespace std;
#include <string>
class Drink
{
private:
    string name;
    double price;
    int quantity;

public:
    // Constructor
    Drink(string n);

    // Setters
    void setPrice(double p);
    void setQuantity(int q);

    // Getters
    double getPrice() const;
    int getQuantity() const;

    // Total cost
    double totalCost() const;
};

#endif