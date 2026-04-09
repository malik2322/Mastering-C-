

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int range;
    cout << "Enter the range: " << endl;
    cin >> range;
    vector<int> array(range);

    for (int i = 0; i < range; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < range / 2; i++)
    {
        int temp = array[i];
        array[i] = array[range - 1 - i];
        array[range - 1 - i] = temp;
    }

        cout << "Displaying array... " << endl;

    for (int i = 0; i < range; i++)
    {
        cout << array[i] << " ";
    }
}
