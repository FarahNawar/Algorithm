#include<bits/stdc++.h>
using namespace std;
int power[100008];
int order[100008];

bool compare(int x,int y)
{
    return power[x]<power[y];
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
      cin>>power[i];
 for(int i=0;i<n;i++)
    order[i]=i;
 sort(order,order+n,compare);


 for(int i=0;i<n;i++)
    cout<<order[i]<<" ";

}


