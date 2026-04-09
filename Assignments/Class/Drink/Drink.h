#ifndef DRINK_H
#define DRINK_H
#include <string>
#include <iostream>

using namespace std;

class Drink
{
private:
    string name;
    double price;
    int quantity;

public:
    // constructor
    Drink(string);

    // mutator functions
    void SetName(string);
    void SetPrice(double);
    void SetQuantity(int);

    // accessor functions
    string GetName() const;
    double GetPrice() const;
    int GetQuantity() const;

    // other member functions
    double GetTotalPrice() const;
    void PrintInfo() const;
};
#endif