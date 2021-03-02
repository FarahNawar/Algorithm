#include<iostream>
using namespace std;
int Array[1000];
int n;
void mergesort(int start,int End);
void Merge(int start1,int End1,int start2,int End2);
void show()
{
    for(int i=1;i<=n;i++)
        cout<<Array[i]<<" ";
}
int main()
{

    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    cout<<"Enter the numbers : "<<endl;
    for(int i=1; i<=n; i++)
        cin>>Array[i];
    cout<<"Before sorting: "<<endl;
    show();
    mergesort(1,n);
    cout<<"\nAfter sorting :"<<endl;
    show();
}
void mergesort(int start,int End)
{
    int mid;
    if(start<End)
    {
        mid=(start+End)/2;
        mergesort(start,mid);
        mergesort(mid+1,End);
        Merge(start,mid,mid+1,End);
    }
}
void Merge(int start1,int End1,int start2,int End2)
{
    int i=start1;
    int j=start2;
    int k=0;
    int temp[1000];
    while(i<=End1 &&j<=End2)
    {
        if(Array[i]<Array[j])
            temp[k++]=Array[i++];
        else
           temp[k++]=Array[j++];
    }
    while(i<=End1)
        temp[k++]=Array[i++];
    while(j<=End2)
        temp[k++]=Array[j++];

    for(int i=start1,j=0;i<=End2;i++,j++)
    {
       Array[i]=temp[j];
    }
}
