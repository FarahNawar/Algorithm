#include<iostream>
using namespace std;
int main()
{
    int Array[10];
    int num;
    cout<<"Enter the number of elements : "<<endl;
    cin>>num;
    cout<<"Enter the elements : "<<endl;
    for(int i=1;i<=num;i++)
        cin>>Array[i];
    int key;
    for(int j=2;j<=num;j++)
    {
        key=j;
        while(Array[key]<Array[key-1] && key>1)
        {
            swap(Array[key],Array[key-1]);
            key--;
        }
    }
    cout<<"\nSorted : "<<endl;
    for(int i=1;i<=num;i++)
        cout<<Array[i]<<" ";
}
