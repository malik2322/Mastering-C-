
// Largest / Smallest Array Values
// Write a program that lets the user enter ten values into an array. The program should then
// display the largest and smallest values stored in the array.

#include <iostream>
using namespace std;

int main()
{
    cout << "Largest / Smallest Array Values" << endl;
    int user_arrays[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cin >> user_arrays[i];
    }
    cout << "Display the array values" << endl;
    int max_value = user_arrays[0];
    int min_value;
    for (int i = 0; i < 10; i++)
    {
        if (user_arrays[i] > max_value)
        {
            max_value = user_arrays[i];
        }
        else
        {
            min_value = user_arrays[i];
        }
    }

    cout << "Largest Number " << endl;
    cout << "max_value: " << max_value << endl;
    cout << "Smallest  Number " << endl;
    cout << "min_value: " << min_value << endl;
}
