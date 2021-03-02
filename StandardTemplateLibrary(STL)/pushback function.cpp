#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> A;
    int x;
    for(int i=1;i<=6;i++)
    {
        cin>>x;
        A.push_back(x);
    }
    for(int i=0;i<A.size();i++)
        cout<<A[i]<<" ";
}
