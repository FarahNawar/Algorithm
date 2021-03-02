#include<iostream>
#define INFINITY 99999
using namespace std;
int main()
{
    int Array[10];

    int num;
    cout<<"Enter the number of elements : "<<endl;
    cin>>num;

    cout<<"Enter elements : "<<endl;
    for(int i=1; i<=num; i++)
        cin>>Array[i];

    int Min;
    int Loc=1;
    for(int j=1; j<=num; j++)
    {
        Min=INFINITY;
        for(int i=j; i<=num; i++)
        {
            if(Array[i]<Min)
            {
                Min=Array[i];
                Loc=i;
            }
        }
        swap(Array[j],Array[Loc]);
    }
    cout<<"Sorted : "<<endl;
    for(int i=1;i<=num;i++)
            cout<<Array[i]<<" ";
}
