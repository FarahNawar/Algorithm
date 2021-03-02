#include<iostream>
using namespace std;
int coin[100];
int num;
int main()
{
    cout<<"How many coins ? "<<endl;
    cin>>num;
    cout<<"Enter the coins : "<<endl;
    for(int i=1;i<=num;i++)
        cin>>coin[i];
}
