

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    cout << "insertionSort function is working..." << endl;

    for (int i = 0; i < size; i++)
    {
        int next_value = arr[i];
        int current_key = i - 1;
        while (current_key >= 0 && arr[current_key] > next_value)
        {
            arr[current_key + 1] = arr[current_key];
            current_key--;
        }

        arr[current_key + 1] = next_value;
    }
}
int main()
{
    cout << "Insertion Sorting..." << endl;

    cout << "hi there: " << endl;
    const int size = 7;
    int arr[size] = {1, 4, 2, 6, 3, 5, 2};
    cout << "before sorting..." << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    insertionSort(arr, size);

    // cout << "Sorted arr: " << arr << endl;
    cout << "after sorting..." << endl;

    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
}