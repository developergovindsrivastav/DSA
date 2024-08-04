#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int isfull(Node *top)
{
    Node *p = new Node();
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int isempty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
Node *push(Node *top, int x)
{
    if (isfull(top))
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        Node *ptr = new Node();
        ptr->data = x;
        ptr->next = top;
        top = ptr;
        return top;
    }
};
int pop(Node *&top)
{
    if (isempty(top))
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        Node *n = top;
        top = top->next;
        int x = n->data;
        delete n;
        return x;
    }
};
int peek(int pos, Node *top)
{
    Node *ptr = top;
    for (int i = 0; i < (pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}
int display(Node *top)
{
    Node *ptr = top;
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
};

int main()
{
    Node *HEAD = new Node();
    Node *second = new Node();
    HEAD->data = 122;
    HEAD->next = second;
    second->data = 211;
    second->next = NULL;
    HEAD = push(HEAD, 2555);
    display(HEAD);
    // int element = pop(HEAD);
    // cout << "Popped element is: " << element << endl;
    // display(HEAD);
    cout << "Element at position 2 is: " << peek(2, HEAD) << endl;

    return 0;
}