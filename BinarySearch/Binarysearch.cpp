#include<iostream>
using namespace std;
int binarysearch();
int numbers[1000],size,item;
int main()
{
    cout<<"Enter the number of elements "<<endl;
    cin>>size;

    cout<<"Enter the elements "<<endl;
    for(int i=1; i<=size; i++)
        cin>>numbers[i];

   cout<<"Enter the number you want to search "<<endl;
   cin>>item;
   int position=binarysearch();
   if(position==-1)
    cout<<item<<" is not in the list "<<endl;
   else
    cout<<item<<" is in position "<<position<<endl;

}
int binarysearch()
{
    int mid,beg,end;
    beg=1;
    end=size;
    int index=-1;

    while(beg<=end)
    {
         mid=(beg+end)/2;
        if(numbers[mid]==item)
        {
            index=mid;
            return index;
        }
        else if(numbers[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    return -1;
}
