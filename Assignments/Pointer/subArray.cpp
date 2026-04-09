#include <iostream>
using namespace std;

//******************************************************************************
// duplicateArray: creates a new array that contains the elements of the
//      array argument in the same order
// array: an array of ints
// size: the number of ints in the array
// returns a pointer to the new array.
//      If an invalid size is passed the function returns null.
// NOTE: it is the caller's responsibility to delete the returned array
//      when finished with it.
//******************************************************************************

int *duplicateArray(int *array, int size)
{

    // Validate the size
    if (size < 0)
        return NULL;

    // Allocate the new array.
    int *newArray = new int[size];

    // Copy the array's contents to the new array.
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }

    // Return a pointer to the new array
    return newArray;
}

int *subArray(int *array, int start, int length)
{
    int *new_arr = array + start;
    int *result = duplicateArray(new_arr, length);
    return result;
}

int main()
{

    /* Type your code here. */
    int size, start_index, length;
    cout << "Enter size: " << endl;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter start_index: " << endl;
    cin >> start_index;
    cout << "Enter length: " << endl;
    cin >> length;

    int *result_arr = subArray(arr, start_index, length);

    for (int i = 0; i < length; i++)
    {
        cout << *(result_arr + i) << " ";
    }
    delete[] arr;
    arr = nullptr;

    return 0;
}