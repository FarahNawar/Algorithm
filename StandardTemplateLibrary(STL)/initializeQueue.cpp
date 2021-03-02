#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>myQ;
    for(int i=1;i<=5;i++)
        myQ.push(i);
    cout<<" the front of the queue is "<<myQ.front()<<endl;
    cout<<" the back of the queue is "<<myQ.back()<<endl;

    while(!myQ.empty())
    {
        cout<<myQ.front()<<endl;
        myQ.pop();
    }
}
