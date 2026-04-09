
#include <iostream>
using namespace std;

int *funct()
{
    cout << "funct is working..." << endl;
    int num = 100;
    int *ptr = &num;
    return ptr;
}
int main()
{
    cout << "Main function working..." << endl;

    int *iptr;
    const int size = 5;
    cout << "before allocating... " << iptr << endl;
    iptr = new int[size];

    cout << "iptr " << iptr << endl;

    int *resutl_ptr = funct();
    cout << "result_ptr: " << *resutl_ptr << endl;
    cout << resutl_ptr << endl;
}