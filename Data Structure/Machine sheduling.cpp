#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int Machine[100000];
typedef pair<int,int> pii;
int Check[10000];
int main()
{
    int n;
    cout<<"Enter the number of tasks "<<endl;
    cin>>n;

    vector <pii> interval;
    cout<<"Enter the start and finish time of the tasks "<<endl;
    for(int i=0;i<n;i++)
    {
        int start,finish;
        cin>>start>>finish;
        pii p;
        p=make_pair(start,finish);
        interval.push_back(p);
    }
    sort(interval.begin(),interval.end());
    for(int i=0;i<n;i++)
    {
       // cout<<interval[i].first<<" "<<interval[i].second<<endl;
        for(int j=interval[i].first;j<=interval[i].second;j++)
            {
                Check[j]++;
            }
    }
   int *Max= max_element(Check,Check+n);
   cout<<"The minimum number of machine needed to perform the tasks is "<<*Max<<endl;
}
