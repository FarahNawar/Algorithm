#include<iostream>
using namespace std;
int survivorindex(int n);
int main()
{
    int t=10;
    while(t--)
    {
         int n;
    cout<<"Enter the number of people in the circle "<<endl;
    cin>>n;
    cout<<survivorindex(n)<<endl;
    }

}
int survivorindex(int n)
{
    if(n==2) return 1;
    if(n==1)return 1;
    if(n&1)
    {
        n=(n-1)/2;
          return 2*survivorindex(n)+1;
    }
    else
    {
         n=n/2;
        return 2*survivorindex(n)-1;
    }


}
