//  Write a function named getNumber that uses a reference parameter variable to accept an
// integer argument. The function should prompt the user to enter a number in the range of 1
// through 100. The input should be validated and stored in the parameter variable.

#include <iostream>
using namespace std;
void getNumber(int &num);
int main()
{
    cout << "getNumber function..." << endl;
    int number;

    getNumber(number);
    cout << "Validated number: " << number << endl;
}

void getNumber(int &num)
{
    cout << "function called..." << endl;

    do
    {
        cout << "Enter the number the range of 1 through 100" << endl;
        cin >> num;
    } while (!(num >= 1 && num <= 100));
}