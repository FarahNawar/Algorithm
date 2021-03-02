#include<bits/stdc++.h>
using namespace std;
map<char,int>m;
int main()
{
    char c='A';
    c++;
    cout<<c<<endl;
    m['a']=6;
    m['h']=3;
    m['b']=4;
    //sort(m.begin(),m.end()); sort function does not work on map
    for(map<char,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

}
