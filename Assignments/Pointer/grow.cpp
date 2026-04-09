#include <iostream>
using namespace std;

// hint: copy duplicateArray from class and modify it

int *grow(int *arr, int size)
{
    cout << "Testing.." << endl;
    int new_size = size * 2;
    int *pointer = new int[new_size];

    // int **new_point = &pointer;
    // cout << "Enter twice the values to the prev arr" << endl;

    for (int i = 0; i < size; i++)
    {
        *(pointer + (2 * i)) = *(arr + i);
        *(pointer + (2 * i + 1)) = *(arr + i);
    }

    return pointer;
}

int main()
{

    /* Type your code here. */
    int size;
    cout << "Enter the size: " << endl;
    cin >> size;

    int *arr = new int[size];
    cout << " plz enter array values..." << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    };
    // cout << "displaying vlaues..." << endl;
    // for (int i = 0; i < size; i++)
    // {

    //     cout << arr[i] << " ";
    // };
    int *point_result = grow(arr, size);
    for (int i = 0; i < size * 2; i++)
    {
        cout << *(point_result + i) << " ";
    }
    delete[] point_result;
    point_result = nullptr;

    return 0;
}
