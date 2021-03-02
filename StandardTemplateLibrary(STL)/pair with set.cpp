#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
    set<pii>Set;
    pii x=make_pair(1,10);
    pii y=make_pair(4,10);
    pii z=make_pair(1,78);
    Set.insert(x);
    Set.insert(y);
    Set.insert(z);
    for(set<pii>::iterator it=Set.begin();it!=Set.end();it++)
      cout<<it->first<<" ";

}

