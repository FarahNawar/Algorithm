#include<bits/stdc++.h>
using namespace std;
vector<int>graph[300000];
#define COLOR1 1
#define COLOR2 2
int color[300000];
int color1 = 0;
int color2 = 0;
int bfs(int s);
void Clean();
/*
MyInput:
1
7
1 3
2 3
4 3
5 3
7 6
8 6
9 6
Input 2:
2
2
1 2
2 3
3
1 2
2 3
4 2

*/
int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;

        for(int i=0;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int sum=0;
        for(int i=1;i<=20000;i++)
        {
            if(color[i] == 0 && graph[i].size()!= 0) // if it is not visited and not a single node
            {
                //cout<<bfs(1)<<endl;
               // cout<<"Called by "<<i<<endl;
                sum+=bfs(i);
                color1 = 0;
                color2 = 0;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        Clean();
    }

}
void Clean()
{
    memset(graph,0,sizeof(graph));
    memset(color,0,sizeof(color));
    color1 = 0;
    color2 = 0;
}

int bfs(int s)
{

    queue<int>q;
    q.push(s);
    color[s] = COLOR1;
    color1++;

    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        for(int i=0;i<graph[p].size();i++)
        {
            if(color[ graph[p][i] ] == 0)
            {
                q.push(graph[p][i]);
                if(color[p] == COLOR1)
                {
                    color[ graph[p][i] ] = COLOR2;
                    color2++;
                }
                else
                {
                    color[ graph[p][i] ] = COLOR1;
                    color1++;
                }
            }
        }
    }
   // cout<<"color1: "<<color1<<"   color2 : "<<color2<<endl;
    return max(color1,color2);
}
