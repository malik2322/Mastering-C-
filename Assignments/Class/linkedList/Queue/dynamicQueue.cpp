
#include <iostream>
#include "dynamicQueue.h"
#include <cassert>
using namespace std;

void dynamicQueue::enque(int num)
{
    assert(!isFull);
    Node *newNode = new Node;
    newNode->value = num;
    newNode->next = nullptr;

    if (rear == nullptr)
    {
        front = rear = nullptr;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int dynamicQueue::deque()
{
    assert(!isEmpty);
    int result = front->value;
    Node *temp = front;
    front = front->next;

    delete temp;
    return result;
}

dynamicQueue::~dynamicQueue()
{
    while (!isEmpty)
    {
        deque();
    }
}