#include<iostream>
//Satvik Mittal (2017548)
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
int key;
cout<<"Enter the element to be found\n";
cin>>key;
for(int i=0;i<5;i++)
{
    if(arr[i]==key)
    cout<<"element found";

    else
    cout<<"Element not found";
}
return 0;
}
