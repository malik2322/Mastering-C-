// Celsius Temperature Table
// The formula for converting a temperature from Fahrenheit to Celsius is:
// C = 5/9 * (F - 32)
// Where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
// named Celsius that accepts a Fahrenheit temperature as an argument. The function should
// return the temperature, converted to Celsius. Demonstrate the function by calling it in a loop
// that displays a table of the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.

#include <iostream>
using namespace std;
double Celsius(double Fahrenheit);

int main()
{
    cout << "---------------------  Celsius Temperature Table    -----------------------" << endl;
    cout << "----------------------------------- " << endl;

    cout << "Fahrenheit" << "   |" << "Celsius" << endl;
    cout << "----------------------------------- " << endl;

    for (int i = 0; i < 20; i++)
    {
        cout << i << "            | " << Celsius(i) << endl;
        // cout << endl;
        cout << "----------------------------------- " << endl;
    }
    cout << "---------------------  End    -----------------------" << endl;
}

double Celsius(double f)
{
    double Fahrenheit = f;
    // cout << "function called... " << endl;
    double celsius_temp = 5.0 / 9.0 * (Fahrenheit - 32);
    // cout << "celsius_temp" << celsius_temp << endl;
    return celsius_temp;
}