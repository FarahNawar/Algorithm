#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
//    list<int> list1(5,2);
//    list<int> :: iterator it;
//
//    cout<<"list 1: "<<endl;
//    it=list1.begin();
//    while(it!=list1.end())
//    {
//        cout<<*it<<" ";
//        it++;
//    }
 list<int>::iterator it2;

   list<int> *mylist=new list<int>[7];
   for(it2=mylist->begin(); it2!=mylist->end(); it2++)
        cout<<*it2<<"ji"<<endl;

    list<int>list1;

    for(int i=1; i<=5; i++)
        list1.push_front(i);
    cout<<"list1(pushfront) :"<<endl;
    for(it2=list1.begin(); it2!=list1.end(); it2++)
        cout<<*it2<<endl;

    list<int> list2;
    for(int i=1; i<=5; i++)
        list2.push_back(i);
    cout<<"list2(pushback) :"<<endl;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
        cout<<*it2<<endl;
    list2.pop_front();
    cout<<"list2(popfront) :"<<endl;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
        cout<<*it2<<endl;

    list2.reverse();
     cout<<"list2(reverse) :"<<endl;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
        cout<<*it2<<endl;

    list2.sort();
     cout<<"list2(sort) :"<<endl;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
        cout<<*it2<<endl;




}
