//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<ll,ll>
#define INF 1e18
#define mp make_pair

vector<ll>graph[100000];
vector<ll>cost[100000];
ll d[100000];
ll parent[100000];

void dijkstra(ll source);
void Clear();
void trav(ll node);

/*
2
4 4
1 2 2
1 3 5
2 3 1
3 4 3
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1
*/
int main()
{
    ll t;
    cin>>t;

    for(ll i=1;i<=t;i++)
    {
        ll node,edge;
        cin>>node>>edge;

        for(ll i=0;i<edge;i++)
        {
            ll u,v,w;
            cin>>u>>v>>w;

            graph[u].push_back(v);
            graph[v].push_back(u);

            cost[u].push_back(w);
            cost[v].push_back(w);
        }

        for(ll i=1;i<=node;i++)
        {
            d[i] = INF;
        }

        ll source = 1;
        ll destination = node;
        dijkstra(source);
        cout<<"Shortest path from node "<<source<<" to "<<destination<<" is : "<<endl;

        trav(destination);
        cout<<endl;
        Clear();
    }
}

void Clear()
{
    memset(graph,0,sizeof(graph));
    memset(cost,0,sizeof(cost));
    memset(d,0,sizeof(d));
    memset(parent,0,sizeof(parent));
}

void trav(ll node)
{
    if(node == 0) return;
    trav(parent[node]);
    cout<<node<<" ";
}

void dijkstra( ll source )
{
    priority_queue< pii,vector<pii>,greater<pii> >q;
    d[source] = 0;
    q.push( mp(d[source],source) );

    while(!q.empty())
    {
        pii top = q.top();
        ll u = top.second;
        q.pop();

        for(ll i=0; i<graph[u].size(); i++)
        {
            ll v = graph[u][i];

            if( d[u] + cost[u][i] < d[v] )
            {
                d[v] = d[u] + cost[u][i];
                parent[v] = u;
                q.push(mp(d[v],v));
            }
        }
    }
}
