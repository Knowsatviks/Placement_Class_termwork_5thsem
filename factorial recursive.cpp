#include<iostream>
using namespace std;
int fib(int n)
{
    return fib(n-1)+fib(n-2);
}
int main(){
    int num;
cout<<"Enter the number of which you want factorial of";
cin>>num;
cout<<"\n"<<fib(num);
return 0;
}
