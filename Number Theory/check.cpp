#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000000007
#define pii pair<ll,ll>
#define pb push_back
int mark[1000000];
vector<ll>prime;
void seive(int n)
{
    mark[1]=1;
    for(int i=4; i<=n; i+=2)
        mark[i]=1;
    prime.pb(2);
    for(int i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {

            prime.pb(i);
            if(i<=(sqrt(n)+2))
            {
                for(int j=i*i; j<=n; j+=2*i)
                    mark[j]=1;
            }
        }
    }

}
set<ll>pfactor;
void factFactorize(ll n)
{
    for (ll i = 0; i < prime.size() && prime[i] <= n; i++ )
    {
        ll x = n;
        ll freq = 0;

        while ( x / prime[i] )
        {
            freq += x / prime[i];
            x = x / prime[i];
        }
        if(freq>0)
            pfactor.insert(prime[i]);
       // printf ( "%d^%d\n", prime[i], freq );
    }
}
void recur(ll n)
{
    if(n==1)
        return;
    else
    {
        factFactorize(n);
        recur(n-1);
    }
}

int main()
{

    seive(10000);
    ll a,b;
    cin>>a>>b;
    vector<ll>pfactora,pfactorb;
    ll Max=0;
    ll Min=99999999;
    factFactorize(a);
    for(set<ll>::iterator it=pfactor.begin(); it!=pfactor.end(); it++)
    {
        pfactora.pb(*it);
        Min=min(Min,*it);
        cout<<*it<<" ";
    }
    cout<<endl;
    pfactor.clear();
    factFactorize(b);
    for(set<ll>::iterator it=pfactor.begin(); it!=pfactor.end(); it++)
    {
        pfactorb.pb(*it);
        Max=max(Max,*it);
        cout<<*it<<" ";
    }
    cout<<endl;
    ll Count=0;
    //cout<<Min<<" "<<Max<<endl;
//    for(int i=Min; i<=Max; i++)
//    {
//        pfactor.clear();
//        recur(i);
//        ll flga=-1;
//        ll flgb=-1;
//        for(set<ll>::iterator it=pfactor.begin(); it!=pfactor.end(); it++)
//        {
//            ll x=(*it);
//
//            for(int i=0; i<pfactora.size(); i++)
//            {
//                if(x==pfactora[i])
//                {
//                    flga=1;
//                    break;
//                }
//            }
//        }
//        for(set<ll>::iterator it=pfactor.begin(); it!=pfactor.end(); it++)
//        {
//            ll x=(*it);
//            for(int i=0; i<pfactorb.size(); i++)
//            {
//                if(x==pfactorb[i])
//                {
//                    flgb=1;
//                    break;
//                }
//            }
//        }
//        if(flga==1 &&flgb==-1)
//            Count++;
//
//    }
//    cout<<Count<<endl;

}


