

#include <iostream>
using namespace std;

void leftCircularShift(int *arr, int size)
{
    cout << " left circular shift..." << endl;

}

int main()
{
    cout << " ----------------Programming problem  ---------------- " << endl;
    int size;
    cout << "Enter the size..." << endl;
    cin >> size;
    int *itp_arr;
    itp_arr = new int[size];

    cout << "----------calling pointer_arr function ----------------" << endl;
    pointer_arr(itp_arr, size);
}