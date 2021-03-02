#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    sort(arr,arr+n);
    cout<<"sorted in ascending order"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nsorted in descending order"<<endl;
     sort(arr,arr+n,greater<int>());
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}
