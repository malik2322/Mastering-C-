
#include <iostream>
using namespace std;

// structure of Single list node
class Node
{
public:
    double data_value;
    Node *next_node;

public:
    // constructor to initilize a new node with data
    Node(int data)
    {
        this->data_value = data;
        this->next_node = nullptr;
    };
};
// We will initialize a temporary pointer to the head node of the singly linked list.

// After that, we will check if that pointer is null or not null, if it is null, then return.

// While the pointer is not null, we will access and print the data of the current node, then we move the pointer to next node.

void traverseLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data_value;
        if (temp->next_node != nullptr)
        {
            cout << " -> ";
        }
        temp = temp->next_node;
    }
}

int main()
{
    // creating the first node(head of list)
    Node *head = new Node(10);
    //  linking with the second node

    head->next_node = new Node(20);

    //  linking with the third node

    head->next_node->next_node = new Node(30);

    // Node *temp = head;

    // while (temp != nullptr)
    // {
    //     cout << temp->data_value << " ";
    //     temp = temp->next_node;
    // }
    traverseLinkedList(head);

    return 0;
}