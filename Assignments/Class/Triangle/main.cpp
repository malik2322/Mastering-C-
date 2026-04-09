#include "Triangle.h"
#include <iostream>
using namespace std;

int main()
{
    Triangle triangle1;
    Triangle triangle2;

    // TODO: Read and set base and height for triangle1 (use SetBase() and
    // SetHeight())
    cout << "Enter the base of triangle: " << endl;
    double base, height;
    cout << "Enter the base of triangle no: 01  : " << endl;

    cin >> base;
    cout << "Enter the height of triangle no: 01  : " << endl;
    cin >> height;

    triangle1.SetBase(base);
    triangle1.SetHeight(height);
    cout << "Enter the base of triangle no: 02  : " << endl;

    cin >> base;
    cout << "Enter the height of triangle no: 02  : " << endl;
    cin >> height;

    triangle2.SetBase(base);
    triangle2.SetHeight(height);

    // TODO: Read and set base and height for triangle2 (use SetBase() and
    // SetHeight())

    cout << "Triangle with smaller area:" << endl;
    // cout << "Print triangle 01 info: " << triangle1.PrintInfo() << endl;
    if (triangle1.GetArea() < triangle2.GetArea())
    {
        /* code */
        cout << "Triangel 01: " << endl;
        triangle1.PrintInfo();
    }
    else
    {
        cout << "Triangel 02: " << endl;

        triangle2.PrintInfo();
    };

    // TODO: Determine smaller triangle (use GetArea())
    //       and output smaller triangle's info (use PrintInfo())

    return 0;
}