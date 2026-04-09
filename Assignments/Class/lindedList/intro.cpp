
#include <iostream>
using namespace std;

struct ListNode
{
    double node_value;
    ListNode *next_node;
};

ListNode *insertToFront(ListNode *head, double node_value)
{
    ListNode *new_node = new ListNode;
    new_node->node_value = node_value;
    new_node->next_node = head;
    head = new_node;

    return head;
}
void traverse(ListNode *head)
{
    cout << "-------- traverse ----------" << endl;
    ListNode *p = head;

    while (p != nullptr)
    {
        cout << p->node_value << endl;
        p = p->next_node;
    }
    cout << endl;
}
bool findTargetAndPrevNiegh(ListNode *head, double target)
{
    ListNode *p = head;
    ListNode *n = nullptr;
    while (p != nullptr && p->node_value != target)
    {
        n = p;
        p = p->next_node;
    }
    return p == nullptr ? false : true;
};

bool deleteNode(ListNode *head, double target)
{
    ListNode *p = head;
    ListNode *n = nullptr;
    while (p != nullptr && p->node_value != target)
    {
        n = p;
        p = p->next_node;
    }
    if (p != nullptr) // p points to target node
    {
        if (n != nullptr)
        {
            n->next_node = p->next_node; // segmentation fault if n is true
        }
        else
        {
            head = head->next_node;
        }
        delete p;
        return true;
    }
    else
    {
        return false;
    }
}

bool insertNode(ListNode *head, double target, double newVal)
{
    ListNode *p = head;
    ListNode *n = nullptr;
    while (p != nullptr && p->node_value != target)
    {
        n = p;
        p = p->next_node;
    }
    ListNode *newNode = new ListNode;
    newNode->node_value = newVal;
    newNode->next_node = nullptr;

    if (n == nullptr)
    {
        newNode->next_node = head;
        head = newNode;
    }
    else
    {
        /* code */
        n->next_node = newNode;
        newNode->next_node = p;
    }
}
ListNode *appendToEnd(ListNode *head, double value)
{
    ListNode *new_node = new ListNode;
    new_node->node_value = value; // creating a new node

    ListNode *p = head;

    while (p != nullptr)
    {
        cout << p->node_value << endl;
        p = p->next_node;
    }
    cout << endl;
}
int main()
{
    cout << "---------------  Linded List: ---------------   " << endl;

    // // creating an empty linded list
    ListNode *head = nullptr;

    // // creating a new node 01
    // ListNode *node1 = new ListNode;
    // node1->node_value = 5;
    // node1->next_node = nullptr;

    // // add node1 to linked list
    // head = node1;

    // // creating a new node 02
    // ListNode *node2 = new ListNode;
    // node2->node_value = 5;
    // node2->next_node = nullptr;

    head = insertToFront(head, 5);
    head = insertToFront(head, 4);
    head = insertToFront(head, 3);
    head = insertToFront(head, 2);
    head = insertToFront(head, 1);

    traverse(head);

    deleteNode(head, 1);

    traverse(head);

    // head = appendToEnd(head, 6);
    // traverse(head);

    cout << boolalpha << findTargetAndPrevNiegh(head, 5);
    // Traverse the linked list items:

    // cout << "head 01" << head->node_value << endl;

    // cout << "head 02" << head->next_node->node_value << endl;

    // cout << "head 03" << head->next_node->next_node->node_value << endl;

    // cout << "head 04" << head->next_node->next_node->next_node->next_node->node_value << endl;

    // cout << "head 05" << head->next_node->next_node->next_node->next_node->next_node->node_value << endl;
}