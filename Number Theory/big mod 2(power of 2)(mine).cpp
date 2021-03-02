#include<iostream>
using namespace std;
int recur(int a,int n,int m);
int main()
{
    int n,m,a;

    while( cin>>a>>n>>m)
    {
    cout<<recur(a,n,m)<<endl;
    }
}
int recur(int a,int n,int m)
{
    if(n==0)
        return 1;
  if(n%2==0)
    {
       int ret=recur(a,n/2,m);
       return(ret*ret%m);
    }
  else
  {
      return((a%m)*recur(a,n-1,m))%m;
  }
}
