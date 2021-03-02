#include <iostream>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#define MAX 100
#define initial 1
#define waiting 2
#define visited 3
int n;
int level=0;
int adj[MAX][MAX];
int queue[MAX],rear=-1,front=-1;
int state[MAX];
void create_graph();
void BF_Traversal();
void BFS(int v);
void insert_queue(int vertex);
int delete_queue();
int isEmpty_queue();
 int x=9;
int arr[9];
using namespace std;
void printArray(int arr[], int n);
void heapSort(int arr[], int n);
void heapify(int arr[], int n, int i);
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i ;
    int r = 2*i + 1;
    if (l <= n && arr[l] > arr[largest])
        largest = l;
    if (r <=n &&arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 ; i >= 1; i--)
        heapify(arr, n, i);
    for (int i=n; i>=1; i--)
    {
        swap(arr[1], arr[i]);
        heapify(arr, i-1, 1);
    }
}
void printArray(int arr[], int n)
{
    for (int i=1; i<=n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{

   cout<<"Enter 9 elements : "<<endl;
   for(int i=1;i<=x;i++)
    cin>>arr[i];
    int n = sizeof(arr)/sizeof(arr[1]);
    heapSort(arr, n);
    cout << "Sorted array is \n";
    printArray(arr, n);
    create_graph();
    BF_Traversal();
}
void BF_Traversal()
{
    int v;
    for(v=1;v<=n;v++)
        state[v]=initial;
    BFS(1);
}
void BFS(int v)
{
    int i;
    insert_queue(v);
    state[v]=waiting;
    while(!isEmpty_queue())
    {
        level++;
        v=delete_queue();
        if(level==1)
        {
               printf("               %d ",arr[v]);
               printf("\n            /     \\\n");
        }
        if(level>1&&level <=3)
             printf("        %d     ",arr[v]);
        if(level==3)
            printf("\n     /    \\         /     \\\n");
        if(level>3&&level<=7)
             printf("   %d    ",arr[v]);
         if(level==7)
                printf("\n  / \\     / \\     / \\     / \\\n");
        if(level>7&&level<=15)
              printf("  %d",arr[v]);
       if(level==15)
            printf("\n/ \\ / \\ / \\ / \\ / \\ / \\ / \\ / \\\n");
        state[v]=visited;
        for(i=1;i<=n;i++)
        {
            if(adj[v][i]==1&&state[i]==initial)
            {
                insert_queue(i);
                state[i]=waiting;
            }
        }
    }
}
void insert_queue(int vertex)
{
    if(rear==MAX-1)
        printf("Queue Overflow\n");
    else
    {
        if(front==-1)
            front=0;
        rear=rear+1;
        queue[rear]=vertex ;
    }
}
int isEmpty_queue()
{
    if(front == -1 || front > rear)
        return 1;
    else
        return 0;
}
int delete_queue()
{
    int delete_item;
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        exit(1);
    }

    delete_item = queue[front];
    front = front+1;
    return delete_item;
}
void create_graph()
{
    int count,max_edge,origin,destin;
    //printf("Enter number of vertices : ");
    //scanf("%d",&n);
    n=9;
    max_edge = n*(n-1);
    for(count=1; count<=x; count++)
    {
        origin=count;
        if(2*count<=x)
        {
       destin=2*count;
        //cout<<origin<<","<<destin<<endl;
            adj[origin][destin] = 1;
      // cout<<"destin : "<<destin<<endl;
        }
        if(2*count+1<=x)
        {
              // origin=count;
               destin=2*count+1;
               // cout<<origin<<","<<destin<<endl;
            adj[origin][destin] = 1;
              // cout<<"destin : "<<destin<<endl;
        }
    }
}


