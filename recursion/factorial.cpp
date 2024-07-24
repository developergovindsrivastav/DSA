#include <iostream>
using namespace std;
void funcout(int b, string a = "factorial is")
{
    cout << a << b << endl;
}
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
    //    int factor =  n 
       int newfactor = factorial(n - 1);
       int multiple = n * newfactor;
        //  funcout(multiple);
        // cout << multiple << endl;
         return multiple;
    }
}
int main()
{
    int x;
    cin >> x;
   cout<< factorial(x);
    return 0;
}