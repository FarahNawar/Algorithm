#include<iostream>
using namespace std;
int main()
{
    int Array[50];
    int num;
    cout<<"Enter the number of elements "<<endl;
    cin>>num;
    cout<<"Enter the elements "<<endl;
    for(int i=1;i<=num;i++)
        cin>>Array[i];
    int Min,Loc;
    for(int i=1;i<=num;i++)
    {
         Min=Array[i];
         Loc=i;
         for(int j=i+1;j<=num;j++)
         {
             if(Array[j]<Min)
             {
                 Min=Array[j];
                 Loc=j;
             }
         }
         swap(Array[Loc],Array[i]);
    }
    cout<<"Sorted  : "<<endl;
    for(int i=1;i<=num;i++)
        cout<<Array[i]<<" ";
}
