#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *transverse(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<endl;
        temp = temp->next;
    }
    cout << endl;
}
Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << "No element to reverse";
        return head;
    }
    Node *prev = head;
    Node *curr = head->next;
    while (curr != NULL)
    {
        Node *nextnode = curr->next;
        curr->next = prev;
        // Move pointers one position ahead. // update
        prev = curr;
        curr = nextnode;
    }
    head->next = NULL;
    head = prev;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = NULL;
    
    head = reverse(head);
    transverse(head);

    return 0;
}