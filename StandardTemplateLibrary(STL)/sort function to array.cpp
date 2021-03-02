#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int k;
    int a[14];
    //cin>>k;
    for(int i=1;i<=4;i++)
        cin>>a[i];
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(int i=1;i<=4;i++)
    cout<<a[i];
}

