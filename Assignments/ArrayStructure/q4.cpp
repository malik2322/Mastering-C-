#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Car
{
    string carMake;
    string carModel;
    int yearModel;
    double cost;
};

int main()
{
    // (1) Define a single Car variable
    Car myCar = {"Ford", "Mustang", 1968, 20000.0};

    cout << "Single car info:" << endl;
    cout << " Make: " << myCar.carMake << endl;
    cout << " Model: " << myCar.carModel << endl;
    cout << " Year: " << myCar.yearModel << endl;
    cout << " Cost: $" << myCar.cost << endl;
    cout << "----------------------------" << endl;

    // (2) Define an array of 25 Cars
    Car cars25[25]; // uninitialized

    // (3) Define an array of 35 Cars and initialize first 3 elements
    Car cars35[35] =
        {
            {"Ford", "Taurus", 1997, 21000.0},
            {"Honda", "Accord", 1992, 11000.0},
            {"Lamborghini", "Countach", 1997, 200000.0}};

    // (4) Loop through the array and display contents
    cout << "\nCars in the cars35 array:\n";

    for (int i = 0; i < 35; i++)
    {
        cout << "Car " << i + 1 << ":" << endl;
        cout << " Make: " << cars35[i].carMake << endl;
        cout << " Model: " << cars35[i].carModel << endl;
        cout << " Year: " << cars35[i].yearModel << endl;
        cout << " Cost: $" << cars35[i].cost << endl;
        cout << "----------------------------" << endl;
    }

    return 0;
}
