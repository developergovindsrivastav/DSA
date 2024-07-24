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
Node *deleteatindex(Node *head, int index)
{
    Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    Node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
Node *deletethelast(Node *head)
{
    if (head == NULL)
    {
        return NULL; // Empty list, nothing to delete
    }

    if (head->next == NULL)
    {
        free(head); // Only one node in the list
        return NULL;
    }

    Node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    Node *q = ptr->next;
    free(q);
    ptr->next = NULL; // Update the previous node's next pointer
    return head;
}
Node *deletewithvalue(Node *head, int value)
{
    if (head == NULL)
    {
        return NULL; // Empty list
    }

    // If the value to be deleted is at the head
    if (head->data == value)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *p = head;
    while (p->next != NULL && p->next->data != value)
    {
        p = p->next;
    }

    // If the value was not found
    if (p->next == NULL)
    {
        cout << "Value " << value << " not found in the list." << endl;
        return head;
    }

    // Node to be deleted
    Node *q = p->next;
    p->next = q->next;
    delete q;
    return head;
}

int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *third = (Node *)malloc(sizeof(Node));
    head->data = 220;
    head->next = second;
    second->data = 420;
    second->next = third;
    third->data = 620;
    third->next = NULL  ;
    cout << "The linked list after deletion is: " << endl;
    deletewithvalue(head, 420);
    traverse(head);

    return 0;
}