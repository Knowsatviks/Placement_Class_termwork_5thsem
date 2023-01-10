#include<iostream>
using namespace std;
//Satvik Mittal (2017548)
void fib_iterative(int n){
     int a=0,b=1,c;
     cout<<a<<" "<<b;
     for(int i=0;i<n;i++)
     {
         c=a+b;
         cout<<" "<<c;
         a=b;
         b=c;
     }
}

int main(){
    int num;
   cout<<"Enter the size of series\n";
   cin>>num;
   fib_iterative(num);
   return 0;
}
