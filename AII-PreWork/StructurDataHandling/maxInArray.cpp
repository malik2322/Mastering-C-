

#include <iostream>
using namespace std;

int main()
{
    // Input: [3, 5, 2, 9, 1] → Output: 9

    int arr[5];

    cout << "enter 5 values in array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max value in array: " << max << endl;
}