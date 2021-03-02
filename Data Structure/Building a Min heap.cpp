#include<iostream>
using namespace std;
void Build_Min_heap(int Array[]);
void Min_heapify(int Array[],int i);
int n;
int main()
{
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;

    int Array[n];

    for(int i=1;i<=n;i++)
        cin>>Array[i];
    Build_Min_heap(Array);
    cout<<"Min heap : "<<endl;
    for(int i=1;i<=n;i++)
        cout<<Array[i]<<" ";

}
void Build_Min_heap(int Array[])
{
    for(int i=n/2;i>=1;i--)
        Min_heapify(Array,i);
}
void Min_heapify(int Array[],int i)
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
        Min_heapify(Array,lowest);
    }
}
