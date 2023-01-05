#include<iostream>
using namespace std;
int main(){
int maxx, arr[maxx], key, low, mid, high;
cout<<"Enter the max space\n";
cin>>maxx;
cout<<"input the sorted array\n";
for(int i=0;i<maxx;i++)
{
cout<<"Enter element \t";
cin>>arr[i];
}
cout<<"Enter the element to be found\n";
cin>>key;
low= arr[0];
high= maxx-1;
mid = (low+high)/2;

while(low<=high)
{
if(key>arr[mid])
{
low= mid+1;
mid= (low+high)/2;
}
if(key<arr[mid]){
high= mid-1;
mid= (low+high)/2;
}
if(key==arr[mid]){
cout<<"Element found at "<<mid;
break;}
}

return 0;
}
