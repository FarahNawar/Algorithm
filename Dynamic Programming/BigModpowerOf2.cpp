#include<iostream>
using namespace std;
long long int num,mod;
int recur(int pow);
int main()
{
    mod=10;
     num=2;
     cout<<recur(20)<<endl;

}
int recur(int pow)
{
    if(pow==0)return 1;
    if(pow%2==0)
    {
        int result=recur(pow/2);
        return ((result%mod)*(result%mod))%mod;
    }
    else
        return ((num%mod)*(recur(pow-1)%mod))%mod;
}
