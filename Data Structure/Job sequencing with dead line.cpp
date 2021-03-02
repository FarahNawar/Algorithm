#include<iostream>
#include<utility>
#include<vector>
#define piii pair< pair<int,int> , int >
#include<algorithm>
using namespace std;
int timeslot[100];
vector<int>solution;
bool compare(piii a,piii b)
{
    return(a.first.first>b.first.first);
}
int main()
{
    piii pr;
    vector< piii >job;
    int n;
    cout<<"Enter the number of jobs "<<endl;
    cin>>n;

    int deadline,profit;
    cout<<"Enter the associate  profit and deadline of each job"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>profit>>deadline;
        pr=make_pair(make_pair(profit,deadline),i+1);
        job.push_back(pr);
    }
    sort(job.begin(),job.end(),compare);

int i=0;
int sum=0;
while(i<n)
{
    int j=job[i].first.second;
    while(j>0)
    {
        if(timeslot[j]==0)
        {
             timeslot[j]=1;
             solution.push_back(job[i].second);
             sum+=job[i].first.first;
             break;
        }
        else
        j--;
    }
    i++;
}
cout<<"Selected jobs : (";
for(int i=0;i<solution.size();i++)
{
   cout<<solution[i];
   if(i<solution.size()-1)
        cout<<",";
}
cout<<")"<<endl<<"the maximum profit earned = "<<sum<<endl;
}
