#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> vec(5);
    for(int i=0;i<5;i++)
        vec[i]=i;
    cout<<"printing without iterator "<<endl;
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";


    cout<<"\nprinting with iterator "<<endl;

    vector <int> :: iterator it;

    for(it=vec.begin();it<vec.end();it++)
        cout<<*it<<" ";
}
