#include <iostream>
using namespace std;

bool check_prime(int n)
{
    cout << "check_prime testing..." << endl;
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Check Prime: " << endl;
    cout << "Prime number? " << check_prime(n) << endl;
}