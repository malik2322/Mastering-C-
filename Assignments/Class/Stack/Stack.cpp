#include <iostream>
using namespace std;

#include "Stack.h"

Stack::Stack()
{
    top = -1;
}

void Stack::push(int val)
{
    top++;
    arr[top] = val;
}

bool Stack::isFull()
{
    return top == SIZE - 1;
}
bool Stack::isempty()
{
    return top == -1;
}

int Stack::pop()
{
    if (!isempty())
    {
        int result = arr[top];
        top--;
        return arr[result];
    }
}