#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 10000000007
#define pii pair<ll,ll>
#define pb push_back
#define mp make_pair

ll dx[8]= {0,0,1,-1,1,1,-1,-1};
ll dy[8]= {-1,1,0,0,1,-1,1,-1};
bool isvalid(ll x,ll y,ll r,ll c)
{
    if(x>=0 && x<r &&y>=0&&y<c)
        return true;
    else
        return false;

}

int main()
{
//    string sen="This is a sentence";
//    string word;
//    stringstream ss(sen);
//
//    while(ss>>word)
//    {
//
//        cout<<word<<endl;
//    }

    ll t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;

        //getline()
        getline(cin,s);
        stringstream ss(s);

        string temp;
        while(ss>>temp)
        {
            cout<<temp<<endl;

        }
    }

}

