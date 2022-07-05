#include<bits/stdc++.h>
using namespace std;
void bfs(int n);
void Clean();
vector<int>Graph[10000];
#define COLOR1 1
#define COLOR2 2
int color[10000];
bool bipartite=false;
/*
3
3
0 1
1 2
2 0
3
2
0 1
1 2
9
8
0 1
0 2
0 3
0 4
0 5
0 6
0 7
0 8
0
*/
void Clean()
{
    bipartite=false;
    memset(color,0,sizeof(color));
    memset(Graph,0,sizeof(Graph));
}
int main()
{
    while(true)
    {
    int nodes,edges;
    cin>>nodes;
    if(nodes == 0)
        break;
    cin>>edges;

    for(int i=0;i<edges;i++)
    {
        int v,u;
        cin>>v>>u;
        Graph[v].push_back(u);
        Graph[u].push_back(v);
    }

    bfs(0);
    if(bipartite == true)
        cout<<"NOT BICOLORABLE."<<endl;
    else
        cout<<"BICOLORABLE."<<endl;
    Clean();
    }

}

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    color[n]=COLOR1;
    while(!q.empty())
    {
        int p=q.front();
       // cout<<p<<" ";
        q.pop();
        for(int i=0;i<Graph[p].size();i++)
        {

            if(color[Graph[p][i]]==0)
            {
                q.push(Graph[p][i]);
                if(color[p] == COLOR1)
                    color[Graph[p][i]] = COLOR2;
                else
                    color[Graph[p][i]] = COLOR1;
            }
            else
            {
                if(color[Graph[p][i]] == color[p])
                {
                    //cout<<"Same color in adjacent node "<<endl;
                    bipartite = true;
                    break;
                }
            }
        }
        if(bipartite == true)
            break;
    }

}

