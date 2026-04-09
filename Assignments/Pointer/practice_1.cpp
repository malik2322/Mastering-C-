

#include <iostream>
using namespace std;

int main()
{
    cout << "Pointer..." << endl;
    const int size = 5;
    int list[size] = {10, 11, 12, 13, 14};
    cout << " array address:  " << list << endl;
    // cout << "List[0]: " << &list[0] << endl;
    cout << "address of list is also the address of List[0]: " << list << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "List[" << i << "]: " << &list[i] << "  *(list + i) Value: " << *(list + i) << "  list[" << i << "] value: " << list[i] << endl;
    }
}