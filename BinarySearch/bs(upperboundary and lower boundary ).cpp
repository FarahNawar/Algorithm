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
/*
8
1 3 6 9 11 19 22 30
*/

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
ll n;
vector<ll>num;
ll bsup(ll Search)
{
    ll beg,End,mid;
    ll index=End-1;
    beg=0;
    End=n-1;
    while(beg<=End)
    {
        mid=(beg+End)/2;

        if(num[mid]>=Search)
        {
            index=mid;
            End=mid-1;

        }
        else
        {
            beg=mid+1;
        }
    }
    return index;
}
ll bslow(ll Search)
{
    ll beg,End,mid;
    ll index=End-1;
    beg=0;
    End=n-1;
    while(beg<=End)
    {
        mid=(beg+End)/2;

        if(num[mid]>Search)
        {
            End=mid-1;
        }
        else
        {
            index=mid;
            beg=mid+1;
        }
    }
    return index;
}
int main()
{

    cin>>n;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        num.pb(x);
    }
    sort(num.begin(),num.end());


    cout<<"sorted number"<<endl;
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    cout<<endl;

    while(2)
    {
        ll Search;
        cout<<"Enter num: "<<endl;
        cin>>Search;
        ll up=bsup(Search);
        ll low=bslow(Search);
        cout<<"the upper boundary of "<<Search<<" is "<<num[up]<<endl;
        cout<<"the lower boundary of "<<Search<<" is "<<num[low]<<endl;
//        if(x==-1)
//            cout<<Search<<" is not in the list "<<endl;
//        else
//        {
//            cout<<Search<<" is at position "<<x<<endl;
//        }

    }



}


