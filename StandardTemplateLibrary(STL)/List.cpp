#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void display(list<int>List);
list<int> list1;
list<int>list2;
int main()
{
     int num;
    cout<<"Enter the number of elements : "<<endl;
    cin>>num;
    cout<<"Enter the elements :"<<endl;
    int element;
    for(int i=1;i<=num;i++)
    {
        cin>>element;
        list1.push_back(element);
    }
   display(list1);


   list<int>::iterator it;
   it=list1.begin();
   advance(it,3);//insert in the 4th position
   list1.insert(it,100);
   display(list1);
}
void display(list<int>List)
{
  list<int>::iterator it;
    cout<<"List :"<<endl;
    for(it=List.begin();it!=List.end();it++)
    {
         cout<<*it<<endl;
    }
}
