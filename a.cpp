#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int x)
    {
        data = x;
    }
};

Node *odd_even(Node *MainHead)
{
    Node *oddHead = NULL, *oddTail = NULL;
    Node *evenHead = NULL, *evenTail = NULL;
    Node *temp = MainHead;
    while (temp != NULL)
    {
        Node *nextNode = temp->next;
        temp->next = NULL;
        if (temp->data % 2 == 0)
        {
            if (evenHead == NULL)
                evenHead = evenTail = temp;
            else
            {
                evenTail->next = temp;
                evenTail = temp;
            }
        }
        else
        {
            if (oddHead == NULL)
                oddHead = oddTail = temp;
            else
            {
                oddTail->next = temp;
                oddTail = temp;
            }
        }
        temp = nextNode;
    }

    if (oddTail != NULL)
        oddTail->next = evenHead;

    return oddHead;
}

void sort_linked_list(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
        for (Node *j = i->next; j != NULL; j = j->next)
            if (i->data > j->data)
                swap(i->data, j->data);
}


class DoublyNode{
public:
    int data;
    DoublyNode* next = nullptr;
    DoublyNode* prev = nullptr;

    DoublyNode() {}
    DoublyNode(int value) { data = value; }
};

DoublyNode* convertSinglyToDoubly(Node* singlyHead)
{
    if (singlyHead == nullptr)
        return nullptr;

    DoublyNode* doublyHead = nullptr;
    DoublyNode* doublyTail = nullptr;

    while (singlyHead != nullptr) {
        DoublyNode* newDoublyNode = new DoublyNode(singlyHead->data);

        if (doublyHead == nullptr) {
            doublyHead = newDoublyNode;
            doublyTail = newDoublyNode;
        } else {
            doublyTail->next = newDoublyNode;
            newDoublyNode->prev = doublyTail;
            doublyTail = newDoublyNode;
        }

        singlyHead = singlyHead->next;
    }

    return doublyHead;
}

DoublyNode* insertAtHead(DoublyNode* currentHead, int value)
{
    DoublyNode* newHead = new DoublyNode(value);
    newHead->next = currentHead;

    if (currentHead)
        currentHead->prev = newHead;

    return newHead;
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    for (int i = 1; i <= 20; i++)
    {
        Node *newNode = new Node(i);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return 0;
}