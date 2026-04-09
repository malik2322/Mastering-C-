
// Write the prototype for a function called compute. The function should have three
// parameters: an int, a reference to a double, and a long (not necessarily in that order). The
// function returns a double value. The int parameter should have a default argument of 5, and
// the long parameter should have a default argument of 65536. The double parameter should
// not have a default argument.

#include <iostream>
using namespace std;
double compute(double &num1, int num2 = 5, long num3 = 65536);

int main()
{
    cout << "Computing function..." << endl;
    int num2;
    double num1, num3;
    cout << "Enter the three Numbers to add them: " << endl;
    cin >> num1 >> num2 >> num3;

    double result = compute(num1, num2, num3);
    cout << "Result: " << result << endl;
}

double compute(double &num1, int num2, long num3)
{

    return num1 + num2 + num3;
}