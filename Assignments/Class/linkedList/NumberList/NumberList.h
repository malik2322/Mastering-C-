

#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
    struct ListNode
    {
        double value;
        ListNode *next;
    };
    ListNode *head;

public:
    NumberList();
    ~NumberList(); // destrcuturing
    bool isEmpty();
    void displayList();
    void appendNode(double);
};

#endif