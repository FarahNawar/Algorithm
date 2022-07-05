//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("input.txt", "r", stdin);  freopen("out.txt", "w", stdout);
#define ll long long
#define pii pair<ll, ll>
#define piii pair<ll, pii>
#define MAX 1e18
#define MIN -1e18

vector<ll>graph[10000];
ll level[10000];
ll visited[10000];

ll bfs(ll source, ll destination);
void Clear()
{
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    memset(graph,0,sizeof(graph));
}
void Solve()
{
    for(ll i =1;;i++)
   {
       for(ll i=1;i<=19;i++)
        {
            ll x;
            cin>>x;
            if(cin.eof())
                break;
            while(x--)
            {
                ll node;
                cin>>node;
                graph[i].push_back(node);
                graph[node].push_back(i);
            }
        }

        if(cin.eof())
                break;

        ll t;
        cin>>t;
        cout<<"Test Set #"<<i<<endl;
        while(t--)
        {
            ll source,dest;
            cin>>source>>dest;
            memset(visited,0,sizeof(visited));

            if(source<10 && dest<10)
            {
                cout<<" "<<source<<" to  "<<dest<<": "<<bfs(source,dest)<<endl;
            }
            else if( source<10 && dest>=10)
            {
                cout<<" "<<source<<" to "<<dest<<": "<<bfs(source,dest)<<endl;
            }
            else if(source>=10 && dest<10)
            {
                cout<<source<<" to  "<<dest<<": "<<bfs(source,dest)<<endl;
            }
            else
            {
                cout<<source<<" to "<<dest<<": "<<bfs(source,dest)<<endl;
            }



            memset(visited,0,sizeof(visited));
            memset(level,0,sizeof(level));
        }
        cout<<endl;
        Clear();
   }
}
int main()
{
   //freopen("input.txt", "r", stdin);
   Solve();

}

ll bfs(ll source, ll destination)
{
    queue<ll>q;
    q.push(source);
    visited[source] = 1;
    level[source] = 0;

    while(!q.empty())
    {
        ll u = q.front();
        q.pop();

        for(ll i=0; i<graph[u].size(); i++)
        {
            ll v = graph[u][i];
            if(visited[v] == 0)
            {
                q.push(v);
                visited[v]=1;
                level[v] = level[u]+1;
            }
        }
    }
    return level[destination];
}
/*
1 3
2 3 4
3 4 5 6
1 6
1 7
2 12 13
1 8
2 9 10
1 11
1 11
2 12 17
1 14
2 14 15
2 15 16
1 16
1 19
2 18 19
1 20
1 20
5
1 20
2 9
19 5
18 19
16 20
4 2 3 5 6
1 4
3 4 10 5
5 10 11 12 19 18
2 6 7
2 7 8
2 9 10
1 9
1 10
2 11 14
3 12 13 14
3 18 17 13
4 14 15 16 17
0
0
0
2 18 20
1 19
1 20
6
1 20
8 20
15 16
11 4
7 13
2 16
*/
