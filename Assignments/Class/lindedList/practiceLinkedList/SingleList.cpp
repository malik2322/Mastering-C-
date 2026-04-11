
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
        cout << "Node Address: " << temp << endl;

        cout << "Data: " << temp->data_value << endl;
        if (temp->next_node != nullptr)
        {
            cout << "Next Address: " << temp->next_node << endl;
        }
        temp = temp->next_node;
        cout << "-------------------" << endl;
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
        head = new_node;
        return head;
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

Node *deleteAtBeg(Node *head)
{
    //  1 -> 2 -> 3 -> 4
    //  head = 2
    Node *temp = head;

    head = head->next_node;

    delete temp;
    return head;
    //   after deleting
    //  2 -> 3 -> 4
}

Node *insertPos(Node *head, int pos, int val)
{
    // int count = 0;
    // Node *current = head;
    if (pos < 1)
    {
        return head;
    }
    if (pos == 1)
    {
        Node *new_node = new Node(val);
        new_node->next_node = head;
        return new_node;
    }

    Node *curr = head;

    for (int i = 1; i == pos && curr != nullptr; i++)
    {
        curr = curr->next_node;
    }
    // If position is greater than the
    // number of nodes
    if (curr == nullptr)
    {
        return head;
    }

    Node *new_node = new Node(val);

    new_node->next_node = curr->next_node;
    curr->next_node = new_node;

    return head;

    // while (count != pos)
    // {
    //     count++;
    //     current = current->next_node;
    // }

    // Node *temp = current;

    // current->data_value = val;

    // temp->next_node = current->next_node;

    // return head;
}
int getSize(Node *head)
{
    int count = 0;
    Node *current = head;

    while (current != nullptr)
    {
        count++;
        current = current->next_node;
    }

    return count;
}
int getMemory(Node *head)
{
    int count = getSize(head);
    return count * sizeof(Node);
}
void printSection(string title)
{
    cout << "\n==============================\n";
    cout << title << endl;
    cout << "==============================\n";
}

void testLinkedList(Node *head)
{
    // Node *head = nullptr;

    printSection("Initial List");
    traverseLinkedList(head);

    head = insertAtFront(head, 15);
    printSection("After insertAtFront (15)");
    traverseLinkedList(head);

    head = insertAtEnd(head, 25);
    printSection("After insertAtEnd (25)");
    traverseLinkedList(head);

    head = deleteAtBeg(head);
    printSection("After deleteAtBeg");
    traverseLinkedList(head);

    head = insertPos(head, 2, 3);
    printSection("After insertPos");
    traverseLinkedList(head);

    printSection("LinkedList Size");
    cout << getSize(head) << " Size" << endl;

    printSection("Memory Usage");
    cout << getMemory(head) << " bytes" << endl;
}
int main()
{
    // creating the first node(head of list)
    Node *head = new Node(10);
    //  linking with the second node

    head->next_node = new Node(20);

    //  linking with the third node

    head->next_node->next_node = new Node(30);
    //  linking with the third node

    head->next_node->next_node->next_node = new Node(40);

    testLinkedList(head);

    return 0;
}