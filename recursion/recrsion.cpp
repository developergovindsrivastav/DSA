#include<iostream>
using namespace std;
void funcout(int b,string a = ""){
 cout<<a<<b<<endl;
}
void recursion(int n){
 if(n>0){
  cout<<n<<endl;
  recursion(n-1);
 }
}

int main(){
    int x = 5;
    recursion(x);
return 0;
}