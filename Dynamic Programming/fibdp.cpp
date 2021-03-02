#include<iostream>
using namespace std;
#define ll long long
int fib(int n);
int dp[100000];
int main()
{
    int num;
   // cout<<"Enter the number of terms : "<<endl;
    cin>>num;
    fib(num);
    ll sum=0;
    for(int i=1;i<=num;i++)
        sum+=fib(i);
       // cout<<fib(i)<<" ";
    cout<<sum<<endl;
}
int fib(int n)
{
    if(n==1) return 1;
    if(n==2) return 1;
    if(dp[n]!=0)
        return dp[n];
    else{
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
}
