#include<iostream>
using namespace std;
void Heapsort(int Array[],int n);
void Max_heapify(int Array[],int i,int n);
int main()
{
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;

    int Array[n];

    for(int i=1;i<=n;i++)
        cin>>Array[i];
    Heapsort(Array,n);
    cout<<"Max heap : "<<endl;
    for(int i=1;i<=n;i++)
        cout<<Array[i]<<" ";

}
void Heapsort(int Array[],int n)
{
    for(int i=n/2;i>=1;i--)
        Max_heapify(Array,i,n);
   for(int i=n;i>=1;i--)
   {
       swap(Array[i],Array[1]);
       Max_heapify(Array,1,i-1);
   }
}
void Max_heapify(int Array[],int i,int n)
{
    int largest=i;
    int left_child=2*i;
    int right_child=2*i+1;

    if(left_child<=n && Array[left_child]>Array[i])
        largest=left_child;
    else
        largest=i;
    if(right_child<=n && Array[right_child]>Array[largest])
        largest=right_child;
    if(largest!=i)
    {
        swap(Array[largest],Array[i]);
        Max_heapify(Array,largest,n);
    }
}

