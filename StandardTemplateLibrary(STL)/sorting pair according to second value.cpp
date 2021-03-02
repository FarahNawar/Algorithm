#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector< pair<double,double> >v;
     double Item[10],Ratio[10];
    int n=3;

    cout<<"Enter the value of items "<<endl;
    for(int i=1;i<=n;i++)
        cin>>Item[i];

    cout<<"Enter the ratio of each item : "<<endl;
    for(int i=1;i<=n;i++)
           cin>>Ratio[i];

    for(int i=1;i<=n;i++)
        v.push_back(make_pair(Ratio[i],Item[i]));

    sort(v.begin(),v.end());

//     for(vector< pair<double,double> >::iterator it=v.begin();it!=v.end();it++)
//     {
//         cout<<it->first
//     }
for(int i=0;i<n;i++)
    cout<<v[i].first<<","<<v[i].second<<endl;

}
