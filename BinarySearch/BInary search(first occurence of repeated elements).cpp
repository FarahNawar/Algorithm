#include<iostream>
#include<cstdio>
using namespace std;
int binarysearch();
int a[1000],item,n;
int main()
{
    cout<<"Enter the number of elements "<<endl;
    cin>>n;
    cout<<"Enter the elements "<<endl;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cout<<"Enter the number you want to search "<<endl;
    cin>>item;
    if(binarysearch()==-1)
        cout<<item<<" is not in the list "<<endl;
    else
        cout<<item<<" is in position "<<binarysearch()<<endl;
}
int binarysearch()
{
    int mid,index=-1;
    int beg=1;
    int end=n;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==item)
        {
            index=mid;
            end=mid-1;
        }
        else  if (a[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    return index;
}
