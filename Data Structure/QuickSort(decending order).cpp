#include<iostream>
using namespace std;
void Quicksort(int Array[],int start,int End);
 int Partition(int Array[],int start,int End);

int main()
{
    int Array[100],num;
    cout<<"Enter the number of elements: "<<endl;
    cin>>num;
    cout<<"Enter the elements : "<<endl;
    for(int i=1;i<=num;i++)
        cin>>Array[i];
    Quicksort(Array,1,num);
    cout<<"Sorted : "<<endl;
    for(int i=1;i<=num;i++)
       cout<<Array[i]<<" ";
}
void Quicksort(int Array[],int start,int End)
{
    int pivot;
    if(start<End)
    {
        pivot=Partition(Array,start,End);
        Quicksort(Array,start,pivot-1);
        Quicksort(Array,pivot+1,End);
    }
}
int Partition(int Array[],int start,int End)
{
    int x=Array[End];
    int i=start-1;
    for(int j=start;j<=End-1;j++)
    {
        if(Array[j]>=x)
        {
            i++;
            swap(Array[j],Array[i]);
        }
    }
    swap(Array[End],Array[i+1]);
    return i+1;
}
