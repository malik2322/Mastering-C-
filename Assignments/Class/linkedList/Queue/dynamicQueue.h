
#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

class dynamicQueue
{
private:
    /* data */
    struct Node
    {
        /* data */
        int value;
        Node *next;
    };
    Node *front;
    Node *rear;

public:
    dynamicQueue()
    {
        front = rear = nullptr;
    };
    void enque(int num);
    int deque();
    bool isFull()
    {
        return false;
    };
    bool isEmpty()
    {
        return front == nullptr;
    }

    ~dynamicQueue();
};

// dynamicQueue::dynamicQueue(/* args */)
// {
// }

// dynamicQueue::~dynamicQueue()
// {
// }

#endif