

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Sum of Array Elements: " << endl;
    int range;
    cout << "Enter the range: " << endl;
    cin >> range;

    vector<int> array_elements(range);
    for (int i = 0; i < range; i++)
    {
        /* code */
        cin >> array_elements[i];
    }
    int total = array_elements[0];
    for (int i = 1; i < range; i++)
    {
        total += array_elements[i];
    }
    cout << "Sum of Array Elements: " << total << endl;
}