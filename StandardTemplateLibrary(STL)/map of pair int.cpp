#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
    map<pii,int>mymap;
    mymap[make_pair(1,2)]=3999;
    pii p=make_pair(1,2);
    cout<<mymap[p]<<endl;
}

