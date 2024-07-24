#include <iostream>
using namespace std;
void funcout(int b, string a = "")
{
    cout << a << b << endl;
}
class node
{
public:
    int data;
    struct node *next;
    void linkedlisttransversal(node *ptr)
    {
        int i = 0;
        while (ptr != NULL)
        {
            i++;
            cout << "The elements of  "   << i<<  " linked list are: " << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};
int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;
    // allocate 3 nodes in the heap
    head = (node *)malloc(sizeof(node));
    second = (node *)malloc(sizeof(node));
    third = (node *)malloc(sizeof(node));
    fourth = (node *)malloc(sizeof(node));
    fifth = (node *)malloc(sizeof(node));
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
    head->linkedlisttransversal(head);

    return 0;
}