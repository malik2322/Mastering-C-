#include <iostream>
using namespace std;
int Factorial(int n)
{
    cout << "factorial function testing" << endl;

    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        int fact = 1;
        for (int i = n; i > 1; --i)
        {
            fact *= i;
        }
        return fact;
    }
};
int main()
{

    int n;
    cout << "Enter the number for getting the factorial" << endl;
    cin >> n;
    cout << "factorial practice..." << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "factorial of a " << n << " using a loop: " << Factorial(n) << endl;
}