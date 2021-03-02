#include<iostream>
#include<vector>
#include<utility>
using namespace std;
typedef pair<int,int> pii;
int main()
{
    vector<pii>v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,3));
     v.push_back(make_pair(5,6));
    v.push_back(make_pair(7,8));


 for(int i=0;i<=3;i++)
    cout<<v[i].first<<","<<v[i].second<<endl;

    cout<<"2D array"<<endl;
    vector< pair<int,int> >v1[10];
    v1[0].push_back(make_pair(1,1));
    v1[0].push_back(make_pair(1,2));
    v1[1].push_back(make_pair(2,1));
    v1[1].push_back(make_pair(2,2));
    for(int i=0;i<2;i++)
    {
          for(int j=0;j<2;j++)
        cout<<v1[i][j].first<<","<<v1[i][j].second<<endl;
        cout<<endl;
    }



}
