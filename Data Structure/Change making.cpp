#include<iostream>
#include<utility>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
#define ii pair<int,int>
int solution[100];
bool cmp(ii a,ii b)
{
    return a.first>b.first;
}
int main()
{
    ii p;
    vector<ii>v;
    int n;
    cout<<"Enter the number of coins : "<<endl;
    cin>>n;
    cout<<"Enter the amount of change : "<<endl;
    int change;
    cin>>change;
    int value;
    cout<<"Enter the value of notes "<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>value;
        p=make_pair(value,i);
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
//    for(int i=0;i<n;i++)
//        cout<<v[i].first<<","<<v[i].second<<endl;
      int totalchange=0,c=0;
      int i=0;
      int Count=0;
      while(i<=n-1)
      {
          c+=v[i].first;
          cout<<" Change "<<c<<endl;
          if(c>change)
            break;
          else
            totalchange=c;
          solution[v[i].second]=1;
          cout<<"note "<<v[i].second<<endl;
          Count++;
          i++;
      }
       cout<<"Total number of notes = "<<Count<<endl;
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

