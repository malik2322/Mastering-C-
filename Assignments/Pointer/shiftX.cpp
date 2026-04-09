#include <iostream>
using namespace std;

// hint: copy duplicateArray from class and modify it

int *shiftX(int *arr, int size, int x)
{
    cout << "Testing.." << endl;

    int new_size = size + x;
    if ((size >= 0))
    {
        int *pointer = new int[new_size];
        for (int j = 0; j < x; j++)
        {
            // cout << "x-1: " << x - 1 << endl;
            *(pointer + j) = -1;
            // i = x;
        }

        for (int i = 0; i < size; i++)
        {

            *(pointer + i + x) = *(arr + i);

            // *(pointer + (2 * i + 1)) = *(arr + i);
        }

        return pointer;
    }
    else
    {
        return nullptr;
    }

    // int **new_point = &pointer;
    // cout << "Enter twice the values to the prev arr" << endl;
}

int main()
{

    /* Type your code here. */
    int size, time_size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int *arr = new int[size];
    cout << " plz enter array values..." << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    };

    cout << "Enter the times larger than the argument array: " << endl;
    cin >> time_size;
    // cout << "displaying vlaues..." << endl;
    // for (int i = 0; i < size; i++)
    // {

    //     cout << arr[i] << " ";
    // };

    int *point_result = shiftX(arr, size, time_size);
    if (point_result == nullptr)
    {
        cout << "Error: " << endl;
    }

    for (int i = 0; i < size + time_size; i++)
    {
        cout << *(point_result + i) << " ";
    }
    delete[] point_result;
    delete[] arr;
    arr = nullptr;
    point_result = nullptr;

    return 0;
}
