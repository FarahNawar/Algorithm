#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
typedef pair< pair<double,double>,pair<double,int> > ddd;
int main()
{
    int n;
    cout<<"Enter the number of item "<<endl;
    cin>>n;
    int capacity;
    cout<<"Enter the capacity of knapsack "<<endl;
    cin>>capacity;
    cout<<"Enter profit and weight of each item "<<endl;
    double profit,weight,Ratio;
    vector< ddd >v;
    for(int i=0; i<n; i++)
    {
        cin>>profit>>weight;
        Ratio=profit/weight;
        ddd p;
        p=make_pair(make_pair(Ratio,profit),make_pair(weight,i+1));
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    double totalweight=0,totalprofit=0,remaining,fraction_taken;
    int i=n-1;
    while(totalweight<capacity)
    {
        remaining=capacity-totalweight;
        if(remaining/v[i].second.first>=1)
        {
            fraction_taken=1;
            cout<<fraction_taken<<" fraction of Item "<<v[i].second.second<<" is taken "<<endl;
        }
        else
        {
            fraction_taken=remaining/v[i].second.first;
            cout<<remaining<<"/"<<v[i].second.first<<" fraction of Item "<<v[i].second.second<<" is taken "<<endl;
        }

        totalweight+=fraction_taken*v[i].second.first;
        totalprofit+=fraction_taken*v[i].first.second;

        i--;
    }
    cout<<"Total profit = "<<totalprofit<<endl;


}
