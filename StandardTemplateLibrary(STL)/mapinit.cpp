#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string>mymap;
    mymap.insert(make_pair(1,"farah"));
    mymap.insert(make_pair(2,"sarah"));

    mymap[3]="hello";
    mymap[4]="hi";

    //using iterator
    map<int,string>::iterator it;
    it=mymap.begin();
    while(it!=mymap.end())
    {
        cout<<it->first<<" = "<<it->second<<endl;
        it++;
    }
    //using index
    cout<<mymap[1]<<" "<<mymap[2]<<" "<<mymap[3]<<endl;
}
