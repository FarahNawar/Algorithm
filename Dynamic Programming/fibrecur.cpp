#include<iostream>
using namespace std;
long long int fib(long long int n);
int main()
{
    long long int t;
    cin>>t;
    long long int m,n,odd=0,even=0;
    for(long long int j=1;j<=t;j++)
    {
        odd=0;
        even=0;
        cin>>m>>n;
         for(long long int i=m; i<=n; i++)
         {
             if(fib(i)%2==0||fib(i)==0)
             even++;
             else
                odd++;

         }
         cout<<"Case "<<j<<":"<<endl;
         cout<<"Odd = "<<odd<<endl;
         cout<<"Even = "<<even<<endl;


    }



}
long long int fib(long long int n)
{
    if(n==1)return 0;
    if(n==2)return 1;
    return fib(n-1)+fib(n-2);
}
