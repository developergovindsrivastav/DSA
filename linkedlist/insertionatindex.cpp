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
        cout << "The elements of " << i << " linked list are: " << ptr->data << endl;
        ptr = ptr->next;
    }
}
Node *deleteatindex(Node *head, int index, int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    head->data = 7;
    head->next = second;
    second->data = 11;  
    second->next = third;
    third->data = 15;
    third->next = NULL;
    cout << "The linked list before deletion is: " << endl;
    traverse(head);
    head = deleteatindex(head, 1, 10);
    cout << "The linked list after deletion is: " << endl;
    traverse(head);
    return 0;
}