#include<bits/stdc++.h>
using namespace std;
/*
Input:
2
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........

*/
char Graph[30][30];
int visited[30][30];
int dx[4]={1,-1,0,-0};
int dy[4]={0,0,1,-1};
int c,r;

#define pii pair<int,int>
#define mp make_pair

int bfs(int x,int y);
bool withinboundary(int x,int y)
{
    if(x>=0 && x<r && y>=0 && y<c)
        return true;
    else
        return false;
}
void Clear()
{
    memset(Graph,0,sizeof(Graph));
    memset(visited,-1,sizeof(visited));
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>c>>r;
        int sx,sy;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                char c;
                cin>>c;
                if(c == '@')
                {
                    sx=i;
                    sy=j;
                }
                Graph[i][j] = c;
            }
        }
        memset(visited, -1, sizeof(visited));
        cout<<"Case "<<i<<": "<<bfs(sx,sy)<<endl;
        Clear();
    }
}
int bfs(int x,int y)
{
    queue< pii >q;
    q.push( mp(x,y) );
    visited[x][y]=1;
    int Count=0;
    while(!q.empty())
    {
        pii p = q.front();

        q.pop();
        Count++;

        for(int k=0;k<4;k++)
        {
            int i = p.first + dx[k];
            int j = p.second + dy[k];

            if( visited[i][j] == -1 && withinboundary(i,j) && Graph[i][j] != '#')
            {
                q.push(mp(i,j));
                visited[i][j] = 1;
            }
        }

    }
    return Count;
}
