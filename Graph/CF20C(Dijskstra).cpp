// Bismillahhir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;

#define INF 1e18

#define mp make_pair
#define ln long long int
#define pii pair<ln,ln>
vector<ln>graph[200000];
vector<ln>cost[200000];
ln d[200000];
ln parent[200000];

/*
Input:
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

*/

void bfs(ln s);

int main()
{
    ln nodes,edges;
    cin>>nodes>>edges;

    for(ln i=0;i<edges;i++)
    {
        ln u,v,c;
        cin>>u>>v>>c;

        graph[u].push_back(v);
        graph[v].push_back(u);

        cost[u].push_back(c);
        cost[v].push_back(c);

    }

    for(ln i=1;i<=nodes;i++)
        d[i]=INF;

    ln source = 1;
    d[source] = 0;
    bfs(source);


    ln current_node = nodes;
    ln p = parent[current_node];
    vector<ln>path;

    if(d[current_node] == INF)
    {
        cout<<-1<<endl;
    }
    else
    {
        path.push_back(current_node);
        while(true)
        {
            path.push_back(p);
            if(p == 1)
                break;
            current_node = p;
            p = parent[p];
        }

        for(ln i = path.size()-1; i>=0;i--)
        {
            cout<<path[i]<<" ";
        }
    }
}

void bfs(ln source)
{
    priority_queue<pii,vector<pii>,greater<pii> > q;
    //priority_queue<pii>q;
    q.push( mp(d[source],source) );

    while( !q.empty() )
    {
        pii pnode = q.top();
        ln u = pnode.second;
        ln c = pnode.first;
        q.pop();

        for( ln i=0;i<graph[u].size();i++ )
        {
            ln v = graph[u][i];
            if( d[v] > d[u] + cost[u][i] )
            {
                d[v] = d[u] + cost[u][i];
                parent[v] = u;
                q.push( mp(d[v],v) );
            }

        }
    }
}
