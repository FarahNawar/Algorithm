//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>

const int N = 1e3+10;

vector<pii>graph[N];
ll visited[N];

ll prim(pii s);

int main()
{
    //freopen("input.txt","r",stdin);

    ll nodes,edges;
    cin>>nodes>>edges;

    for(ll i=0; i<edges; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;

        graph[u].push_back({w,v});
        graph[v].push_back({w,u});

    }

    pii source = {0,1};
    ll mcost = prim(source);
    cout<<"Minimum cost is : "<<mcost<<endl;
}

ll prim(pii s)
{
    priority_queue<pii, vector<pii>, greater<pii> >q; // can be done by pii. Need to try later
    q.push(s);
    ll mincost = 0;

    while(!q.empty())
    {
        pii top = q.top();
        q.pop();
        ll w = top.first;
        ll u = top.second;

        if(visited[u] == 1)
            continue;
        else
        {
            cout<<u<<endl;
        }
        mincost+=w;
        visited[u]=1;

        for(ll i=0; i<graph[u].size(); i++)
        {
            pii wv = graph[u][i];
            ll v = wv.second;

            if(visited[v]==0)
            {
                q.push(wv);
            }
        }
    }
    return mincost;
}

/*
Input:
8 11
1 2 4
1 4 10
1 5 2
2 3 18
2 4 8
3 4 11
4 8 9
4 7 11
4 5 5
6 7 1
6 8 2
*/

