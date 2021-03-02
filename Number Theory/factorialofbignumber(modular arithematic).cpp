#include<iostream>
using namespace std;
long long int fact(long long int n);
int main()
{
   long long int n=100;
    long long int mod=97;
    long long int mul=1;
    for(int i=n;i>0;i--)
    {
        cout<<i%mod<<endl;
        mul*=(i%mod);
    }
    cout<<n<<"! % "<<mod<<" = "<<mul%mod<<endl;
}
long long int fact(long long int n)
{
    if(n==0)return 1;
    return (fact(n-1)*n);
}
