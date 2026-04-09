
#include <iostream>
#include <cmath>
using namespace std;

int sum_first_nums(int n)
{
    cout << "sum_first_nums working..." << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += n;
    }
    return sum;
};

int main()
{

    cout << "Hello World! " << endl;
    cout << "Enter the value for n" << endl;

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
    // Sum of First N Numbers
    cout << "Enter the range for counting numbers" << endl;
    int range;
    cin >> range;
    cout << "----------------------------------------------------" << endl;

    cout << "sum from 1 to n: " << sum_first_nums(range) << endl;
}
