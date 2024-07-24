#include <stdlib.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void traverse(Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        i++;
        cout << "The elements of  " << i << " linked list are: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *insertatfirst(Node *head, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));

    if (head == NULL)
    {
        head = ptr;
        return head;
    };

    // Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head; // Add return statement
}

Node *insertatlast(int data, Node *head)
{
    Node *ptr2 = (Node *)malloc(sizeof(Node));

    if (head == NULL)
    {
        head = ptr2;
        return head;
    }
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr2;
    ptr2->data = data;
    ptr2->next = NULL;
    return head; // Add return statement
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    Node *fifth;
    // allocate 3 nodes in the heap
    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));
    fifth = (Node *)malloc(sizeof(Node));
    head->data = 15;
    head->next = second;
    second->data = 221;
    second->next = third;
    third->data = 188;
    third->next = fourth;
    fourth->data = 522;
    fourth->next = fifth;
    fifth->data = 855;
    fifth->next = NULL;
    head = insertatfirst(head, 10);
    head = insertatlast(100, head);
    traverse(head);
    return 0;
}