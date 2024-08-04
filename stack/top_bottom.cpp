#include <iostream>
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
        else
        {
            return "Stack is not full";
        }
    }
    string isempty()
    {
        if (top == -1)
        {
            return "Stack is empty";
        }
        else
        {
            return "Stack is not empty";
        }
    }
    int getTop()
    {
        return arr[top];
    }
    int bottom()
    {
        return arr[0];
    }
};
int main()
{
    Stack s;
    s.size = 6;
    s.top = -1;
    s.arr = new int[s.size];
    s.arr[0] = 1;
    s.top++;
    cout << s.bottom() << endl;
    cout << s.getTop() << endl;
    cout << s.isempty() << endl;
    cout << s.isfull() << endl;

    return 0;
}