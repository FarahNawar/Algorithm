#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 100000007
ll Bigmod(ll a,ll b);
int main()
{
   ll n;
//   cin>>n;
//   ll comb=Bigmod(3,3*n);
//   ll unvalid=2+3+2;
//   cout<<comb-Bigmod(unvalid,n);

}
ll Bigmod(ll a,ll b)
{
    if(b/2==0)return a%MOD;
    if(b%2==0)
    {
        ll x=Bigmod(a,b/2);
        return (x*x)%MOD;
    }
    else
    {
        ll x=Bigmod(a,b-1);
        return (a*x)%MOD;
    }
}
