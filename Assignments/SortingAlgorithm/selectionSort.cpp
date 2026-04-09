// Status: Its not working properly

#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    cout << "function is working ..." << endl;
    int indexSmallest;
    int temp_var;

    for (int i = 0; i < size - 1; i++)
    {
        indexSmallest = i;
        for (int j = 0; j < size; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp_var = arr[j];
                arr[j + 1] = arr[j];
                arr[j + 1] = temp_var;
            }
        }
    }
}
int main()
{
    cout << "hi there: " << endl;
    const int size = 6;
    int arr[size] = {2, 5, 3, 6, 4};
    cout << "before sorting..." << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    selectionSort(arr, size);

    cout << "after sorting..." << endl;
    for (int i = 0; i < size - 1; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}