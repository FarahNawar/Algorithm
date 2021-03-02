#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000000007
#define pii pair<ll,ll>
#define pb push_back
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{

    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        string input;
        getline(cin,input);
        istringstream is(input);
        vector<ll>num;
        ll x;
        while(is>>x)
               num.pb(x);

        ll Max=0;
        for(int i=0; i<num.size()-1; i++)
        {
            for(int j=i+1; j<num.size(); j++)
            {
                Max=max(Max,gcd(num[i],num[j]));
            }
        }
        cout<<Max<<endl;

    }
}

