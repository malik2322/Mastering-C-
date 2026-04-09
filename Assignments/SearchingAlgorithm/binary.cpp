

#include <iostream>
using namespace std;

// int binary_search(int arr[], int size, int target)
// {
//     cout << "fucntion working..." << endl;
//     int first, last, middle, position;
//     bool flag = false;
//     first = 0;
//     last = size - 1;
//     position = -1;

//     while (!flag && first <= last)
//     {
//         // middle = (last - first) / 2;
//         middle = first + (last - first) / 2;

//         if (arr[middle] == target)
//         {
//             flag = true;
//             position = middle;
//         }
//         else if (arr[middle] < target)
//         {

//             // first = middle + 1; // avoid the first half

//             last = middle - 1; // avoid the secondd half
//         }
//         else
//         {
//             // last = middle - 1; // avoid the second half

//             first = middle + 1; // avoid the first half
//         }
//     }
//     return position;
// }
int binary_search(int arr[], int size, int target)
{

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {

        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            cout << arr[mid] << " ";
            return mid;
        }

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}
int main()
{
    cout << "Hi How are u doing..." << endl;
    int size = 14;
    int target = 261;
    // int target = 9;
    // int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr[] = {4, 21, 29, 46, 86, 105, 144, 156, 176, 204, 209, 222, 236, 261, 266};

    int result = binary_search(arr, size, target);
    cout << "Target Found at: " << result << endl;
}