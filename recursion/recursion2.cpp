#include <iostream>
using namespace std;
void funcout(int b, string a = "")
{
    cout << a << b << endl;
}
int recursion(int n)
{
    if (n > 5)
    {
        return 1;
    }
    else
    {
        cout << n << endl;
        return recursion(n + 1);
    }
}
int main()
{
    int x = 1;
    recursion(x);
    return 0;
}