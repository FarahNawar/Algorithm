#include<bits/stdc++.h>
using namespace std;
void bfs(int n);
vector<int>Graph[10000];
#define COLOR1 1
#define COLOR2 2
int color[10000];
bool bipartite;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
        int v,u;
        cin>>v>>u;
        Graph[v].push_back(u);
        Graph[u].push_back(v);
    }
    bfs(0);
}

void bfs(int n)
{
    queue<int>q;
    q.push(n);
    color[n]=COLOR1;
    while(!q.empty())
    {
        int p=q.front();
        cout<<p<<" ";
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
                    cout<<"Same color in adjacent node "<<endl;
                    bipartite = true;
                    break;
                }
            }
        }
        if(bipartite == true)
            break;
    }

}
