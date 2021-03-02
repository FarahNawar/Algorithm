#include<iostream>
using namespace std;
int nCr(int n,int r);
int main()
{
    int n,r;
    cout<<"Enter the value of n and r in nCr "<<endl;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<nCr(n,r);
}
int nCr(int n,int r)
{
    if(r==n) return 1;
    if(r==1)return n;
    return nCr(n-1,r)+nCr(n-1,r-1);
}
