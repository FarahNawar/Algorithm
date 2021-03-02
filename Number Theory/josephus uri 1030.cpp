#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;

    while(t--)
    {
         cout<<"Enter the number of people in the circle "<<endl;
    int n,x;
    cin>>n>>x;
    int i=1;
    while(n/(int)pow(x,i)!=0)
        i++;
    int m=i-1;
    int l=n-pow(x,m);
    cout<<x*l+1<<endl;
    }

}

