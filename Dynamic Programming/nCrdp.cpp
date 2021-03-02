#include<iostream>
using namespace std;
int dp[100][100];
int nCr(int n,int r);
int main()
{
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
           dp[i][j]=-1;
    int n,r;
    cout<<"Enter n and r in nCr : "<<endl;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<nCr(n,r);
}
int nCr(int n,int r)
{
    if(r==1)return n;
    if(r==n)return 1;
    if(dp[n][r]!=-1)
        return dp[n][r];
    else
    {
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }
}


