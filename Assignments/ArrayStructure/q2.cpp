#include <iostream>
using namespace std;

void largerThanN(int arr[], int size, int n);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }

    int n;
    cout << "Enter n: ";
    cin >> n;

    largerThanN(numbers, SIZE, n);

    return 0;
}

void largerThanN(int arr[], int size, int n)
{
    cout << "Numbers greater than " << n << ":\n";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
