#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll,ll>
int main()
{
   stack<pii>s;
   s.push(make_pair(1,2));
   s.push(make_pair(4,6));
   s.push(make_pair(2,7));
    while(!s.empty())
    {
     pii x=s.top();
     cout<<x.first<<" "<<x.second<<endl;
     s.pop();
    }
}

