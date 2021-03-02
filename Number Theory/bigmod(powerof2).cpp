#include<iostream>
using namespace std;
int recur(int n,int m);
int main()
{
    int power,mod;
    cin>>power>>mod;
    cout<<recur(power,mod)<<endl;
}
int recur(int n,int m)
{
    if(n==0)
    return 1;
    long long int x=recur(n/2,m);
    x= (x*x)%m;
    if(n%2!=0)
    {
         x=(x*2)%m;
    }
    return x;

}
