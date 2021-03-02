#include<iostream>
#include<utility>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
#define ii pair<int,int>
int solution[100];
int main()
{
    ii p;
    vector<ii>v;
    int n;
    cout<<"Enter the number of containers : "<<endl;
    cin>>n;


    int weight;
    for(int i=1;i<=n;i++)
    {
        cin>>weight;
        p=make_pair(weight,i);
        v.push_back(p);
    }
    cout<<"Enter the capacity of cargo"<<endl;
    int capacity;
     cin>>capacity;
    sort(v.begin(),v.end());
//    for(int i=0;i<n;i++)
//        cout<<v[i].first<<","<<v[i].second<<endl;
      int totalweight=0,w=0;
      int i=0;

      while(i<n-1)
      {
          w+=v[i].first;
          if(w>capacity)
            break;
          else
            totalweight=w;

          solution[v[i].second]=1;
          cout<<"container "<<v[i].second<<endl;
          i++;
      }
      cout<<"total weight = "<<totalweight<<endl;
      cout<<"\n(";
      for(int i=1;i<=n;i++)
      {
          if(i!=n)
          cout<<solution[i]<<",";
          else
             cout<<solution[i];
      }
       cout<<")";
}
