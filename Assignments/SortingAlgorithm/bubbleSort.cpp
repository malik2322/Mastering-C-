

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    cout << "Funtion is working..." << endl;

    bool swap;
    int temp_var;

    do
    {
        swap = false;
        for (int i = 0; i < (size - 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp_var = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp_var;
                swap = true;
                cout << "pass: " << i << arr[i];
            }
        }
    } while (swap);
}

int main()
{

    cout << "hi there: " << endl;
    const int size = 8;
    // int arr[size] = {1, 4, 2, 6, 3, 5, 2};
    int arr[size] = {72, 56, 5, 28, 63, 96, 10, 67};
    cout << "before sorting..." << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    bubbleSort(arr, size);

    // cout << "Sorted arr: " << arr << endl;
    cout << "after sorting..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
}