
#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::NumberList()
{
    head = nullptr;
}
NumberList::~NumberList()
{
    ListNode *p = head;
    while (head != nullptr)
    {
        p = head;
        head = head->next;
        delete p;
    }
}

bool NumberList::isEmpty()
{
    return head == nullptr;
}

void NumberList::displayList()
{
    ListNode *p = head;
    while (p != nullptr)
    {
        cout << p->value << " " << endl;
        p = p->next;
    }
    cout << endl;
}

void NumberList::appendNode(double num)
{

    ListNode *new_node = new ListNode;
    new_node->value = num; // creating a new node
    new_node->next = nullptr;
    if (head == nullptr)
    {
        /* code */
        head = new_node;
    }
    else
    {
        ListNode *p = head;

        while (p->next != nullptr)
        {

            cout << p->value << endl;
            p = p->next;
        }
        cout << endl;
    }
}
