#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
    int userYear;
    int userPrice;
    int userCurrentYear;
    Car myCar;

    cout << "enter userYear: " << endl;
    cin >> userYear;
    cout << "enter userPrice: " << endl;

    cin >> userPrice;
    cout << "enter userCurrentYear: " << endl;

    cin >> userCurrentYear;

    myCar.SetModelYear(userYear);
    myCar.SetPurchasePrice(userPrice);
    myCar.CalcCurrentValue(userCurrentYear);

    myCar.PrintInfo();

    return 0;
}