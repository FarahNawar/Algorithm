#include<stdio.h>
#define max 100
#define initial 1
#define waiting 2
#define visited 3
void insertq(int vertex);
int deleteq();
int isemptyq();
int queue[max],front=-1,rear=-1;
void creategraph();
int state[max];
void bfs(int v);
void bf_traversal();
int adj[max][max];
int n;
void insertq(int vertex)
{
    if(rear==max-1)
        printf("overflow\n");
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        queue[rear]=vertex;
    }
}
int deleteq()
{
    int item;
    if(front==-1&&front>rear)
    {
         printf("underflow\n");
         exit(1);
    }
        item=queue[front];
        front=front+1;
        return item;
}
int isemptyq()
{
    if(front==-1||front>rear)
        return 1;
    else
        return 0;
}
void creategraph()
{
    int origin,destin,i,maxedge;
    printf("enter number of vertice:\n");
    scanf("%d",&n);
    maxedge=n*(n-1);
    for(i=1;i<=maxedge;i++)
    {
        printf("enter edge %d(-1 -1 to quit):\n",i);
        scanf("%d %d",&origin,&destin);
        if(origin==-1&&destin==-1)
            break;
        if(origin>=n||destin>=n||origin<0||destin<0)
        {
            printf("invalid choice\n");
            i--;
        }
        else
        {
            adj[origin][destin]=1;
        }
    }
}
void bf_traversal()
{
    int i,v;
    for(i=0;i<n;i++)
    {
        state[i]=initial;
    }
    printf("enter the initial vertex:\n");
    scanf("%d",&v);
    bfs(v);
}
void bfs(int v)
{
    int i;
    insertq(v);
    state[v]=waiting;
    while(!isemptyq())
    {
          v=deleteq();
        printf(" %d ",v);
        state[visited];
    for(i=0;i<n;i++)
    {
        if(adj[v][i]==1&&state[i]==initial)
        {
            insertq(i);
            state[i]=waiting;
        }
    }
}
printf("\n");
}
int main()
{
    creategraph();
    bf_traversal();
}
