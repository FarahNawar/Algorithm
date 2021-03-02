#include<iostream>
using namespace std;
int fact(int n);
int recur(int n);
int mod=523;
int main()
{
   int num=100;
  cout<<num<<"!%"<<mod<<" = "<<recur(num)%mod<<endl;
}
int recur(int n)
{
    if(n==1) return 1;
    else
        return(recur(n-1)*(n%mod));
}
