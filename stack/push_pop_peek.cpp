#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    string isfull()
    {

        if (top == size - 1)

        {
            return "Stack is full";
        }
        {
            return "Stack is not full";
        }
    }
    string isempty()
    {
        // arr[0] = 1;
        // top++;
        if (top == -1)
        {
            return "Stack is empty";
        }
        {
            return "Stack is not empty";
        }
    }
};
int push(Stack *S, int x)
{
    if (S->isfull() == "Stack is full")
    {
        cout << "Stack is full";
    }
    else
    {
        S->top++;
        S->arr[S->top] = x;
    }
}
int transverse(Stack *S)
{
    for (int i = 0; i <= S->top; i++)
    {
        cout << S->arr[i] << endl;
    }
}
int peek(Stack *S, int i)
{
    int arrINDEX = S->top - i + 1;
    if (arrINDEX < 0)
    {
        cout << "Not a valid position";
    }
    else
    {
        return S->arr[arrINDEX];
    }
}
int pop(Stack *S)
{
    if (S->isempty() == "Stack is empty")
    {
        cout << "Stack is empty";
    }
    else
    {
        int value = S->arr[S->top];
        S->top = S->top - 1;
        return value;
    }
}
int main()
{
    Stack *S = new Stack();
    S->size = 5;
    S->top = -1;
    S->arr = new int[S->size];
    push(S, 2);
    push(S, 10);
    push(S, 5);
    // transverse(S);
    // pop(S);
    cout << "After pop" << endl;
    transverse(S);
    {
        cout << "enters block" << endl;
        cout << "Peek" << endl;
        cout << peek(S, 1);
    }
    cout << "After block" << endl;
    return 0;
}