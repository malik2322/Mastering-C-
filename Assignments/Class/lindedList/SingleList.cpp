
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
    cout << endl;
}
// Make the first node of Linked List linked to the new node

// Remove the head from the original first node of Linked List

// Make the new node as the Head of the Linked List.
Node *insertAtFront(Node *head, double x)
{
    Node *new_node = new Node(x);
    new_node->next_node = head;
    return new_node;
}

// Following is the approach to add a new node at the end of the linked list:

// Create a new node and set its next pointer as NULL since it will be the last node.
// Store the head reference in a temporary variable
// If the Linked List is empty, make the new node as the head and return
// Else traverse till the last node
// Change the next pointer of the last node to point to the new node

Node *insertAtEnd(Node *head, double x)
{
    Node *new_node = new Node(x);

    // If the Linked List is empty, make
    // the new node as the head and return
    if (head == nullptr)
    {
        return new_node;
    }

    // Store the head reference in a temporary variable
    Node *last = head;

    // Traverse till the last node
    while (last->next_node != nullptr)
    {
        last = last->next_node;
    }

    // Change the next pointer of the last node
    // to point to the new node
    last->next_node = new_node;

    // Return the head of the list
    return head;
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

    head = insertAtFront(head, 15);
    cout << "after insertAtFront" << endl;
    traverseLinkedList(head);

    cout << "after insertAtEnd" << endl;

    head = insertAtEnd(head, 25);
    traverseLinkedList(head);

    return 0;
}