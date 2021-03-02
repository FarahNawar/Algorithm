#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(int x);
ll nCr(ll n,ll r);
int main()
{
   ll n;
   cin>>n;
   ll a[n];
   map<ll, vector<ll> > Map;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       Map[f(a[i])].push_back(a[i]);
   }
   int sum=0;

    for(map<ll,vector<ll> >::iterator it=Map.begin();it!=Map.end();it++)
    {
        vector<ll>temp=(*it).second;
        ll Size=temp.size();
        if(Size>1)
        {

            sum+=(Size*(Size-1))/2;
        }
       // for(int i=0;i<temp.size();i++)
          //  cout<<temp[i]<<" ";
           // cout<<endl;
    }
    cout<<sum<<endl;

}
ll f(int x)
{
    if(x==0)return 0;
    if(x%2==0)
        return f(x/2);
    else
        return f(x/2)+1;
}
ll nCr(ll n,ll r)
{
    if(r==n) return 1;
    if(r==1)return n;
    return nCr(n-1,r)+nCr(n-1,r-1);
}
