#include<iostream>
#include<vector>
#include<queue>
#include<functional>
using namespace std;
int main()
{
    //priority_queue <Type, vector<Type>, ComparisonType > min_heap;
    priority_queue<int,vector<int>,greater<int> >pq;
    pq.push(100);
    pq.push(2);
    pq.push(17);

    while(!pq.empty())
    {
        int r = pq.top();
        pq.pop();
        cout<<r<< " ";
    }
    return 0;
}
