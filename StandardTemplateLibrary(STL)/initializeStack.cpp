#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>mystack;
    for(int i=1;i<=5;i++)
        mystack.push(i);
    while(!mystack.empty())
    {
     cout<<mystack.top()<<endl;
     mystack.pop();
    }
    // can no t be referenced by index

}
