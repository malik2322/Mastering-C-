
#ifndef SINGLELIST_H
#define SINGLELIST_H

#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    double data_value;
    Node *next_node;

    Node *head;

    // constructor to initilize a new node with data

    Node(int data)
    {
        data_value = data;
        next_node = nullptr;
    };
    void traverseLinkedList(Node *head);
    Node *insertAtFront(Node *head, double x);
    Node *insertAtEnd(Node *head, double x);
    Node *deleteAtBeg(Node *head);
    Node *insertPos(Node *head, int pos, int val);
    int getSize(Node *head);
    int getMemory(Node *head);
    void printSection(string title);
    void testLinkedList(Node *head);
};

#endif