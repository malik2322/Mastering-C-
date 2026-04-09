#include <iostream>
using namespace std;

int *reverse(int *arr, int size)
{

    int *newArr = new int[size];

    for (int i = 0; i < size; i++)
    {
        *(newArr + i) = *(arr + size - 1 - i);
    }

    return newArr;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << "Original Arr: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int *reversed = reverse(arr, 4);
    cout << "Reversed  Arr: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << reversed[i] << " ";
    }

    delete[] reversed; // free memory
}