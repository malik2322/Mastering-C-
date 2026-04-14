

#ifndef STACK_H
#define STACK_H

const int SIZE = 10;

class Stack
{
private:
    /* data */
    int arr[SIZE];
    int top;

public:
    Stack(/* args */);
    void push(int val);
    int pop();
    bool isempty();
    bool isFull();

    // ~Stack();
};

#endif