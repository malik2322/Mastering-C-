#include <iostream>
#include "SingleList.h"
using namespace std;

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

    Node testing(12);
    // Node *head = nullptr;
    testing.testLinkedList(head);

    return 0;
}