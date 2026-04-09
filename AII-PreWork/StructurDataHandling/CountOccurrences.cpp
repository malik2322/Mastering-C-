

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    cout << " Count Occurrences " << endl;
    // Count how many times x appears in an array.
    int range;
    cout << "Enter the range: " << endl;
    cin >> range;
    vector<int> array(range);

    for (int i = 0; i < range; i++)
    {
        cin >> array[i];
    }

    int target_value = 1;

    int ocurence = count(begin(array), end(array), target_value);

    cout << "target value is 1 which occurs: " << ocurence << " times in the array" << endl;
}