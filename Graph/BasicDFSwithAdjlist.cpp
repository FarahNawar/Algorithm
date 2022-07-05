#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
/*

Input:
4 3
1 2
1 3
2 4

*/
using namespace std;
void dfs(int node);
vector <int> graph[100];
int visited[1000];
int main()
{
    int nodes, edges;
    cout<<"Number of nodes and edges : "<<endl;
    cin>>nodes>>edges;
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
   memset(visited,-1,sizeof(visited));
   dfs(1);
}
void dfs(int node)
{
    cout<<" node "<<node<<" is visited "<<endl;
    visited[node]=1;
    for(int i=0;i<graph[node].size();i++)
    {
        if(visited[graph[node][i]]==-1)
        {
        	//printf("From : %d => To : %d\n",node, graph[node][i]);
            dfs(graph[node][i]);
        }
    }
    return;
}

