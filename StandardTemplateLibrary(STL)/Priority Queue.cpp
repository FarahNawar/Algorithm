#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue <int > myq;
    int n=6,x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        myq.push(x);
    }


    cout<<" the priority queue is : "<<endl;
    while(!myq.empty())
    {
        cout<<myq.top()<<" ";
        myq.pop();
    }
}
