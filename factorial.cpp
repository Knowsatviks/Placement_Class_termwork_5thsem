#include<iostream>
using namespace std;
int main(){
int num, fac=1;
cout<<"Enter a number\n";
cin>>num;

while(num!=0)
{
    fac=fac*num;
    num--;
}
cout<<"factorial is"<< fac;
return 0;
}
