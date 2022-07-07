//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
#define piii pair<ll,pii>
const int N = 1e3+10;

vector<pii>graph[N];
ll visited[N];

void bfs(piii s);

int main()
{
   // freopen("input.txt","r",stdin);

    ll nodes,edges;
    cin>>nodes>>edges;

    for(ll i=0; i<edges; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;

        graph[u].push_back({v,w});
        graph[v].push_back({u,w});

    }

    piii source = { 0,{1,1} };
    bfs(source);
}

void bfs(piii s)
{
    priority_queue<piii, vector<piii>, greater<piii> >q;
    q.push(s);

    while(!q.empty())
    {
        piii top = q.top();
        q.pop();
        ll u = top.second.second;
        ll adju = top.second.first;

        if(visited[u] == 1 && visited[adju] == 1)
            continue;
        else
        {
            if(top.second.first != 1 || top.second.second!=1)// To avoid source node (0,(1,1))
                cout<<top.second.first<<" --> "<<top.second.second<<endl;
        }


        visited[u]=1;

        for(ll i=0; i<graph[u].size(); i++)
        {
            pii vw = graph[u][i];
            ll v = vw.first;
            ll w = vw.second;

            if(visited[v]==0)
            {
                q.push({w,{u,v}});
            }
        }
    }

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
