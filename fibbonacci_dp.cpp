#include<iostream>
using namespace std;
int fib(int n)
{
    vector<int> dp(n+1, 0);
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main()
{
    int num;
    cout<<"Enter the size of fibbonaci series\n";
    cin>>num;
   cout<<"the nth element of this series: "<<fib(num);
   return 0;
}
