#include <iostream>
#include <string>
using namespace std;
class Stack
{
public:
    int size;
    int top;
    int *arr;

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
        arr[0] = 1;
        top++;
        if (top == -1)
        {
            return "Stack is empty";
        }
        {
            return "Stack is not empty";
        }
    }
};

int main()
{
    Stack s;
    s.size = 6;
    s.top = -1;
    s.arr = new int[s.size];
    cout << s.isempty() << endl;
    cout << s.isfull() << endl;
    return 0;
}