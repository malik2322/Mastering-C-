#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int reverse_num(int n)
{
    cout << "reverse_num working..." << endl;
    int reverse_num = 0;
    while (n != 0)
    {
        int digit = n % 10; // Extract the last digit (remainder)
        cout << "digit: " << digit << endl;
        reverse_num = reverse_num * 10 + digit; // Add the digit to the reversed number
        cout << "reverse_num: " << reverse_num << endl;
        n /= 10; // Remove the last digit from the original number
    }

    return reverse_num;
}

int main()
{
    int n;
    cout << "enter the n: " << endl;
    cin >> n;

    cout << "Reverse a Number" << endl;
    // Input: 1234 → Output: 4321
    cout << "reverse_num: " << reverse_num(n) << endl;
}