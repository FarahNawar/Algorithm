#include<bits/stdc++.h>
using namespace std;
/*
10 13
1 2
1 4
1 3
2 6
3 8
3 7
4 7
5 8
5 10
6 10
7 9
7 8
9 10
*/
vector<int>Graph[10000];
int visited[10000];
int level[10000];
void bfs(int s);
int main()
{
    int v,e;
    cout<<"Enter the number of vertices and edges "<<endl;
    cin>>v>>e;

    cout<<"Enter the source and destination for each edge"<<endl;
    for(int i=0;i<e;i++)
    {
        int source,destination;
        cin>>source>>destination;
        Graph[source].push_back(destination);
        Graph[destination].push_back(source);
    }
    cout<<"BFS traversal "<<endl;
    bfs(1);

    cout<<endl<<"Levels of each node : "<<endl;
    for(int i=1;i<=v;i++)
    {
        cout<<"Node "<<i<<" = "<<level[i]<<endl;
    }
}
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=1;
    level[s]=0;
    while(!q.empty())
    {
        int p=q.front();
        cout<<p<<" ";
        q.pop();
        for(int i=0;i<Graph[p].size();i++)
        {
            if(visited[Graph[p][i]]==0)
            {
                q.push(Graph[p][i]);
                visited[Graph[p][i]]=1;
                level[Graph[p][i]]=level[p]+1;
            }
        }

    }
}
