#include <iostream>
using namespace std;
// part a
int *inputArray(int n)
{
    int *arr = new int[n];
    cout << "Enter arr values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    return arr;
}

void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // part b
    int *arr = inputArray(5);
    cout << "Displaying arr values: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    delete[] arr;

    // part c
    int x = 10;
    int y = 20;

    swap1(&x, &y);

    cout << x << " " << y << endl;

    return 0;
}