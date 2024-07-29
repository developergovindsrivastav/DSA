#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node* solution(Node* head, int n) {
    if (head == NULL)
        return NULL;
    
    int size = 0;
    Node* curr = head;
    while (curr != NULL) {
        size++;
        curr = curr->next;
    }
    
    if (n == size) { // Use == for comparison
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    if (n > size || n < 1) { // Handle invalid n values
        return head;
    }
    
    int index = size - n;
    Node* temp = head;
    int i = 1;
    while (i < index) {
        temp = temp->next;
        i++;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete; // Free memory to avoid memory leak
    return head;
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    
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
    
    head = solution(head, 2);

    // Print the list to verify the result
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    // Free remaining nodes
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
