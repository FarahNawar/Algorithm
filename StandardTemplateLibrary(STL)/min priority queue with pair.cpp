#include<iostream>
#include<queue>
#include<utility>
using namespace std;
typedef pair<int,int> pii;
int main()
{
    priority_queue<pii,vector<pii>,greater<pii> > pq;
    pq.push(make_pair(3,4));
    pq.push(make_pair(1,4));
    pq.push(make_pair(1,1));
    pq.push(make_pair(5,4));
    pq.push(make_pair(8,4));
    while(!pq.empty())
    {
        pii r=pq.top();
        cout<<r.first<<","<<r.second<<endl;
        pq.pop();
    }
}
