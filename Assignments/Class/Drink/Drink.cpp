
#include "Drink.h"
// constructor
Drink::Drink(string name)
{
    this->name = name;
}
// mutator functions
void Drink::SetName(string name)
{
    this->name = name;
}
void Drink::SetPrice(double price)
{
    this->price = price;
}
void Drink::SetQuantity(int quantity)
{
    this->quantity = quantity;
}
// accessor functions
string Drink::GetName() const
{
    return name;
}
double Drink::GetPrice() const
{
    return price;
}
int Drink::GetQuantity() const
{
    return quantity;
}
// other member functions

double Drink::GetTotalPrice() const
{
    return price * quantity;
}

void Drink::PrintInfo() const
{
    cout << "printing info: " << endl;
}