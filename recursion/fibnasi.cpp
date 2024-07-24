#include <iostream>
using namespace std;

void funcout(int b, string a = "")
{
    cout << a << b << endl;
}

void fibn_recursive(int n, int a = 0, int b = 1)
{
    if (n == 0)
    {
        return ;
    }
    int c = a + b;
    cout << c << endl;
    

    return fibn_recursive(n - 1, b, c);
}

int main()
{
    // int result = fibn_recursive(5);
       fibn_recursive(5);        

    return 0;
}