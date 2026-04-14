#include <iostream>
using namespace std;

#include "Stack.h"

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    int num = stack.pop();
    cout << "pop number: " << num << endl;

    stack.push(4);
    stack.push(5);
    int num_1 = stack.pop();
    cout << "pop number: " << num_1 << endl;

    cout << boolalpha << stack.isFull() << endl;
}