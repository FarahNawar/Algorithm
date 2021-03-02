#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int data[10],num;
    cout<<"Enter the number of Elements"<<endl;
    cin>>num;
    cout<<"Enter the elements :"<<endl;
    for(int i=1; i<=num; i++)
        cin>>data[i];

    for(int i=1; i<=num-1; i++)
        for(int j=i; j<=num; j++)
        {
            if(data[j]<data[i])
                swap(data[i],data[j]);
        }
    cout<<"\n\nSorted number"<<endl;
     for(int i=1;i<=num;i++)
        cout<<data[i]<<" ";
}
