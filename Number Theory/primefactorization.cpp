#include<bits/stdc++.h>
using namespace std;
#define sc              scanf
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       (((a)/gcd(a,b))*b)
#define mx              1234567899
#define TC              ll t;scln(t);while(t--)
#define PI              2*acos(0.0)
#define ll long long
#define MOD 10000000007
#define pii pair<ll,ll>
#define pb push_back
#define mp make_pair
ll Bigmod(ll base, ll power, ll mod)
{
    if(power==0)
        return 1%mod;
    if(power==1)
        return base%mod;
    ll x = Bigmod(base,power/2,mod);
    x = (x*x)%mod;
    if(power%2)
    {
        x = (x*(base%mod))%mod;
    }
    return x;
}
bool isPrime( ll val )
{
    if( val == 2 )
        return true ;
    if( val % 2 == 0 || val == 1 )
        return false ;
    ll sqrt_N = (ll) ( ( double ) sqrt( val ) ) ;
    for( ll i = 3 ; i <= sqrt_N ; i += 2 )
    {
        if( val % i == 0 )
            return false ;
    }
    return true ;
}
///--------------Graph Moves--------------------------------------
///const int dx[] = {+1,-1,+0,+0};
///const int dy[] = {+0,+0,+1,-1};
///const int dx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int dy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
bool isvalid(ll x,ll y,ll r,ll c)
{
    if(x>=0 && x<r &&y>=0&&y<c)
        return true;
    else
        return false;

}
bool cmp(int a,int b)
{
    return a>b;
}
vector<pii>pwithfreq;
void primefactor(int n)
{
    ll Count=0;
    while (n % 2 == 0)
    {
        Count++;
        // cout << 2 << " ";
        n = n/2;
    }
    if(Count>0)
    {
        pwithfreq.pb(mp(2,Count));
        Count=0;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            Count++;
            n = n/i;
        }
        if(Count>0)
        {
            pwithfreq.pb(mp(i,Count));
            Count=0;
        }

    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
    {
        pwithfreq.pb(mp(n,1));
    }

}
int main()
{
    primefactor(100);
    for(int i=0;i<pwithfreq.size();i++)
    {
        cout<<pwithfreq[i].first<<" --> "<<pwithfreq[i].second<<endl;
    }
}

