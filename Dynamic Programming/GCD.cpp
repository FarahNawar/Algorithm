#include<iostream>
int GCD(int a,int b);
using namespace std;
int main()
{
    int a,b;
     cin>>a>>b;
     cout<<GCD(a,b)<<endl;

}
int GCD(int a,int b)
{
  if(a==0)
    return b;
  else
    return GCD(b%a,a);
}
