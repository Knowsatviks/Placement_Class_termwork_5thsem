 #include<iostream>
//Satvik Mittal (2017548)
 using namespace std;
 int fib(int n) {
        int result,i=0;
        while(i<n)
        {
            result=(fib(n-1)+fib(n-2));
        }
        return result;
    }
int main(){
int num;
cout<<"Enter a number\n";
cin>>num;
cout<< fib(num);
return 0;
}
