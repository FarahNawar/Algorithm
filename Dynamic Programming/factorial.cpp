#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int num;
    cout<<"Enter number : "<<endl;
    cin>>num;
    cout<<num<<"!"<<" = "<<fact(num)<<endl;
}
int fact(int n)
{
    if(n==0)return 1;
    return (fact(n-1)*n);
}
