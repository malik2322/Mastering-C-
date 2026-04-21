

#ifndef STATICINTQUEUE_H
#define STATICINTQUEUE_H

class staticIntQueue
{
private:
    /* data */
    static const int QUEUE_SIZE = 100;
    int array[QUEUE_SIZE];
    int front, rear;
    int numItems;

public:
    staticIntQueue();

    void enque(int num);
    void deque();
    bool isFull() { numItems == QUEUE_SIZE; }

    ~staticIntQueue();
};

staticIntQueue::staticIntQueue(/* args */)
{
}

staticIntQueue::~staticIntQueue()
{
}

#endif