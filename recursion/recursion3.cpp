#include <iostream>
using namespace std;
void funcout(int b, string a = "sumof")
{
    cout << a << b << endl;
}
int recursion(int i, int n, int sum)
{

    if (i == n)
    {
        sum += n;
        cout << sum << endl;
        cout << i << endl;

        return 1;
    }
    sum += i;
    return recursion(i + 1, n, sum);
}
int main()
{
    int x = 1, y = 5, z = 0;
    recursion(x, y, z);
    return 0;
}