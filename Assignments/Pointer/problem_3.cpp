

#include <iostream>
using namespace std;

int *inputArray(int size)
{
    int *arr = new int[size];
    cout << " plz enter array values..." << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    return arr;
}

int main()
{
    cout << " ----------------Programming problem  ---------------- " << endl;
    int size = 5;
    int *arr = inputArray(size);
    cout << "----------calling inputArray function inputs are below... ----------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}