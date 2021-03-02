#include<iostream>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    set<int>myset;
    int n=10;
    //for(int i=1;i<=n;i++)
        //myset.insert(i);
        myset.insert(2);
        myset.insert(2);
        myset.insert(1);
        myset.insert(2);

    set<int> ::iterator it;
    cout<<"size of the set is : "<<myset.size()<<endl;
    cout<<"the set is :"<<endl;
    for(it=myset.begin();it!=myset.end();it++)//set has no index,not linear container
          cout<<*it<<" ";

  for(int i=2;i<=n;i+=2)
    myset.erase(i);
   cout<<"\nsize of the set is : "<<myset.size()<<endl;
   cout<<"the set is :"<<endl;
    for(it=myset.begin();it!=myset.end();it++)//set has no index,not linear container
          cout<<*it<<" ";
}
