#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000000007
#define pii pair<ll,ll>
#define pb push_back
ll gcd(ll a,ll b);
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
ll gcd(ll a,ll b)
{
    if(b==0)
         return a;
    else
       return gcd(b,a%b);
}
