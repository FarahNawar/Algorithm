#include<iostream>
using namespace std;
void Heapsort(int Array[],int n);
void Min_heapify(int Array[],int i,int n);
int main()
{
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;

    int Array[n];

    for(int i=1;i<=n;i++)
        cin>>Array[i];
   Heapsort(Array,n);
    cout<<"Min heap : "<<endl;
    for(int i=1;i<=n;i++)
        cout<<Array[i]<<" ";

}
void Heapsort(int Array[],int n)
{
    for(int i=n/2;i>=1;i--)
        Min_heapify(Array,i,n);
    for(int i=n;i>=1;i--)
    {
        swap(Array[n],Array[1]);
        Min_heapify(Array,1,i-1);
    }
}
void Min_heapify(int Array[],int i,int n)
{
    int lowest=i;
    int left_child=2*i;
    int right_child=2*i+1;

    if(left_child<=n && Array[left_child]<Array[i])
        lowest=left_child;

    if(right_child<=n && Array[right_child]<Array[lowest])
        lowest=right_child;
    if(lowest!=i)
    {
        swap(Array[lowest],Array[i]);
        Min_heapify(Array,lowest,n);
    }
}

