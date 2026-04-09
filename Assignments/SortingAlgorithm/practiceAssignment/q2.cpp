#include <iostream>
using namespace std;

void PrintNums(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        cout << nums[i] << " ";
    cout << endl;
}

void ReadNums(int nums[], int size)
{
    cout << "Enter the" << size << "number" << endl;
    for (int i = 0; i < size; i++)
        cin >> nums[i];
}

void insertionSort(int array[], int size)
{
    int comparisons = 0;
    int swaps = 0;

    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0)
        {
            comparisons++; // count comparison

            if (array[j] > key)
            {
                array[j + 1] = array[j]; // shift
                swaps++;
                j--;
            }
            else
                break;
        }

        array[j + 1] = key;

        // trace after each outer loop
        PrintNums(array, size);
    }

    cout << "comparisons: " << comparisons << endl;
    cout << "swaps: " << swaps << endl;
}

int main()
{
    int nums[10];
    int size;
    cout << "Enter the size" << endl;
    cin >> size; // professor usually gives size first
    ReadNums(nums, size);

    PrintNums(nums, size);
    insertionSort(nums, size);
}
