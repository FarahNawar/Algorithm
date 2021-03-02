#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool sortbysecond(pair<int,int>&a,pair<int,int>&b)
{
    return (a.second<b.second);
}
int main()
{
    vector< pair<int,int> >v;
    int items=4;
    int value[10]={10,50,34,6};
    int weight[10]={2,7,4,9};

    for(int i=0;i<items;i++)
        v.push_back(make_pair(value[i],weight[i]));

    for(int i=0;i<items;i++)
        cout<<v[i].first<<","<<v[i].second<<endl;
   sort(v.begin(),v.end(),sortbysecond);
   cout<<endl;
    for(int i=0;i<items;i++)
        cout<<v[i].first<<","<<v[i].second<<endl;

}
