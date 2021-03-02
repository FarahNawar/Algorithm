#include<iostream>
#include<vector>
using namespace std;
void Build_maxheap();
void Max_heapify(int root);
int n;
vector<int> v;
int main()
{
   cout<<"Enter the number of elements  :"<<endl;
   cin>>n;
   cout<<"Enter the elements : "<<endl;
   int x;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }
   Build_maxheap();
   for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
}
void Build_maxheap()
{
    for(int i=n/2-1;i>=0;i--)
        Max_heapify(i);
}
void Max_heapify(int root)
{
    int largest= root;
    int left=2*root+1;
    int right=2*root+2;

    if(left<n&&v[left]>v[largest])
        largest=left;
    if(right<n&&v[right]>v[largest])
        largest=right;
    if(largest!=root)
    {
        swap(v[largest],v[root]);
        Max_heapify(largest);
    }
}
