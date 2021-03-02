#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t=10;
    while(t--)
    {
         cout<<"Enter the number of people in the circle "<<endl;
    int n;
    cin>>n;
    int i=1;
    while(n/(int)pow(2,i)!=0)
        i++;
    int m=i-1;
    int l=n-pow(2,m);
    cout<<2*l+1<<endl;
    }

}
