#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair<pair<double,double>,double> ddd;
int main()
{
    int n=3;
    cout<<"Enter profit and weight of each item "<<endl;
    double profit,weight,Ratio;
    vector< ddd >v;
    for(int i=0; i<n; i++)
    {
        cin>>profit>>weight;
        Ratio=profit/weight;
        ddd p;
        p=make_pair(make_pair(Ratio,profit),weight);
        v.push_back(p);
    }
    cout<<"Ratio    Profit    weight"<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i].first.first<<"      "<<v[i].first.second<<"      "<<v[i].second<<endl;
    sort(v.begin(),v.end());
    cout<<"After sorting "<<endl;
    cout<<"Ratio    Profit    weight"<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i].first.first<<"      "<<v[i].first.second<<"      "<<v[i].second<<endl;



}
