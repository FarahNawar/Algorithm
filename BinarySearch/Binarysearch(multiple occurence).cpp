#include<iostream>
using namespace std;
int binarysearch(int flag);
int numbers[1000],size,item;
int main()
{
    int t=19;
    while(t--)
    {
         cout<<"Enter the number of elements "<<endl;
    cin>>size;

    cout<<"Enter the elements "<<endl;
    for(int i=1; i<=size; i++)
        cin>>numbers[i];

   cout<<"Enter the number you want to search "<<endl;
   cin>>item;
   int firstposition=binarysearch(-1);
   if(firstposition==-1)
    cout<<item<<" is not in the list "<<endl;
   else
   {
        int lastposition=binarysearch(1);
        cout<<item<<" is in position  ";
        for(int i=firstposition;i<=lastposition;i++)
            cout<<i<<" ";
   }
   cout<<endl;
    }

}
int binarysearch(int flag)
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
            if(flag==-1)
               end=mid-1;
            else
                beg=mid+1;
        }
        else if(numbers[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    return index;
}
