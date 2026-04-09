

#include <iostream>
using namespace std;

void leftCircularShift(int arr[], int size)
{

    // remember the first element
    int first = arr[0];

    // do shift to the left
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];

    // make the previous first element be the new last one
    arr[size - 1] = first;
}

int *reverse(int *arr[], int size)
{
    int *newArr = new int[size];

    for (int i = 0; i < size; i++)
    {

        newArr[i] = *arr[size - i - 1];
    }
    return newArr;
    cout << endl;
}

int main()
{
    cout << " ----------------Programming problem  ---------------- " << endl;
    int size;
    cout << "Enter the size..." << endl;
    cin >> size;
    int *itp_arr;
    itp_arr = new int[size];

    cout << "----------calling pointer_arr function ----------------" << endl;
    reverse(itp_arr, size);
}