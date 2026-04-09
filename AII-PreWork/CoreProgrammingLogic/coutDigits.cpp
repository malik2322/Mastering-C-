

#include <iostream>
using namespace std;

int cout_digits(int n)
{
    cout << "cout_digits working..." << endl;
    int total_digits = 0;
    int temp = abs(n);
    while (temp != 0)
    {
        temp = temp / 10;
        total_digits += 1;
    }

    return total_digits;
}
int main()
{
    int n;
    cout << "enter the integer for counting its digits" << endl;
    cin >> n;
    cout << "----------------------------------------------------" << endl;

    cout << "Count Digits" << endl;

    cout << "number of digits in an integer: " << cout_digits(n) << endl;
}