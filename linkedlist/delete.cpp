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
Node *deletefirst(Node *head)
{
    if (head == NULL)
    {
        cout << "The linked list is empty" << endl;
        return NULL;
    }
    {
        head = head->next;
    }
};
Node *deletelast(Node *head){
    if (head == NULL)
    {
        cout << "The linked list is empty" << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    Node *lastnode = head;
    Node *secondlast = NULL;
    while (lastnode->next != NULL)
    {
        secondlast = lastnode;
        lastnode = lastnode->next;
    }
    secondlast->next = NULL;
    

};

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
    // cout << "The linked list before deletion is: " << endl;
    // traverse(head);
    // head = deletefirst(head);
    // cout << "The linked list after deletion is: " << endl;
    // traverse(head);
    head = deletelast(head);
    cout << "The linked list after deletion is: " << endl;
    traverse(head);

    return 0;
}