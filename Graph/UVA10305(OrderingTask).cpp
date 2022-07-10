//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
// string to int : int num = stoi(str);
//priority_queue< pii,vector<pii>,greater<pii> >q;
// printf("%.2f",sqrt(2));
//pow(2,4) = 16
const int N=1e3+10;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("input.txt", "r", stdin);  freopen("out.txt", "w", stdout);
#define ll long long
#define pii pair<ll, ll>
#define piii pair<pii, ll>
#define MAX 1e18
#define MIN -1e18
#define pb push_back

vector<ll>graph[N];
ll InD[N];

int main()
{
  ll nodes,edges;
  while(cin>>nodes>>edges)
  {
      if(nodes==0 && edges==0)
        break;

      for(ll i=0;i<edges;i++)
      {
          ll u,v;
          cin>>u>>v;
          graph[u].pb(v);
          InD[v]++;
      }


      while(true)
      {
         vector<ll>zero;
         for(ll i=1;i<=nodes;i++)
         {
             if(InD[i] == 0)
                zero.pb(i);
         }
         if(zero.size() == 0)
            break;

         for(ll i=0;i<zero.size();i++)
         {
            ll n = zero[i];
            cout<<n<<" ";
            for(ll j=0; j<graph[n].size(); j++)
            {
                ll adjn = graph[n][j];
                InD[adjn]--;
            }
            InD[n]=-1;
         }
      }
      memset(InD,0,sizeof(InD));
      memset(graph,0,sizeof(InD));
      cout<<endl;
  }

}
/*
5 4
1 2
2 3
1 3
1 5
5 4
1 2
2 3
1 3
1 5
0 0
*/

