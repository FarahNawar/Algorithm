#include<iostream>
using namespace std;
int tree[30];
int seris[10];
void segment(int node,int start,int End);
int query(int node,int nodestart,int nodeend,int querystart,int queryend);
int main()
{
    int n=6;
    cout<<"Enter 6 numbers of seris"<<endl;
    for(int i=1; i<=n; i++)
        cin>>seris[i];
    segment(1,1,n);
    for(int i=1; i<=13; i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<"\nthe query is "<<query(1,1,n,1,4)<<endl;
}
void segment(int node,int start,int End)
{
    if(start==End)
    {
        tree[node]=seris[start];
        cout<<"node : "<<node<<endl;

        return;
    }
    int leftnode=2*node;
    int rightnode=2*node+1;
    int midpoint=(start+End)/2;
    segment(leftnode,start,midpoint);
    segment(rightnode,midpoint+1,End);
    tree[node]=tree[leftnode]+tree[rightnode];

}
int query(int node,int nodestart,int nodeend,int querystart,int queryend)
{

    if(nodestart>queryend||nodeend<querystart)
        return 0;
    if(nodestart>=querystart && nodeend<=queryend)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(nodestart+nodeend)/2;
    int sum1=query(left,nodestart,mid,querystart,queryend);
    int sum2=query(right,mid+1,nodeend,querystart,queryend);
    return sum1+sum2;
}
