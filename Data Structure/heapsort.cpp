#include<iostream>
using namespace std;
int Array[]= {5,3,100,1,900,8,20,6,2};
void heapsort(int arraylength);
void maxheapify(int arraylength,int root);
void display(int arraylength);
int main()
{
    int arraylength=sizeof(Array)/sizeof(Array[0]);
    display(arraylength);
    heapsort(arraylength);
    cout<<"\nAfter sorted: "<<endl;
    display(arraylength);
}
void display(int arraylength)
{
    for(int i=0; i<arraylength; i++)
        cout<<Array[i]<<" ";
}
void maxheapify(int arraylength,int root)
{
    int largest=root;
    int leftChild=2*root;
    int rightChild=2*root+1;

    if(leftChild<arraylength && Array[leftChild]>Array[largest])
        largest=leftChild;
    if(rightChild<arraylength &&Array[rightChild]>Array[largest])
        largest=rightChild;
    if(largest!=root)
    {
        swap(Array[largest],Array[root]);
        maxheapify(arraylength,largest);
    }
}
void heapsort(int arraylength)
{
    for(int i=(arraylength/2)-1; i>=0; i--)
        maxheapify(arraylength,i);

    for(int i=arraylength-1; i>=0; i--)
    {
        swap(Array[i],Array[0]);
        maxheapify(i,0);
    }
}
